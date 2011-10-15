/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <UIKit/UIView.h>

@class TwitterStatus;

__attribute__((visibility("hidden")))
@interface TopTweetCell : UIView {
@private
	TwitterStatus* status;
}
@property(retain, nonatomic) TwitterStatus* status;
-(id)initWithStatus:(id)status;
-(void)dealloc;
-(void)userDidUpdate:(id)user;
-(void)drawRect:(CGRect)rect;
-(id)railView;
-(void)singleTap;
-(void)doubleTap;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

