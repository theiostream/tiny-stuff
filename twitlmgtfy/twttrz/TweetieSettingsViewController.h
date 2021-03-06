/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewController.h"
#import "TweetieAddAccountViewControllerDelegate.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TweetieSettingsViewController : ABStaticTableViewController <TweetieAddAccountViewControllerDelegate> {
@private
	id delegate;
	NSMutableDictionary* accountSections;
}
@property(assign, nonatomic) id delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)viewDidLoad;
-(void)done:(id)done;
-(void)addAccount:(id)account;
-(void)addAccountController:(id)controller didAddAccount:(id)account;
-(void)accountDetails:(id)details;
-(void)loadPushSettings:(id)settings;
-(void)didLoadPushSettings:(id)settings info:(id)info;
-(id)_pushRowForAccount:(id)account;
-(void)loadTableView;
-(void)fontSizeUpdate:(id)update info:(id)info;
-(void)displayNameUpdate:(id)update info:(id)info;
@end

