/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "Twitter-Structs.h"
#import "TIComposeAttachmentsViewDelegate.h"
#import "TIComposeMapViewDelegate.h"
#import "ABAutocompleteControllerDelegate.h"
#import "TweetieComposeSwitchAccountViewControllerDelegate.h"
#import "UITextViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import <UIKit/UIViewController.h>
#import "TweetieComposeViewController.h"
#import "ABPlacePickerDelegate.h"

@class TIComposeMapView, TIComposeAttachmentsView, TweetieComposeTitleView, TwitterAccount, TwitterAutocompleteController, UIBarButtonItem, TwitterComposition, NSURL, UILabel, UIButton, UIActivityIndicatorView, UIImageView, UIView, UIActionSheet, NSMutableArray, SMTEDelegateController, UIScrollView, UITextView, ABHUD, TweetieComposeAttachmentsViewController;
@protocol TweetieComposeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieComposeViewController : UIViewController <UIActionSheetDelegate, UIAlertViewDelegate, UITextViewDelegate, UIScrollViewDelegate, TIComposeMapViewDelegate, TIComposeAttachmentsViewDelegate, TweetieComposeSwitchAccountViewControllerDelegate, ABAutocompleteControllerDelegate> {
@private
	id<TweetieComposeViewControllerDelegate> delegate;
	TwitterAccount* account;
	TwitterComposition* composition;
	NSURL* remoteCallback;
	UILabel* remainingCharactersLabel;
	UIButton* disclosureButton;
	UIActivityIndicatorView* disclosureSpinner;
	UIImageView* disclosurePin;
	UIButton* buttonBarPlaceButton;
	UIButton* buttonBarPhotoButton;
	UIBarButtonItem* sendButton;
	UIView* header;
	UILabel* peekTextLabel;
	TweetieComposeTitleView* titleView;
	UIActionSheet* cancelActionSheet;
	UIActionSheet* tooLongActionSheet;
	UIActionSheet* geotagActionSheet;
	UIButton* placeBar;
	UIButton* geoButton;
	UIActivityIndicatorView* locationSpinner;
	UILabel* placeBarLoadingLabel;
	ABHUD* hud;
	NSMutableArray* places;
	NSRange preUndoOrRedoSelection;
	BOOL menuWillAppear;
	int autocompleteStartIndex;
	NSRange selection;
	UIImageView* nipple;
	TIComposeMapView* mapView;
	TIComposeAttachmentsView* attachmentsView;
	TweetieComposeAttachmentsViewController* attachmentsViewController;
	TwitterAutocompleteController* autocompleteController;
	SMTEDelegateController* textExpanderController;
	int saveButtonIndex;
	int saveToBirdhouseButtonIndex;
	int dontSaveButtonIndex;
	NSRange lastSelectionRange;
	id _locationRequestToken;
	BOOL foundCoursePlaces;
	BOOL automaticallyPickGeo;
	BOOL userClickedGeo;
	UIScrollView* underKeyboardView;
	UITextView* textView;
	UIView* textViewWrapper;
	UIView* buttonBarContainer;
	UIView* centeredButtonsContainer;
	struct {
		unsigned headerVisible : 1;
		unsigned animationCount : 5;
		unsigned once : 1;
	} _flags;
}
@property(assign, nonatomic) id<TweetieComposeViewControllerDelegate> delegate;
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterComposition* composition;
@property(retain, nonatomic) NSURL* remoteCallback;
@property(readonly, assign, nonatomic) UIScrollView* underKeyboardView;
@property(readonly, assign, nonatomic) UITextView* textView;
@property(readonly, assign, nonatomic) UIView* textViewWrapper;
@property(readonly, assign, nonatomic) UIView* buttonBarContainer;
@property(readonly, assign, nonatomic) UIView* centeredButtonsContainer;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)accountConfigurationDidChange:(id)accountConfiguration;
-(void)dealloc;
-(void)_updateHeaderFrame;
-(void)loadView;
-(void)_typeText:(id)text;
-(void)prepareForForcedAutoComplete;
-(void)buttonBarAt:(id)at;
-(void)buttonBarHash:(id)hash;
-(void)buttonBarPlace:(id)place;
-(void)autocompleteControllerDidBegin:(id)autocompleteController;
-(void)autocompleteControllerDidEnd:(id)autocompleteController;
-(void)pushLoading;
-(void)popLoading;
-(void)_updateTitle;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(CGRect)_nippleFrame;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)keyboardDidShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)didSelectPlaceEntity:(id)entity;
-(void)didUndoOrRedo:(id)redo;
-(void)willUndoOrRedo:(id)redo;
-(void)willShowMenu:(id)menu;
-(void)didShowMenu:(id)menu;
-(int)visibleUnderKeyboardViewIndex;
-(void)scrollToUnderKeyboardViewIndex:(int)underKeyboardViewIndex animated:(BOOL)animated;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_saveDraftAndDismiss;
-(void)cancel:(id)cancel;
-(void)forceDismissAndSaveAsDraft;
-(void)_dismiss;
-(void)_send;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_checkLengthAndSend;
-(void)send:(id)send;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)selectAccount:(id)account;
-(void)dismissAccountSwitcher:(id)switcher;
-(BOOL)_keyboardIsUp;
-(void)_showKeyboard:(id)keyboard;
-(void)_hideKeyboard:(id)keyboard;
-(void)_toggleKeyboard:(id)keyboard;
-(void)camera:(id)camera;
-(void)photoLibrary:(id)library;
-(void)_textDidChange;
-(void)textViewDidChangeSelection:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)attachments:(id)attachments;
-(void)didRemoveAttachment:(id)attachment;
-(void)_updateGlowingButtonBarButtons;
-(void)_setupCounter;
@end

@interface TweetieComposeViewController (ABAdditions)
-(BOOL)isWorthSaving;
-(BOOL)isWorthSending;
-(void)setText:(id)text;
-(void)appendWhitespaceAndText:(id)text;
-(void)appendUsername:(id)username;
-(void)_didAddAttachment:(id)attachment;
-(void)_handleMedia:(id)media;
-(void)handleMedia:(id)media info:(id)info;
-(void)shortenURLsResponse:(id)response info:(id)info;
@end

@interface TweetieComposeViewController (Geo) <ABPlacePickerDelegate>
-(BOOL)shouldAutoGeoTag;
-(void)handleAutomaticGeoTagging;
-(void)_updateGeoButton;
-(void)promptToEnableGeo;
-(void)enableGeotag:(id)geotag info:(id)info;
-(void)didEnableGeo:(id)geo info:(id)info;
-(void)startGeoTag;
-(void)gpsUpdate:(id)update info:(id)info;
-(void)_disableGeotagging;
-(BOOL)geoEnabled;
-(void)enableGeo:(id)geo;
-(void)disableGeo:(id)geo;
-(void)setGeoEnabled:(BOOL)enabled;
-(void)toggleGeo:(id)geo;
-(void)userDidFinishPickingPlace:(id)user;
@end
