/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "ABStaticTableViewController.h"

@class TwitterList, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TweetieListDetailsViewController : ABStaticTableViewController <UIActionSheetDelegate> {
@private
	TwitterAccount* account;
	TwitterList* list;
	id bioSection;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterList* list;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)_updateTitle;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)loadTableView;
-(void)user:(id)user;
-(void)following:(id)following;
-(void)followers:(id)followers;
-(void)share:(id)share;
-(void)edit:(id)edit;
-(void)didEditList:(id)list info:(id)info;
-(void)delete:(id)aDelete;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)viewWillAppear:(BOOL)view;
-(void)compose:(id)compose;
-(id)toolbarItemArray;
-(void)flip:(id)flip;
-(void)followList:(id)list;
-(void)unfollowList:(id)list;
-(void)confirmFollow:(id)follow info:(id)info;
-(void)confirmUnfollow:(id)unfollow info:(id)info;
@end

