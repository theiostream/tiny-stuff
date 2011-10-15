/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface ABReachability : NSObject {
@private
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
}
+(id)reachabilityWithAddress:(const sockaddr_in*)address;
+(id)reachabilityForInternetConnection;
+(id)sharedReachability;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)flags;
-(int)networkStatusForFlags:(unsigned)flags;
-(BOOL)connectionRequired;
-(int)currentReachabilityStatus;
@end

