/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TwitterRelationship : NSObject {
@private
	NSString* username;
	BOOL following;
	BOOL followedBy;
}
@property(retain, nonatomic) NSString* username;
@property(assign, nonatomic) BOOL following;
@property(assign, nonatomic) BOOL followedBy;
+(id)relationshipsWithXML:(id)xml;
+(void)parseRelationshipsXML:(id)xml info:(id)info;
-(void)parseRelationshipXML:(id)xml info:(id)info;
-(id)description;
@end
