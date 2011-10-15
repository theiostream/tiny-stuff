/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <UIKit/UIResponder.h>
#import "ABUITextRenderer.h"

@class UIView, NSAttributedString;
@protocol ABActiveTextRange, ABUITextRendererDelegate;

__attribute__((visibility("hidden")))
@interface ABUITextRenderer : UIResponder {
@private
	NSAttributedString* attributedString;
	CGRect frame;
	UIView* view;
	CTFramesetterRef _ct_framesetter;
	CGPathRef _ct_path;
	CTFrameRef _ct_frame;
	CGSize _size;
	int _selectionStart;
	int _selectionEnd;
	int _selectionAffinity;
	id<ABUITextRendererDelegate> delegate;
	id<ABActiveTextRange> hitRange;
	CGPoint hitPoint;
	id drawHighlight;
	XXStruct_3sqDcB _flags;
}
@property(retain, nonatomic) NSAttributedString* attributedString;
@property(assign, nonatomic) CGRect frame;
@property(assign, nonatomic) UIView* view;
@property(retain, nonatomic) id<ABActiveTextRange> hitRange;
@property(assign, nonatomic) CGPoint hitPoint;
@property(copy, nonatomic) id drawHighlight;
-(void)_resetFramesetter;
-(void)dealloc;
-(void)_buildFramesetter;
-(CTFramesetterRef)ctFramesetter;
-(CTFrameRef)ctFrame;
-(CGPathRef)ctPath;
-(long)_clampToValidRange:(long)validRange;
-(NSRange)_wordRangeAtIndex:(long)index;
-(NSRange)_lineRangeAtIndex:(long)index;
-(NSRange)_paragraphRangeAtIndex:(long)index;
-(XXStruct_K5nmsA)_selectedRange;
-(id)selectedString;
-(void)draw;
-(CGSize)size;
-(CGRect)firstRectForCharacterRange:(XXStruct_K5nmsA)characterRange;
-(void)rectsForRange:(XXStruct_K5nmsA)range rects:(CGRect*)rects rectCount:(int*)count;
@end

@interface ABUITextRenderer (Event)
@property(assign, nonatomic) id<ABUITextRendererDelegate> delegate;
-(long)stringIndexForPoint:(CGPoint)point;
-(CGRect)convertRect:(CGRect)rect;
-(id)hitTestRanges:(id)ranges forPoint:(CGPoint)point padding:(float)padding;
-(id)touchesBegan:(id)began withEvent:(id)event;
-(id)touchesMoved:(id)moved withEvent:(id)event;
-(id)touchesEnded:(id)ended withEvent:(id)event;
-(id)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

