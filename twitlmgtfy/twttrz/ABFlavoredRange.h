/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <Foundation/NSObject.h>
#import "ABActiveTextRange.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABFlavoredRange : NSObject <ABActiveTextRange> {
@private
	NSString* displayString;
	NSRange rangeValue;
	int rangeFlavor;
}
@property(assign, nonatomic) NSRange rangeValue;
@property(readonly, assign, nonatomic) int rangeFlavor;
@property(readonly, assign, nonatomic) NSString* displayString;
+(id)valueWithRange:(NSRange)range;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)setRangeFlavor:(int)flavor;
-(void)setDisplayString:(id)string;
@end
