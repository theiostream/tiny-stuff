/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TweetieStatusStreamViewController.h"

@class TwitterUser, TwitterSearchStream;

__attribute__((visibility("hidden")))
@interface TweetieUserMentionsViewController : TweetieStatusStreamViewController {
@private
	TwitterUser* user;
	TwitterSearchStream* stream;
}
@property(retain, nonatomic) TwitterUser* user;
-(void)dealloc;
-(id)statusStream;
@end

