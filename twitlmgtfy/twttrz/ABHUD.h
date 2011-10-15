/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <UIKit/UIWindow.h>

@class NSString, UILabel, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface ABHUD : UIWindow {
@private
	UIActivityIndicatorView* activity;
	UILabel* label;
	UIWindow* blockingWindow;
	NSString* singletonKey;
	BOOL showBlockingWindow;
	BOOL showGrowlWindow;
}
@property(assign, nonatomic) BOOL showBlockingWindow;
@property(assign, nonatomic) BOOL showGrowlWindow;
@property(retain, nonatomic) NSString* singletonKey;
+(id)hudManager;
+(void)growlImage:(id)image text:(id)text;
+(void)indicateSuccess:(id)success;
+(void)indicateLongProgress:(id)progress;
+(void)indicateError:(id)error;
-(id)initWithText:(id)text;
-(void)drawRect:(CGRect)rect;
-(CGAffineTransform)_currentTransform;
-(void)animateIn;
-(void)resignKeyWindow;
-(void)dealloc;
-(void)show;
-(void)statusBarOrientationDidChange:(id)statusBarOrientation;
-(void)showBrieflyThenHide:(float)hide;
-(void)hideAnimationDidStop:(id)hideAnimation finished:(id)finished context:(void*)context;
-(void)hide;
-(void)_swapInImageNamed:(id)imageNamed;
-(void)setLargeImage:(id)image;
-(void)indicateSuccessAndHide:(id)hide;
-(void)indicateErrorAndHide:(id)hide;
@end

