/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "Twitter-Structs.h"
#import "TwitterPadAppDelegate.h"
#import "TwitterCommonAppDelegate.h"

@class ABSwipeColumnViewController, TwitterPadSidebarViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface TwitterPadAppDelegate : TwitterCommonAppDelegate <UIAlertViewDelegate> {
@private
	UIWindow* window;
	UIWindow* statusBarWindow;
	ABSwipeColumnViewController* rootViewController;
	TwitterPadSidebarViewController* sidebar;
	int expect;
	UIWindow* blackout;
}
@property(readonly, assign, nonatomic) ABSwipeColumnViewController* rootViewController;
@property(readonly, assign, nonatomic) TwitterPadSidebarViewController* sidebar;
-(void)dealloc;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)_handleOpenURL:(id)url;
-(void)application:(id)application willChangeStatusBarOrientation:(int)orientation duration:(double)duration;
-(void)_endStatusBarChange;
-(void)_saveState;
-(id)rootView;
-(void)tapStatusBar:(CGPoint)bar;
@end

@interface TwitterPadAppDelegate (Push)
-(void)_dmPrompt:(id)prompt;
@end

