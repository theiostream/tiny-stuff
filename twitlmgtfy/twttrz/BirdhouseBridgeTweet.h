/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BirdhouseBridgeTweet : NSObject <NSCoding> {
@private
	NSString* text;
	NSString* inReplyToStatusID;
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* inReplyToStatusID;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(id)pasteboardRepresentation;
@end

