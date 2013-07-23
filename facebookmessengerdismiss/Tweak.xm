// yay

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

@interface UIApplication (FacebookMessengerDismissSB)
- (SBApplication *)_accessibilityFrontMostApplication;
@end

static inline SBApplication *TopApp() {
	return [[%c(UIApplication) sharedApplication] _accessibilityFrontMostApplication];
}

static BOOL ItemShouldReturn(SBBulletinBannerItem *item) {
	return ([[TopApp() displayIdentifier] isEqualToString:@"com.facebook.Facebook"] &&
	        [[[item seedBulletin] sectionID] isEqualToString:@"com.facebook.Messenger"]);
}

%group Hooks5x
%hook SBBulletinBannerController
- (void)_presentBannerForItem:(SBBulletinBannerItem *)item {
	if (!ItemShouldReturn(item)) %orig;
}
%end
%end

%group Hooks6x
%hook SBBannerController
- (BOOL)_presentBannerForItem:(SBBulletinBannerItem *)item existingDismissReason:(int)reason {
	if (ItemShouldReturn(item)) return NO;
	return %orig;
}
%end
%end

%ctor {
	if (kCFCoreFoundationVersionNumber >= 793.00) %init(Hooks6x);
	else %init(Hooks5x);
}
