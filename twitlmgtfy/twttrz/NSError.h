/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSError.h>


@interface NSError (CommonCryptoErrorDomain)
+(id)errorWithCCCryptorStatus:(int)cccryptorStatus;
@end

@interface NSError (ABAdditions)
+(id)errorWithDomain:(id)domain code:(int)code description:(id)description;
-(id)errorString;
@end
