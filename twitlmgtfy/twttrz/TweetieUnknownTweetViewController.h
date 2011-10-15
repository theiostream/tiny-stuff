/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"

@class NSString, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TweetieUnknownTweetViewController : ABStaticTableViewController {
@private
	TwitterAccount* account;
	NSString* statusID;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(copy, nonatomic) NSString* statusID;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)loadTableView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)statusResponse:(id)response info:(id)info;
-(void)dismissError:(id)error info:(id)info;
@end

