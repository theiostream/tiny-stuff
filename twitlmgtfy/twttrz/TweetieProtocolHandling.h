/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface TweetieProtocolHandling : NSObject {
}
+(BOOL)isSupportedScheme:(id)scheme;
+(void)_jumpToMainScreen:(int)mainScreen account:(id)account navigationController:(id)controller;
+(id)legacyURL:(id)url;
+(id)desiredAccountForAccount:(id)account url:(id)url;
+(BOOL)handleURL:(id)url account:(id)account navigationController:(id)controller animated:(BOOL)animated;
@end

