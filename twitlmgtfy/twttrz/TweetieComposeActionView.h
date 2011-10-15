/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TweetieComposeActionViewDelegate;

__attribute__((visibility("hidden")))
@interface TweetieComposeActionView : UIView {
@private
	id<TweetieComposeActionViewDelegate> delegate;
	NSMutableArray* actionButtons;
	BOOL highlightGeotagButton;
}
@property(assign, nonatomic) id<TweetieComposeActionViewDelegate> delegate;
@property(assign, nonatomic) BOOL highlightGeotagButton;
-(id)buttonImage:(id)image highlight:(BOOL)highlight;
-(void)_addButton:(int)button;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)buttonAction:(id)action;
-(CGRect)frameForButton:(int)button;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
@end

