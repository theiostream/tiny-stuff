/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TweetieUserListViewController.h"

@class TwitterUserList, TwitterUser;

__attribute__((visibility("hidden")))
@interface TweetieUserStreamViewController : TweetieUserListViewController {
@private
	TwitterUser* user;
	TwitterUserList* userList;
	BOOL didFirstLoad;
}
@property(retain, nonatomic) TwitterUser* user;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(id)_userList;
-(id)userList;
-(void)_update;
-(void)loadMore:(id)more;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)update:(id)update;
@end

