/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TwitterStatusStreamFilter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TwitterStatusStreamFilterSimpleSearchFilter : TwitterStatusStreamFilter {
@private
	NSString* query;
}
@property(copy, nonatomic) NSString* query;
-(BOOL)validStatus:(id)status;
-(void)dealloc;
@end
