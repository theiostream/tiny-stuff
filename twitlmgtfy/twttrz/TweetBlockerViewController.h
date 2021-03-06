/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TweetBlockerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "ABStaticTableViewController.h"

@class TweetBlocker, UITableViewCell, TwitterUser, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TweetBlockerViewController : ABStaticTableViewController <TweetBlockerDelegate, UIActionSheetDelegate> {
@private
	TwitterAccount* account;
	TwitterUser* user;
	TweetBlocker* tweetBlocker;
	UITableViewCell* gradeCell;
	BOOL reported;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterUser* user;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)loadTableView;
-(void)viewDidLoad;
-(void)reportSpammer:(id)spammer;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)tweetBlocker:(id)blocker error:(id)error;
-(void)dismissError:(id)error info:(id)info;
-(void)tweetBlockerDidUpdate:(id)tweetBlocker;
@end

