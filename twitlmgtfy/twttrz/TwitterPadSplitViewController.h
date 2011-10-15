/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABMasterViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface TwitterPadSplitViewController : ABMasterViewController {
@private
	UINavigationController* masterNavigationController;
	UINavigationController* detailNavigationController;
	BOOL isLandscape;
}
-(id)initWithMasterViewController:(id)masterViewController detailViewController:(id)controller;
-(void)dealloc;
-(float)masterWidth;
-(void)layoutSplitViews;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)visibleViewControllers;
-(void)viewDidLoad;
@end
