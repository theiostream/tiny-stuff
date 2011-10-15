/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "NSMutableCopying.h"
#import "NSFastEnumeration.h"
#import <Foundation/NSArray.h>
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface JKArray : NSArray <NSCopying, NSMutableCopying, NSFastEnumeration> {
@private
	id* objects;
	unsigned count;
	unsigned capacity;
	unsigned mutations;
}
+(void)load;
+(id)allocWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)count;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(id)objectAtIndex:(unsigned)index;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
@end

