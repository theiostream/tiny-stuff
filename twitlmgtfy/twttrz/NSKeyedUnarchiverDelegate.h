/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)className originalClasses:(id)classes;
-(id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
-(void)unarchiver:(id)unarchiver willReplaceObject:(id)object withObject:(id)object3;
-(void)unarchiverWillFinish:(id)unarchiver;
-(void)unarchiverDidFinish:(id)unarchiver;
@end

