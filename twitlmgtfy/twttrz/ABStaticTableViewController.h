/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>

@class NSString, ABTableView, NSIndexPath, NSMutableArray, UITableView;

__attribute__((visibility("hidden")))
@interface ABStaticTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	BOOL disableScroll;
	ABTableView* _tableView;
	NSString* defaultTitle;
	NSMutableArray* sections;
	NSIndexPath* lastIndexPath;
	id _currentSection;
}
@property(copy, nonatomic) NSString* defaultTitle;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic) BOOL disableScroll;
-(void)dealloc;
-(int)tableViewStyle;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)loadTableView;
-(void)reloadTableView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)currentSection;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)elementForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(BOOL)automaticallyDeselect;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(id)_addSection;
-(id)addSection;
-(void)setSectionTitle:(id)title;
-(id)addSection:(id)section;
-(id)addExpandingSection:(id)section;
-(void)_reloadSection:(id)section animated:(BOOL)animated;
-(void)reloadSection:(id)section animated:(BOOL)animated;
-(void)reloadSection:(id)section withCallback:(id)callback animated:(BOOL)animated;
-(void)reloadSection:(id)section withCallback:(id)callback;
-(id)sectionContaining:(id)containing;
-(void)replaceElement:(id)element withElement:(id)element2;
-(void)_scrollToIndexPath:(id)indexPath;
-(void)reloadSectionAndKeepBottomRowOnScreen:(id)screen;
-(void)setSectionFooterText:(id)text;
-(id)addDisclosureRow:(id)row subtitle:(id)subtitle target:(id)target action:(SEL)action info:(id)info;
-(id)addDisclosureRow:(id)row target:(id)target action:(SEL)action info:(id)info;
-(id)addDisclosureRow:(id)row target:(id)target action:(SEL)action;
-(id)addDisclosureRow:(id)row viewControllerClass:(Class)aClass;
-(void)addButtonRow:(id)row target:(id)target action:(SEL)action;
-(id)addCheckmarkRow:(id)row checked:(BOOL)checked;
-(void)addMultiValueRow:(id)row userDefaultsKey:(id)key titles:(id)titles values:(id)values defaultValue:(id)value additionalOptions:(id)options callback:(id)callback;
-(void)addMultiValueRow:(id)row userDefaultsKey:(id)key titles:(id)titles values:(id)values defaultValue:(id)value footerText:(id)text callback:(id)callback;
-(void)_setupFooterText:(id)text info:(id)info;
-(void)addLabelRow:(id)row value:(id)value target:(id)target action:(SEL)action info:(id)info;
-(void)addLabelRow:(id)row value:(id)value;
-(void)addSubtitleLabelRow:(id)row subtitle:(id)subtitle target:(id)target action:(SEL)action info:(id)info;
-(void)addSubtitleLabelRow:(id)row subtitle:(id)subtitle;
-(void)addContactStyleLabelRow:(id)row value:(id)value target:(id)target action:(SEL)action;
-(void)addContactStyleLabelRow:(id)row value:(id)value target:(id)target action:(SEL)action info:(id)info;
-(void)addContactStyleLabelRow:(id)row value:(id)value;
-(void)addSwitchRow:(id)row userDefaultsKey:(id)key invertValue:(BOOL)value;
-(void)addSliderRowWithKey:(id)key defaultValue:(id)value leftImage:(id)image rightImage:(id)image4;
-(void)addTextFieldRow:(id)row title:(id)title;
-(id)addMultilineLabelRow:(id)row target:(id)target action:(SEL)action;
-(id)addLoadingRow:(id)row;
-(id)addCenteredSpinnerRow;
-(void)addCustomCellRow:(id)row height:(float)height target:(id)target action:(SEL)action info:(id)info;
-(void)addCustomCellRow:(id)row height:(float)height;
-(id)addLargeLeftImageRow:(id)row title:(id)title target:(id)target action:(SEL)action;
-(void)didCheckmarkElement:(id)element;
-(void)addTextFieldRequestRow:(id)row forKey:(id)key modal:(BOOL)modal;
-(void)_textFieldRequest:(id)request;
-(void)_textFieldDismiss:(id)dismiss info:(id)info;
@end
