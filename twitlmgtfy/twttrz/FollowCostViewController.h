/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"
#import "FollowCostDelegate.h"

@class FollowCost, TwitterUser, TwitterAccount;

__attribute__((visibility("hidden")))
@interface FollowCostViewController : ABStaticTableViewController <FollowCostDelegate> {
@private
	TwitterAccount* account;
	TwitterUser* user;
	FollowCost* followCost;
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
-(void)followCost:(id)cost didUpdateForUser:(id)user;
-(void)followCost:(id)cost failedToUpdateForUser:(id)user withError:(id)error;
-(void)dismissError:(id)error info:(id)info;
-(void)viewOnWeb:(id)web;
@end
