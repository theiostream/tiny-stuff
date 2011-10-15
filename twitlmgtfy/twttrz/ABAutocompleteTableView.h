/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <UIKit/UITableView.h>

@class NSArray;
@protocol ABAutocompleteTableViewDelegate;

__attribute__((visibility("hidden")))
@interface ABAutocompleteTableView : UITableView <UITableViewDelegate, UITableViewDataSource> {
@private
	NSArray* autocompleteItems;
	id<ABAutocompleteTableViewDelegate> autocompleteDelegate;
}
@property(copy, nonatomic) NSArray* autocompleteItems;
@property(assign, nonatomic) id<ABAutocompleteTableViewDelegate> autocompleteDelegate;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)scrollView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
@end

