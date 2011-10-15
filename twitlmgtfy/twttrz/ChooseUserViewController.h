/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TweetieUserListViewController.h"
#import "Twitter-Structs.h"

@protocol ChooseUserViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ChooseUserViewController : TweetieUserListViewController {
@private
	id<ChooseUserViewControllerDelegate> delegate;
}
@property(assign, nonatomic) id<ChooseUserViewControllerDelegate> delegate;
-(id)init;
-(void)viewDidLoad;
-(id)arbitraryUserFormatString;
-(void)selectUser:(id)user;
-(void)selectUsername:(id)username;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
@end

