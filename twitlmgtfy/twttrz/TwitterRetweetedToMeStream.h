/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "TwitterAccountStream.h"


__attribute__((visibility("hidden")))
@interface TwitterRetweetedToMeStream : TwitterAccountStream {
}
-(void)_loadNewer;
-(void)_loadBeforeGap:(id)gap;
-(void)_loadOlder;
-(id)autosaveName;
-(id)emptyStreamMessage;
@end

