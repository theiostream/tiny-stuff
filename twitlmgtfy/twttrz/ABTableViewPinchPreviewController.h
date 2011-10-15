/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "Twitter-Structs.h"

@class CADisplayLink, UIImageView, UIView, UIViewController, UITableView, ABCallback, ABTableViewStayOnScreenController;
@protocol ABTableViewPinchPreview;

__attribute__((visibility("hidden")))
@interface ABTableViewPinchPreviewController : NSObject {
@private
	UIViewController<ABTableViewPinchPreview>* _contentsController;
	UITableView* _tableView;
	ABTableViewStayOnScreenController* stayOnScreenController;
	ABCallback* didDismissCallback;
	UIView* _blackView;
	UIViewController* _previewViewController;
	UIImageView* shadow1;
	UIImageView* shadow2;
	float originalCellHeight;
	CGRect cellRect;
	float pinchContainerHeight;
	float originalPinchFingerDistance;
	float lastPinchFingerDistance;
	UIView* _pinchContainer;
	UIView* _originalPinchBlocker;
	UIView* _pinchTopFlap;
	UIView* _pinchBottomFlap;
	UIView* _pinchTopFlapShade;
	UIView* _pinchBottomFlapShade;
	UIView* _pinchTopFlapContents;
	UIView* _pinchBottomFlapContents;
	UIImageView* _shadow;
	UIView* _pinchBlackout;
	UIViewController* flapContentsController;
	float filteredPinchT;
	float pinchLastT;
	float pinchLastDT;
	CGPoint pinchLastA;
	CGPoint pinchLastB;
	CGPoint pinchLastCenter;
	double startAnimateOutPinch;
	int twoFingerState;
	CGPoint a_;
	CGPoint b_;
	CGPoint center_;
	CADisplayLink* displayLink;
	BOOL needsUpdate;
	BOOL tracking;
	BOOL pinching;
}
@property(assign, nonatomic) ABTableViewStayOnScreenController* stayOnScreenController;
@property(retain, nonatomic) ABCallback* didDismissCallback;
@property(readonly, assign, nonatomic) BOOL pinching;
-(id)initWithTableView:(id)tableView contentsController:(id)controller;
-(void)dealloc;
-(id)_interactionCell:(id)cell;
-(void)_startWindowShade:(id)shade;
-(void)_continueWindowShade:(id)shade;
-(void)_endWindowShade:(id)shade;
-(void)_finishEndWindowShade;
-(void)_finishWindowShadeAnimationDidEnd:(id)_finishWindowShadeAnimation finished:(id)finished context:(void*)context;
-(void)_startPinch:(id)pinch;
-(float)_pinchDelta:(float)delta;
-(void)_updatePinch:(CGPoint)pinch :(CGPoint)arg2 :(CGPoint)arg3;
-(void)_continuePinch:(id)pinch;
-(void)displayLink:(id)link;
-(void)_dismiss;
-(void)dismiss:(id)dismiss;
-(void)_endPinch:(id)pinch;
-(void)pinchOut:(id)anOut;
-(void)pinchTapDismiss:(id)dismiss;
-(void)_finishEndPinch;
-(void)animateOpenPinch:(id)pinch;
-(void)animateOutPinch:(id)pinch;
-(void)fadeOutPinch:(id)pinch;
-(void)twoFingerGesture:(id)gesture;
-(void)cancel;
@end
