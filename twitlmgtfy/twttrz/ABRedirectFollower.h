/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class ABCallback, NSURL;

__attribute__((visibility("hidden")))
@interface ABRedirectFollower : NSObject {
@private
	NSURL* redirectURL;
	ABCallback* callback;
}
+(void)followRedirectsForURL:(id)url callback:(id)callback;
-(void)dealloc;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
@end
