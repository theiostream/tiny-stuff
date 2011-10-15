/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "ABMasterViewController.h"
#import "UIActionSheetDelegate.h"
#import "ABUITextViewDelegate.h"

@class NSArray, TwitterAccount, UILabel, UIButton, UIImageView, UIView, ABTextView, NSMutableArray, NSString, TweetiePromotedButton, ABTableViewPinchPreviewController, TwitterStatus;
@protocol ABActiveTextRange;

__attribute__((visibility("hidden")))
@interface TwitterPadTweetViewController : ABMasterViewController <ABUITextViewDelegate, UIActionSheetDelegate> {
@private
	TwitterAccount* account;
	TwitterStatus* status;
	NSString* statusID;
	ABTableViewPinchPreviewController* pinchPreviewController;
	UIView* selectionBubbleContainer;
	ABTextView* textView;
	UILabel* usernameLabel;
	float textViewHeight;
	TweetiePromotedButton* promotedButton;
	id<ABActiveTextRange> selectRange;
	NSMutableArray* selectionBubbles;
	NSArray* metaActiveRanges;
	UIView* subViewBG;
	UIViewController* subViewController;
	UIImageView* shadow;
	UIView* header;
	UIImageView* avatar;
	UIView* bottomBar;
	UIView* _bottomBarSubview;
	struct {
		UIButton* reply;
		UIButton* favorite;
		UIButton* retweet;
		UIButton* action;
	} button;
	NSRange _inReplyToRange;
	NSRange _placeRange;
	NSRange _retweeterRange;
	NSRange _sourceRange;
	struct {
		unsigned didShowFirstSubViewController : 1;
		unsigned actionSheetMode : 3;
	} _flags;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterStatus* status;
@property(retain, nonatomic) NSString* statusID;
@property(assign, nonatomic) ABTableViewPinchPreviewController* pinchPreviewController;
+(void)initialize;
+(id)gradientButtonImage:(id)image highlighted:(BOOL)highlighted;
+(void)translationResponse:(id)response info:(id)info;
-(void)dealloc;
-(BOOL)isMediaLinkString:(id)string;
-(BOOL)rangeNeedsWideDisplay:(id)display;
-(void)_updateSelectionBubble;
-(void)_goSelected;
-(BOOL)needsWide;
-(void)_showEmailComposer:(id)composer;
-(void)selectLink:(id)link;
-(void)userDetails:(id)details;
-(void)_updateRenderer:(BOOL)renderer;
-(id)fromPerson;
-(CGRect)subViewFrame;
-(id)buttonImageNamed:(id)named highlighted:(BOOL)highlighted;
-(void)_updateFavoritesButton;
-(void)loadView;
-(void)didClickPromotedLabel:(id)label info:(id)info;
-(void)_updateLayout;
-(void)autoselect;
-(void)viewDidLoad;
-(void)profileImage73Response:(id)response info:(id)info;
-(id)visibleViewControllers;
-(id)activeRangesForTextRenderer:(id)textRenderer;
-(void)textView:(id)view didTapActiveRange:(id)range;
-(void)ab_scrollToTop;
-(float)ab_swipeColumnWidth:(int)width;
-(void)_setupNewSubviewControllerView;
-(void)setSubViewController:(id)controller animated:(BOOL)animated;
-(void)__replyAll;
-(void)_replyAll;
-(void)reply:(id)reply;
-(void)retweet:(id)retweet;
-(void)favorite:(id)favorite;
-(void)action:(id)action;
-(void)_quoteTweet;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
@end
