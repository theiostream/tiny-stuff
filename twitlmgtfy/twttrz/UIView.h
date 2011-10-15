/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>


@interface UIView (ABAdditions)
@property(assign, nonatomic) float centerY;
@property(assign, nonatomic) float centerX;
@property(assign, nonatomic) float height;
@property(assign, nonatomic) float width;
@property(assign, nonatomic) float right;
@property(assign, nonatomic) float left;
@property(assign, nonatomic) float bottom;
@property(assign, nonatomic) float top;
-(void)ab_pixelAlignFrame;
-(id)firstViewOfClass:(Class)aClass;
-(id)firstSuperviewOfClass:(Class)aClass;
@end

@interface UIView (ABUIWebViewAdditions)
-(void)_ab_hideSubviewsOfClass:(Class)aClass;
@end
