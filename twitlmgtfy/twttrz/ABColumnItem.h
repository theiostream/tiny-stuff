/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "ABColumnItem.h"

@class NSString, UIButton, ABColumnBar, UIView, NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface ABColumnItem : NSObject {
@private
	NSString* title;
	UIView* _titleView;
	UIView* _backButtonView;
	NSArray* _toolbarItems;
	ABColumnBar* _columnBar;
	UIViewController* _owner;
}
@property(retain, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) UIButton* backButtonView;
@property(retain, nonatomic) UIView* titleView;
-(void)dealloc;
-(void)setToolbarItems:(id)items animated:(BOOL)animated;
-(id)toolbarItems;
@end

@interface ABColumnItem (ABColumnBarAdditions)
-(void)_setColumnBar:(id)bar;
@end

