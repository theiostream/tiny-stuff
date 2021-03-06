/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, NSDictionary, NSMutableString, NSDateFormatter, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ABXMLParser : NSObject {
@private
	NSMutableArray* errors;
	NSMutableArray* callbacks;
	NSMutableString* _characters;
	BOOL canPushCallback;
	BOOL didPushCallback;
	NSString* elementName;
	NSDictionary* attributes;
	NSDateFormatter* httpLikeDateFormatter;
}
@property(readonly, assign, nonatomic) NSString* elementName;
@property(readonly, assign, nonatomic) NSDictionary* attributes;
@property(readonly, assign, nonatomic) NSString* characters;
+(id)parseData:(id)data withCallback:(id)callback;
-(id)init;
-(void)dealloc;
-(id)parseData:(id)data withCallback:(id)callback;
-(void)pushCallback:(id)callback repeatElement:(BOOL)element;
-(void)ignoreTag;
-(void)startElement:(id)element attributes:(id)attributes;
-(void)endElement:(id)element;
-(void)characters:(id)characters;
-(void)error:(id)error;
-(BOOL)boolAttributeForKey:(id)key;
-(id)httpLikeDate;
@end

