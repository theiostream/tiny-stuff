/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TwitterPadStatusStreamViewController.h"

@class TwitterStatus, TwitterConversationStream;

__attribute__((visibility("hidden")))
@interface TwitterPadReplyChainViewController : TwitterPadStatusStreamViewController {
@private
	TwitterStatus* baseStatus;
	TwitterConversationStream* conversationStream;
}
@property(retain, nonatomic) TwitterStatus* baseStatus;
-(void)dealloc;
-(id)statusStream;
-(BOOL)canPullToRefresh;
@end

