/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface ABSubTabBarItem : NSObject {
@private
	UIImage* image;
	BOOL drawGlow;
}
@property(retain, nonatomic) UIImage* image;
+(id)itemWithImage:(id)image;
-(void)dealloc;
-(BOOL)drawGlow;
-(BOOL)setDrawGlow:(BOOL)glow;
@end

