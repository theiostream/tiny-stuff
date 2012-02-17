#import <libdisplaystack/DSDisplayController.h>

static id _item = nil;

%hook SBBulletinBannerController
- (void)_presentBannerForItem:(id)item {
	%orig;
	_item = item;
}
%end

%hook SpringBoard
- (void)frontDisplayDidChange {
	%orig;
	
	id banner_controller = [%c(SBBulletinBannerController) sharedInstance];
	
	if ([banner_controller isShowingBanner]) {
		id astack = [[DSDisplayController sharedInstance] activeStack];
		id topApp = [astack topApplication];
		
		if ([[topApp displayIdentifier] isEqualToString:[[_item seedBulletin] sectionID]]) {
			[banner_controller dismissBannerWithAnimation:1];
		}
	}
}
%end