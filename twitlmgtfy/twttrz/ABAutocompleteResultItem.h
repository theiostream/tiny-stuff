/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSURL, NSString;

@protocol ABAutocompleteResultItem <NSObject>
@property(retain, nonatomic) NSString* autocompleteText;
@property(retain, nonatomic) NSString* autocompleteSubtext;
@property(retain, nonatomic) NSString* autocompleteImageName;
@property(retain, nonatomic) NSURL* autocompleteImageURL;
@property(retain, nonatomic) id userInfo;
@property(retain, nonatomic) NSString* itemID;
@property(assign, nonatomic) int autocompleteAction;
@property(assign, nonatomic) int autocompleteType;
@property(assign, nonatomic) int priority;
-(id)searchableSortableText;
@end

