/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class ABCallback;

__attribute__((visibility("hidden")))
@interface ABCAAnimationCallbackDelegate : NSObject {
@private
	ABCallback* callback;
}
+(id)delegateWithCallback:(id)callback;
-(id)initWithCallback:(id)callback;
-(void)dealloc;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
@end

