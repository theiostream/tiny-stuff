/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <UIKit/UIView.h>

@class TweetieUserProfile4WayCornerView, TweetieUserProfile4WayCornerSelectionView;

__attribute__((visibility("hidden")))
@interface TweetieUserProfile4WayButtonView : UIView {
@private
	TweetieUserProfile4WayCornerView* a;
	TweetieUserProfile4WayCornerView* b;
	TweetieUserProfile4WayCornerView* c;
	TweetieUserProfile4WayCornerView* d;
	TweetieUserProfile4WayCornerSelectionView* selectionHighlight;
}
-(id)initWithFrame:(CGRect)frame data:(id)data;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(void)didSelectCornerView:(id)view;
-(void)_removeSelection:(id)selection;
-(void)didDeselectCornerView:(id)view cancel:(BOOL)cancel;
-(void)unhighlight:(id)unhighlight;
-(void)animationDidStop:(id)animation finished:(id)finished context:(id)context;
@end

