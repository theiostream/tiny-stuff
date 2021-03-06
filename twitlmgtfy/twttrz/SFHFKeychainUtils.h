/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface SFHFKeychainUtils : NSObject {
}
+(id)getPasswordForUsername:(id)username andServiceName:(id)name error:(id*)error;
+(void)storeUsername:(id)username andPassword:(id)password forServiceName:(id)serviceName updateExisting:(BOOL)existing error:(id*)error;
+(void)deleteItemForUsername:(id)username andServiceName:(id)name error:(id*)error;
@end

