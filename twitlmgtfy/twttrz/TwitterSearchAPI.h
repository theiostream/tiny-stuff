/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "TwitterSearchAPI.h"

@class ABCallback, NSString;

__attribute__((visibility("hidden")))
@interface TwitterSearchAPI : NSObject {
@private
	NSString* apiRoot;
	ABCallback* responseCallback;
}
+(id)requestWithAPIRoot:(id)apiroot callback:(id)callback;
-(id)initWithAPIRoot:(id)apiroot callback:(id)callback;
-(void)dealloc;
-(id)apiRoot;
-(void)search:(id)search count:(id)count page:(id)page sinceID:(id)anId geocode:(id)geocode via:(id)via;
-(void)searchResponse:(id)response info:(id)info;
@end

@interface TwitterSearchAPI (Additions)
@end

