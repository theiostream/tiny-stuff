/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import <UIKit/UINavigationController.h>

@class TwitterAccount;

__attribute__((visibility("hidden")))
@interface TwitterWelcomeNavigationController : UINavigationController <UINavigationControllerDelegate> {
@private
	id welcomeDelegate;
	TwitterAccount* account;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(assign, nonatomic) id welcomeDelegate;
-(id)initWithAccount:(id)account;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)sulViewController;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)backToWelcome:(id)welcome;
-(void)done:(id)done;
-(id)originatingTweet;
@end

