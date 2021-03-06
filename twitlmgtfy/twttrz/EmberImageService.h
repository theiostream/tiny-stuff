/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABImageService.h"


__attribute__((visibility("hidden")))
@interface EmberImageService : ABImageService {
}
+(id)apiKey;
+(void)requestUserTokenForUsername:(id)username password:(id)password callback:(id)callback;
+(void)requestUserTokenResponse:(id)response info:(id)info;
+(void)parseEmberUserToken:(id)token info:(id)info;
-(void)postImage:(id)image associatedMessage:(id)message fromAccount:(id)account callback:(id)callback;
-(void)didPostImage:(id)image info:(id)info;
@end

