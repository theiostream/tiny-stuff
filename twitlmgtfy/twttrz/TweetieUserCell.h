/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class TwitterUser;

__attribute__((visibility("hidden")))
@interface TweetieUserCell : UITableViewCell {
@private
	TwitterUser* user;
}
@property(retain, nonatomic) TwitterUser* user;
-(void)_update;
-(void)update:(id)update;
-(void)dealloc;
@end
