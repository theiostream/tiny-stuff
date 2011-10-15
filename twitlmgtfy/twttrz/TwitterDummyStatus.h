/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TwitterDummyStatus.h"
#import "TwitterStatus.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TwitterDummyStatus : TwitterStatus {
@private
	NSString* messageText;
}
@property(retain, nonatomic) NSString* messageText;
-(BOOL)isNotADummyStatus;
-(void)dealloc;
@end

@interface TwitterDummyStatus (TwitterStatusCellAdditions)
-(float)statusHeightInTableView:(id)tableView;
@end

