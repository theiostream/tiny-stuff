/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TwitterUserStream.h"
#import "Twitter-Structs.h"


__attribute__((visibility("hidden")))
@interface TwitterUserTimelineStream : TwitterUserStream {
}
-(void)_loadNewer;
-(void)_loadBeforeGap:(id)gap;
-(void)_loadOlder;
-(id)autosaveName;
@end
