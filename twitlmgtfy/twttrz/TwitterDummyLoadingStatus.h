/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TwitterDummyLoadingStatus.h"
#import "TwitterDummyStatus.h"


__attribute__((visibility("hidden")))
@interface TwitterDummyLoadingStatus : TwitterDummyStatus {
}
+(id)dummyLoadingStatus;
@end

@interface TwitterDummyLoadingStatus (UIAdditions)
-(id)cellForTableView:(id)tableView account:(id)account delegate:(id)delegate disableMentionHighlighting:(BOOL)highlighting;
-(float)heightForRowInTableView:(id)tableView;
@end

