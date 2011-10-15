/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABVerticalFlowViewDelegate.h"
#import <UIKit/UIViewController.h>

@class NSURL, TwitterStatus, NSArray, TwitterAccount, ABVerticalFlowView;

__attribute__((visibility("hidden")))
@interface TwitterPadTweetMediaViewController : UIViewController <ABVerticalFlowViewDelegate> {
@private
	TwitterAccount* account;
	TwitterStatus* status;
	NSURL* selectedURL;
	NSArray* _mediaURLs;
	ABVerticalFlowView* _flowView;
	int nextThumbIndex;
}
@property(retain, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) TwitterStatus* status;
@property(retain, nonatomic) NSURL* selectedURL;
-(void)dealloc;
-(id)mediaURLs;
-(void)loadView;
-(void)loadNextThumb;
-(void)imageResponse:(id)response info:(id)info;
-(void)viewDidAppear:(BOOL)view;
-(int)verticalFlowViewNumberOfItems:(id)items;
-(id)verticalFlowViewFullscreenContainer:(id)container;
@end
