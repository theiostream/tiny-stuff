/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TwitterConcreteStatusesStream.h"
#import "NSCoding.h"
#import "Twitter-Structs.h"

@class TwitterAccount;

__attribute__((visibility("hidden")))
@interface TwitterAccountStream : TwitterConcreteStatusesStream <NSCoding> {
@private
	TwitterAccount* account;
	XXStruct_3sqDcB _accountStreamFlags;
}
@property(assign, nonatomic) TwitterAccount* account;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)newestStatusThatIsNotMine;
-(id)definitiveStatuses:(id)statuses;
-(id)autosaveName;
-(id)_statusIDSyncKey;
-(void)noteNewTopStatusID:(id)anId;
-(void)requestTopStatusID;
-(void)requestTopStatusIDResponse:(id)response info:(id)info;
@end

