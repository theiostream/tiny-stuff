/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TwitterAccount.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TwitterDuckieAccount : TwitterAccount {
@private
	NSString* fakePass;
}
-(BOOL)isDuckie;
-(id)username;
-(id)oAuthToken;
-(id)oAuthTokenSecret;
-(id)password;
@end
