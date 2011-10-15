/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>
#import "UIActionSheetDelegate.h"
#import "ABTableViewPinchPreview.h"

@class NSArray, SearchRowView, ABTableViewPullToRefreshController, ABTableViewStayOnScreenController, TwitterAccount, UIWindow, UITableView, TwitterPadTweetViewController, NSString, ABTableViewPinchPreviewController, TwitterStatus;

__attribute__((visibility("hidden")))
@interface TwitterPadStatusListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, ABTableViewPinchPreview, UIActionSheetDelegate> {
@private
	TwitterAccount* account;
	UITableView* _tableView;
	UIWindow* pinchWindow;
	NSArray* statuses;
	NSArray* _setStatusesOnEndScrolling;
	TwitterStatus* longPressTweet;
	NSString* longPressString;
	SearchRowView* searchHeader;
	TwitterPadTweetViewController* currentPinchTweetViewController;
	ABTableViewPullToRefreshController* pullToRefreshController;
	ABTableViewStayOnScreenController* stayOnScreenController;
	ABTableViewPinchPreviewController* pinchPreviewController;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) NSArray* statuses;
@property(retain, nonatomic) TwitterPadTweetViewController* currentPinchTweetViewController;
-(void)_resetSubviews;
-(void)dealloc;
-(BOOL)showFilterBar;
-(BOOL)canPullToRefresh;
-(void)ab_scrollToTop;
-(BOOL)showToolbar;
-(id)toolbarView;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)loadOlder:(id)older;
-(void)loadNewer:(id)newer;
-(void)fillInGap:(id)gap;
-(void)viewedMostRecent:(id)recent;
-(BOOL)isLoadingNewer;
-(BOOL)canSetStatuses;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_setPendingStatusesIfNeeded;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(BOOL)pinchPreviewController:(id)controller willStartPreviewForCell:(id)cell;
-(id)pinchPreviewController:(id)controller viewControllerForCell:(id)cell;
-(id)pinchPreviewController:(id)controller containerViewForPinchedCell:(id)pinchedCell;
-(id)pinchPreviewController:(id)controller footerFlapControllerForPinchedCell:(id)pinchedCell;
-(id)pinchPreviewController:(id)controller headerFlapForPinchedCell:(id)pinchedCell;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_selectItemWithoutNavigating:(id)navigating;
-(id)indexPathForItem:(id)item;
-(void)pullToRefreshController:(id)refreshController didActivate:(BOOL)activate;
-(void)ab_willPopToRightColumn;
-(void)twitterPadTableViewDidChangeFrame:(id)twitterPadTableView;
-(void)_viewStatus:(id)status linkRange:(id)range;
-(void)_didTapLink:(id)link info:(id)info;
-(void)twitterStatusCell:(id)cell didTapLink:(id)link;
-(void)twitterStatusCell:(id)cell didLongPressLink:(id)link;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(id)indexPathForStatusWithID:(id)anId;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)ab_didPopDetails;
-(void)twitterStatusCellDidTapBody:(id)twitterStatusCell;
-(void)twitterStatusCellDidTapAvatar:(id)twitterStatusCell;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)autosaveName;
-(void)saveScrollPosition;
-(void)restoreScrollPosition;
@end
