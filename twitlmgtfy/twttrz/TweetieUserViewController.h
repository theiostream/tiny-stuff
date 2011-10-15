/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "ABSubTabBarController.h"
#import "TweetieEditProfileViewControllerDelegate.h"
#import "TweetieUserProfileViewControllerDelegate.h"
#import "ABSubTabBarControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class TweetieUserMentionsViewController, UIBarButtonItem, TweetieUserFavoritesViewController, TwitterUser, NSString, TweetieUserProfileViewController, TwitterAccount, TweetieUserRecentsViewController;

__attribute__((visibility("hidden")))
@interface TweetieUserViewController : ABSubTabBarController <ABSubTabBarControllerDelegate, TweetieEditProfileViewControllerDelegate, TweetieUserProfileViewControllerDelegate, UIActionSheetDelegate> {
@private
	TwitterAccount* account;
	TwitterUser* user;
	NSString* username;
	NSString* userID;
	UIBarButtonItem* actionItem;
	TweetieUserProfileViewController* profileViewController;
	TweetieUserRecentsViewController* recentsViewController;
	TweetieUserMentionsViewController* mentionsViewController;
	TweetieUserFavoritesViewController* favoritesViewController;
	XXStruct_3sqDcB _flags;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterUser* user;
@property(copy, nonatomic) NSString* username;
@property(copy, nonatomic) NSString* userID;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(void)dealloc;
-(BOOL)isMe;
-(void)_updateTitle;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(BOOL)userIsLoaded;
-(void)_updateNavigationBar;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)view;
-(void)_tryToResolveWithCachedUsers;
-(void)viewWillAppear:(BOOL)view;
-(void)fullUserResponse:(id)response info:(id)info;
-(void)dismissError:(id)error info:(id)info;
-(void)reply:(id)reply;
-(void)_loadConversation;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)edit:(id)edit;
-(void)editProfileControllerWillCancel:(id)editProfileController;
-(void)editProfileControllerDidSave:(id)editProfileController;
-(int)numberOfTabsInSubTabController:(id)subTabController;
-(id)subTabBarController:(id)controller accessibilityLabelForIndex:(int)index;
-(id)subTabBarController:(id)controller barItemForIndex:(int)index;
-(id)subTabBarController:(id)controller viewControllerForIndex:(int)index;
-(BOOL)subTabBarController:(id)controller drawGlowForIndex:(int)index;
-(void)subTabBarController:(id)controller didSelectViewControllerAtIndex:(int)index;
-(void)subTabBarController:(id)controller doubleTapTabItemAtIndex:(int)index;
-(void)profileViewControllerSelectFollowing;
-(void)profileViewControllerSelectFollowers;
-(void)_profileViewControllerSelectTweets;
-(void)_profileViewControllerSelectFavorites;
-(void)profileViewControllerSelectTweets;
-(void)profileViewControllerSelectFavorites;
@end
