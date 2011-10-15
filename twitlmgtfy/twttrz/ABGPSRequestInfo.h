/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>
#import "Twitter-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABGPSRequestInfo : NSObject <NSCopying, NSCoding> {
@private
	NSString* GUID;
	double created;
	double expires;
}
@property(retain, nonatomic) NSString* GUID;
@property(assign, nonatomic) double created;
@property(assign, nonatomic) double expires;
+(id)token;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
@end
