/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "Twitter-Structs.h"
#import "ABStaticTableViewController.h"

@class NSString, UITextField;
@protocol TweetieAddAccountAdvancedViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieAddAccountAdvancedViewController : ABStaticTableViewController <UITextFieldDelegate> {
@private
	id<TweetieAddAccountAdvancedViewControllerDelegate> delegate;
	NSString* apiEndpointText;
	NSString* searchAPIEndpointText;
	UITextField* apiEndpointField;
	UITextField* searchAPIEndpointField;
}
@property(assign, nonatomic) id<TweetieAddAccountAdvancedViewControllerDelegate> delegate;
@property(copy, nonatomic) NSString* apiEndpointText;
@property(copy, nonatomic) NSString* searchAPIEndpointText;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)loadTableView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)view;
@end
