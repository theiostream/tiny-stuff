/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewController.h>

@class TwitterComposition, TwitterAccount, UISegmentedControl;
@protocol TweetieComposeSwitchAccountViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieComposeSwitchAccountViewController : UITableViewController {
@private
	id<TweetieComposeSwitchAccountViewControllerDelegate> delegate;
	TwitterAccount* selectedAccount;
	TwitterComposition* composition;
	UISegmentedControl* segmented;
}
@property(assign, nonatomic) id<TweetieComposeSwitchAccountViewControllerDelegate> delegate;
@property(retain, nonatomic) TwitterAccount* selectedAccount;
@property(retain, nonatomic) TwitterComposition* composition;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)done:(id)done;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
@end

