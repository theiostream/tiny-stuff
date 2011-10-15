/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "Twitter-Structs.h"
#import <Foundation/NSObject.h>
#import "TwitterDirectMessage.h"

@class TwitterUser, NSString, NSDate, TwitterComposition, ABActiveTextRanges;

__attribute__((visibility("hidden")))
@interface TwitterDirectMessage : NSObject <NSCoding> {
@private
	NSString* messageID;
	NSString* text;
	NSString* originalText;
	NSDate* date;
	TwitterUser* sender;
	TwitterUser* recipient;
	ABActiveTextRanges* originalTextRanges;
	ABActiveTextRanges* activeTextRanges;
	TwitterComposition* composition;
	struct {
		unsigned isLoading : 1;
		unsigned shouldRemove : 1;
	} _flags;
}
@property(copy, nonatomic) NSString* messageID;
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSDate* date;
@property(retain, nonatomic) TwitterUser* sender;
@property(retain, nonatomic) TwitterUser* recipient;
@property(readonly, assign, nonatomic) ABActiveTextRanges* originalTextRanges;
@property(readonly, assign, nonatomic) ABActiveTextRanges* activeTextRanges;
@property(retain, nonatomic) TwitterComposition* composition;
@property(assign, nonatomic) BOOL read;
@property(assign, nonatomic) BOOL didGlobalNotification;
@property(copy, nonatomic) NSString* originalText;
+(id)messageWithDictionary:(id)dictionary;
+(id)messageWithXML:(id)xml;
+(id)messagesWithXML:(id)xml;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(BOOL)matchesSearchString:(id)string;
@end

@interface TwitterDirectMessage (XML)
+(void)parseMessagesXML:(id)xml info:(id)info;
-(void)parseMessageXML:(id)xml info:(id)info;
@end

@interface TwitterDirectMessage (Email)
-(id)emailHTML;
@end

@interface TwitterDirectMessage (CellAdditions)
-(id)iphone_attributedTextWithSelectedRange:(id)selectedRange;
@end

@interface TwitterDirectMessage (RichText)
-(id)attributedTextWithSelectedRange:(id)selectedRange;
@end
