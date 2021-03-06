/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TouchAndHoldCellDelegate.h"
#import "Twitter-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>
#import "UIActionSheetDelegate.h"
#import "UITextViewDelegate.h"

@class TwitterComposition, TwitterAccount, UITableView, TweetieDirectMessageCell, UIBarButtonItem, UILabel, UIImageView, UIView, UIActionSheet, TwitterDirectMessageConversation, ABGrowingTextView;

__attribute__((visibility("hidden")))
@interface TweetieConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UITextViewDelegate, TouchAndHoldCellDelegate> {
@private
	TwitterAccount* account;
	TwitterDirectMessageConversation* conversation;
	UITableView* _tableView;
	UIBarButtonItem* sendButton;
	UIBarButtonItem* actionButton;
	UIActionSheet* _retrySheet;
	TwitterComposition* compositionToRetry;
	UIActionSheet* _deleteSheet;
	UIActionSheet* _actionSheet;
	UIView* composeBar;
	ABGrowingTextView* composeTextView;
	UILabel* counter;
	UIImageView* composeBubble;
	TwitterComposition* composition;
	id linkSheetHelper;
	float lastBottomOffset;
	CGRect keyboardFrame;
	TweetieDirectMessageCell* selectedCell;
	BOOL showLoadingSpinner;
	XXStruct_3sqDcB _flags;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterDirectMessageConversation* conversation;
@property(assign, nonatomic) BOOL showLoadingSpinner;
+(id)controllerWithConversation:(id)conversation account:(id)account;
+(BOOL)recipient:(id)recipient conversingWith:(id)with;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)scrollToBottomAnimated:(BOOL)bottomAnimated;
-(void)updateCounter;
-(void)refreshComposer;
-(void)textViewDidChange:(id)textView;
-(void)fitTextView;
-(void)fitTableView;
-(void)fitComposeBar;
-(float)textViewWidthWithLabel:(BOOL)label;
-(void)setupComposeBar;
-(void)fitComposeBubble;
-(float)keyboardHeightForOrientation:(int)orientation;
-(float)keyboardHeight;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)ab_attemptToRecordImpressionFromReferringEvent:(id)referringEvent;
-(void)ab_resetImpression;
-(void)updateSuggestiveLanguage;
-(void)keyboardLanguageDidChange:(id)keyboardLanguage;
-(void)directMessageManagerDidUpdate:(id)directMessageManager;
-(void)viewDidAppear:(BOOL)view;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)viewWillDisappear:(BOOL)view;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)deleteConversation:(id)conversation;
-(void)user:(id)user;
-(void)action:(id)action;
-(void)sendMessage:(id)message;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)reply:(id)reply;
-(void)conversationDidUpdate:(id)conversation;
-(id)messageAtIndex:(int)index;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)didTouchFailedSendButton:(id)button info:(id)info;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)didCopyDirectMessageText:(id)text;
-(void)viewUserDetails:(id)details;
-(void)didTouchAndHoldForCell:(id)cell;
@end

