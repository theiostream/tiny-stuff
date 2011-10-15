/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "TwitterList.h"
#import <Foundation/NSObject.h>

@class TwitterUser, NSString, TwitterListStream, TwitterAccount;

__attribute__((visibility("hidden")))
@interface TwitterList : NSObject <NSCoding> {
@private
	TwitterAccount* account;
	NSString* listID;
	NSString* name;
	NSString* mode;
	NSString* slug;
	NSString* description;
	int subscriberCount;
	int memberCount;
	TwitterUser* user;
	TwitterListStream* stream;
}
@property(assign, nonatomic) TwitterAccount* account;
@property(retain, nonatomic) NSString* listID;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* mode;
@property(retain, nonatomic) NSString* slug;
@property(retain, nonatomic) NSString* description;
@property(assign, nonatomic) int subscriberCount;
@property(assign, nonatomic) int memberCount;
@property(retain, nonatomic) TwitterUser* user;
@property(readonly, assign, nonatomic) NSString* fullName;
+(id)listWithDictionary:(id)dictionary;
+(id)listWithXML:(id)xml;
+(id)listsWithXML:(id)xml;
+(id)listWithSlug:(id)slug account:(id)account;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)assimilateList:(id)list;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(BOOL)isPrivate;
-(id)stream;
@end

@interface TwitterList (XML)
+(void)parseListsXML:(id)xml info:(id)info;
-(void)parseListXML:(id)xml info:(id)info;
@end

