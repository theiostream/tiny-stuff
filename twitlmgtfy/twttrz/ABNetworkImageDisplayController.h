/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "ABNetworkImageViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import <UIKit/UIViewController.h>

@class UIBarButtonItem, NSURL, UIScrollView, ABNetworkDisplayControllerImageView, NSString, ABDarkProgressBar, TwitterAccount;

__attribute__((visibility("hidden")))
@interface ABNetworkImageDisplayController : UIViewController <UIScrollViewDelegate, UIActionSheetDelegate, ABNetworkImageViewDelegate> {
@private
	TwitterAccount* account;
	NSURL* verificationURL;
	NSURL* imageURL;
	NSString* imagePath;
	NSURL* sourceURL;
	ABDarkProgressBar* progressBar;
	UIScrollView* scrollView;
	ABNetworkDisplayControllerImageView* imageView;
	BOOL uiVisible;
	BOOL toolbarWasHidden;
	UIBarButtonItem* actionItem;
	int saveImageButtonIndex;
	int mailLinkButtonIndex;
	int viewOriginalButtonIndex;
}
@property(retain, nonatomic) NSURL* verificationURL;
@property(retain, nonatomic) NSURL* imageURL;
@property(retain, nonatomic) NSString* imagePath;
@property(retain, nonatomic) NSURL* sourceURL;
@property(retain, nonatomic) TwitterAccount* account;
-(id)init;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)loadView;
-(void)didFollowRedirect:(id)redirect info:(id)info;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)loadFinalImage;
-(void)viewDidUnload;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_fixupAndClear;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)hideUI;
-(void)showUI;
-(void)toggleUI;
-(void)_restoreStyles:(BOOL)styles;
-(void)viewWillDisappear:(BOOL)view;
-(void)fixupScrollView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_clearProgressBar;
-(void)networkImageViewDidLoadImage:(id)networkImageView;
-(void)networkImageView:(id)view loadingProgress:(float)progress;
-(void)networkImageView:(id)view errorLoadingImage:(id)image;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)action:(id)action;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
@end

