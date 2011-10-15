/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableView.h>


@interface UITableView (ABAdditions)
-(id)_dequeueCellStyle:(int)style class:(Class)aClass reuseIdentifier:(id)identifier;
-(id)dequeueCustomCellWithStyle:(int)style class:(Class)aClass reuseIdentifier:(id)identifier;
-(id)dequeueCustomCellWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)dequeueCustomDefaultCell:(id)cell;
-(id)dequeueDefaultCell;
-(id)dequeueValue1Cell;
-(id)dequeueValue2Cell;
-(id)dequeueSubtitleCell;
-(id)dequeueLoadingCell;
-(id)dequeueProgressCell;
-(id)dequeueCenteredSpinnerCell;
-(id)dequeueSwitchCell;
-(id)dequeueSliderCell;
-(id)dequeueButtonCell;
-(id)dequeueTextFieldContainerCell;
-(id)dequeueMultilineLabelCell;
-(id)dequeueExpandingCell;
-(id)dequeueCollapsingCell;
@end

@interface UITableView (TweetieConversationCell)
-(id)dequeueConversationCell;
@end

@interface UITableView (TweetieStatusCell)
-(id)dequeueStatusCell;
@end

@interface UITableView (UserCell)
-(id)dequeueCellForTwitterUser:(id)twitterUser account:(id)account;
@end

@interface UITableView (TweetieDirectMessageCell)
-(id)dequeueTweetieDirectMessageCell;
@end

@interface UITableView (TweetieAccountCell)
-(id)dequeueAccountCellForAccount:(id)account;
@end

