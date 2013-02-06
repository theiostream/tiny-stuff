#import <libdisplaystack/DSDisplayController.h>

@interface BBBulletin : NSObject
- (NSString *)sectionID;
@end

@interface SBBulletinBannerItem : NSObject
- (BBBulletin *)seedBulletin;
@end

@interface SBBannerController : NSObject
+ (id)sharedInstance;
- (void)dismissBannerWithAnimation:(int)animation;
- (void)dismissBannerWithAnimation:(int)animation reason:(int)reason;
- (BOOL)isShowingBanner;
@end

@interface SBApplication : NSObject
- (NSString *)displayIdentifier;
@end

@interface SBDisplayStack : NSObject
- (SBApplication *)topApplication;
@end

@interface BKSWorkspace : NSObject
- (NSString *)topApplication;
@end

@interface SBWorkspace : NSObject
- (BKSWorkspace *)bksWorkspace;
@end

#ifndef kCFCoreFoundationVersionNumber_iOS_6_0
#define kCFCoreFoundationVersionNumber_iOS_6_0 793.00
#endif

#define IS_IOS6 (kCFCoreFoundationVersionNumber>=kCFCoreFoundationVersionNumber_iOS_6_0)

static SBBulletinBannerItem *g_item = nil;
static int g_reason = -1;
static SBWorkspace *g_workspace = nil;

%group Hooks6x
%hook SBWorkspace
- (id)init {
	if ((self = %orig)) {
		if (g_workspace == nil)
			g_workspace = [self retain];
	}
	
	return self;
}

- (void)dealloc {
	if (g_workspace == self) {
		[g_workspace release];
		g_workspace = nil;
	}
	
	%orig;
}
%end

%hook SBBannerController
- (BOOL)_presentBannerForItem:(SBBulletinBannerItem *)item existingDismissReason:(int)reason {
	g_reason = reason;
	g_item = item;
	
	return %orig;
}
%end
%end

%group Hooks5x
%hook SBBulletinBannerController
- (void)_presentBannerForItem:(SBBulletinBannerItem *)item {
	g_item = item;
	%orig;
}
%end
%end

%hook SpringBoard
- (void)frontDisplayDidChange {
	%orig;
	
	Class banner_controller_class = IS_IOS6 ? %c(SBBannerController) : %c(SBBulletinBannerController);
	SBBannerController *banner_controller = (SBBannerController *)[banner_controller_class sharedInstance];
	
	if ([banner_controller isShowingBanner]) {
		NSString *display_identifier = IS_IOS6 ? [[g_workspace bksWorkspace] topApplication] : [[[[%c(DSDisplayController) sharedInstance] activeStack] topApplication] displayIdentifier];
		if ([display_identifier isEqualToString:[[g_item seedBulletin] sectionID]]) {
			if (IS_IOS6) {
				[banner_controller dismissBannerWithAnimation:1 reason:g_reason];
				g_reason = -1;
			}
			else {
				[banner_controller dismissBannerWithAnimation:1];
			}
		}
	}
	
	g_item = nil;
}
%end

%ctor {
	if (IS_IOS6)
		%init(Hooks6x);
	else {
		dlopen("/Library/MobileSubstrate/DynamicLibraries/DisplayStack.dylib", RTLD_LAZY);
		%init(Hooks5x);
	}
	
	%init;
}