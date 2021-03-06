/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABSimplePersistentRecentSearchViewController.h"

@protocol TweetieRecentHashtagsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TweetieRecentHashtagsViewController : ABSimplePersistentRecentSearchViewController {
@private
	id<TweetieRecentHashtagsViewControllerDelegate> delegate;
}
@property(assign, nonatomic) id<TweetieRecentHashtagsViewControllerDelegate> delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)defaultsKey;
-(id)placeholderText;
-(id)unmatchedResultFormatText;
-(BOOL)enforceHashtagPrefix;
-(void)cancel:(id)cancel;
-(void)search:(id)search;
-(int)returnKeyType;
@end

