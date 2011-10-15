/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"

@class TwitterUser, NSMutableDictionary;
@protocol TweetieUserPerAccountToggleViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieUserPerAccountToggleViewController : ABStaticTableViewController {
@private
	id<TweetieUserPerAccountToggleViewControllerDelegate> delegate;
	TwitterUser* user;
	NSMutableDictionary* perAccountToggleStateDictionary;
}
@property(retain, nonatomic) TwitterUser* user;
@property(assign, nonatomic) id<TweetieUserPerAccountToggleViewControllerDelegate> delegate;
-(id)init;
-(void)dealloc;
-(id)keyForAccount:(id)account;
-(id)footerText;
-(void)loadTableView;
-(void)requestToggleStateForAccount:(id)account;
-(void)viewDidLoad;
-(void)isToggledResponse:(id)response info:(id)info;
-(void)done:(id)done;
-(void)toggleOnFromAccount:(id)account;
-(void)toggleOffFromAccount:(id)account;
-(void)didCheckmarkElement:(id)element;
@end
