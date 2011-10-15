/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "UIActionSheetDelegate.h"
#import "ABSearchableTableViewController.h"

@class UIBarButtonItem, NSArray, NSString, TwitterAccount;
@protocol TweetieDraftsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieDraftsViewController : ABSearchableTableViewController <UIActionSheetDelegate> {
@private
	id<TweetieDraftsViewControllerDelegate> delegate;
	TwitterAccount* account;
	NSString* filterString;
	NSArray* filteredDrafts;
	UIBarButtonItem* sendAllButton;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(assign, nonatomic) id<TweetieDraftsViewControllerDelegate> delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)_updateEditState;
-(void)viewDidLoad;
-(void)_updateFilteredDrafts;
-(void)viewWillAppear:(BOOL)view;
-(void)compose:(id)compose;
-(void)viewWillDisappear:(BOOL)view;
-(void)draftAddedNotification:(id)notification;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)compositionAtIndex:(int)index inTableView:(id)tableView;
-(void)_sendAll;
-(void)sendAll:(id)all;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
@end

