/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"

@class ABCallback, TwitterUser, NSMutableDictionary, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TweetieUserListManagementViewController : ABStaticTableViewController {
@private
	TwitterAccount* account;
	TwitterUser* user;
	ABCallback* dismissCallback;
	NSMutableDictionary* perListFollowsUserDictionary;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterUser* user;
@property(retain, nonatomic) ABCallback* dismissCallback;
-(id)init;
-(void)dealloc;
-(id)_keyForList:(id)list;
-(int)_isFollowedByList:(id)list;
-(void)loadTableView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)listsDidUpdate:(id)lists;
-(void)listDoesFollowUserResponse:(id)response info:(id)info;
-(void)didCheckmarkElement:(id)element;
-(void)done:(id)done;
@end

