/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TwitterDummyErrorStatus.h"
#import "TwitterDummyStatus.h"

@class ABCallback, NSError;

__attribute__((visibility("hidden")))
@interface TwitterDummyErrorStatus : TwitterDummyStatus {
@private
	NSError* error;
	ABCallback* callback;
}
@property(retain, nonatomic) NSError* error;
@property(retain, nonatomic) ABCallback* callback;
-(void)dealloc;
@end

@interface TwitterDummyErrorStatus (UIAdditions)
-(id)cellForTableView:(id)tableView account:(id)account delegate:(id)delegate disableMentionHighlighting:(BOOL)highlighting;
-(float)heightForRowInTableView:(id)tableView;
@end
