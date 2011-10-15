/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TwitterTrendLocation : NSObject {
@private
	NSString* parentID;
	NSString* name;
	NSString* country;
	NSString* woeid;
}
@property(retain, nonatomic) NSString* parentID;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSString* woeid;
+(id)locationsWithJSON:(id)json;
+(void)parseArrayJSON:(id)json info:(id)info;
+(id)globalLocation;
-(BOOL)isEqual:(id)equal;
-(BOOL)isGlobal;
-(void)parseJSON:(id)json info:(id)info;
-(void)dealloc;
@end

