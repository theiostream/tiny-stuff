/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"

@class TwitterUser, TwitterListList, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TweetieListListViewController : ABStaticTableViewController {
@private
	TwitterAccount* account;
	TwitterUser* user;
	TwitterListList* listList;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterUser* user;
@property(retain, nonatomic) TwitterListList* listList;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(id)persistentProxy;
-(void)loadTableView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)listListsDidUpdateNotification:(id)listLists;
-(void)viewList:(id)list;
@end

