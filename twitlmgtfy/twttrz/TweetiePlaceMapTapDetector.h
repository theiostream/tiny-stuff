/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@protocol TweetiePlaceMapTapDetectorDelegate;

__attribute__((visibility("hidden")))
@interface TweetiePlaceMapTapDetector : UIView {
@private
	id<TweetiePlaceMapTapDetectorDelegate> delegate;
}
@property(assign, nonatomic) id<TweetiePlaceMapTapDetectorDelegate> delegate;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

