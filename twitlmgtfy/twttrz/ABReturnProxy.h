/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class ABCallback;

__attribute__((visibility("hidden")))
@interface ABReturnProxy : NSObject {
@private
	ABCallback* callback;
}
-(void)dealloc;
-(id)callback:(id)callback;
-(void)returnValue:(id)value;
-(void)cancel;
@end

