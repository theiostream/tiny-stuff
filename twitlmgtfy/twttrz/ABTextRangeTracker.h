/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableString, NSArray, NSMutableArray;
@protocol ABTextRangeTrackerDelegate;

__attribute__((visibility("hidden")))
@interface ABTextRangeTracker : NSObject {
@private
	id<ABTextRangeTrackerDelegate> delegate;
	NSMutableString* text;
	NSMutableArray* ranges;
}
@property(readonly, assign, nonatomic) NSArray* ranges;
-(id)init;
-(void)dealloc;
-(void)_deleteRange:(NSRange)range;
-(void)_insertText:(id)text atIndex:(int)index;
-(void)updateTextInRange:(NSRange)range withText:(id)text;
-(void)removeTextRange:(id)range;
-(void)addTextRange:(id)range;
-(void)addRange:(NSRange)range info:(id)info;
-(BOOL)textRangeExistsAtRange:(NSRange)range;
@end

