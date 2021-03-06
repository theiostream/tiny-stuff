/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "ABTableViewCell.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SMSStyleConversationCell : ABTableViewCell {
@private
	UIImage* image;
	NSString* nameText;
	NSString* messageText;
	NSString* boldWhenText;
	NSString* normalWhenText;
	BOOL unread;
	BOOL replied;
	BOOL groupMessage;
}
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) NSString* nameText;
@property(retain, nonatomic) NSString* messageText;
@property(retain, nonatomic) NSString* boldWhenText;
@property(retain, nonatomic) NSString* normalWhenText;
@property(assign, nonatomic) BOOL unread;
@property(assign, nonatomic) BOOL replied;
@property(assign, nonatomic) BOOL groupMessage;
-(void)dealloc;
-(void)drawContentView:(CGRect)view;
@end

