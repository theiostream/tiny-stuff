#import <UIKit/UIKit.h>

@interface UIAlertView (Extended)
	- (UITextField *)addTextFieldWithValue:(NSString *)value label:(NSString *)label;
	- (UITextField *)textFieldAtIndex:(NSUInteger)index;
	- (NSUInteger)textFieldCount;
	- (UITextField *)textField;
@end

%hook TweetieComposeViewController
- (void)loadView {
	%orig;
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");

	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)];
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)];
	UIButton *lmgtfy = [[UIButton alloc] initWithFrame:CGRectMake(220, 5, 40,30)]; // 225
	[lmgtfy setTitle:@"LMG TFY" forState:UIControlStateNormal];
	lmgtfy.titleLabel.textColor = [UIColor lightGrayColor];
	lmgtfy.titleLabel.font = [UIFont boldSystemFontOfSize:12];
	[lmgtfy setTitleColor:[UIColor lightGrayColor] forState:UIControlStateNormal];
	lmgtfy.titleLabel.lineBreakMode = UILineBreakModeWordWrap;
	lmgtfy.titleLabel.textAlignment = UITextAlignmentCenter;
	[lmgtfy setBackgroundColor:[UIColor clearColor]];
	[lmgtfy addTarget:self action:@selector(presentLMGTFYAlert) forControlEvents:UIControlEventTouchUpInside];
	[meh addSubview:lmgtfy];
}


- (void)_typeText:(id)text {
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)prepareForForcedAutoComplete {
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)buttonBarAt:(id)at {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)buttonBarHash:(id)hash {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)buttonBarPlace:(id)place {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)autocompleteControllerDidBegin:(id)autocompleteController { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)autocompleteControllerDidEnd:(id)autocompleteController { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)pushLoading { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)popLoading { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)_updateTitle { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)viewDidLoad { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
- (void)viewDidUnload { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(CGRect)_nippleFrame {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; return %orig; 
}
-(void)scrollViewDidScroll:(id)scrollView {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)viewWillAppear:(BOOL)view {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)viewWillDisappear:(BOOL)view {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)viewDidAppear:(BOOL)view {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)keyboardDidShow:(id)keyboard {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)keyboardWillHide:(id)keyboard { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)didSelectPlaceEntity:(id)entity {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)didUndoOrRedo:(id)redo {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)willUndoOrRedo:(id)redo {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)willShowMenu:(id)menu {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)didShowMenu:(id)menu {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(int)visibleUnderKeyboardViewIndex {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; return %orig; 
}
-(void)scrollToUnderKeyboardViewIndex:(int)underKeyboardViewIndex animated:(BOOL)animated {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_saveDraftAndDismiss {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)cancel:(id)cancel {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)forceDismissAndSaveAsDraft {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_dismiss {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_send { 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_checkLengthAndSend { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)send:(id)send {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)selectAccount:(id)account {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)dismissAccountSwitcher:(id)switcher {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(BOOL)_keyboardIsUp {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; return %orig; 
}
-(void)_showKeyboard:(id)keyboard {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_hideKeyboard:(id)keyboard {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_toggleKeyboard:(id)keyboard {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)camera:(id)camera {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)photoLibrary:(id)library {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_textDidChange {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)textViewDidChangeSelection:(id)textView { 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}

-(void)textViewDidChange:(id)textView {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)attachments:(id)attachments {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)didRemoveAttachment:(id)attachment {
 	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_updateGlowingButtonBarButtons { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}
-(void)_setupCounter { 	
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)]; %orig; 
}


%new(v@:)
- (void) presentLMGTFYAlert {
	UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"LMGTFY!" message:@"Special credits to Maximus." delegate:self cancelButtonTitle:@"LMGTFY it!" otherButtonTitles:nil];
	[alert addTextFieldWithValue:nil label:@"LMGTFY"];
	[alert textField].autocorrectionType = UITextAutocorrectionTypeNo;
	[alert show];
	[alert release];
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
	%orig;
	UITextField *tt = [[alertView subviews] objectAtIndex:1];
		if ([tt.text isEqualToString:@"LMGTFY!"]) { NSLog(@"asd"); }
		NSLog (@"NO URL inserted.");
		NSString *fix = [[[alertView subviews] objectAtIndex:5] text];
		fix = [fix stringByReplacingOccurrencesOfString:@" " withString:@"+"];
		if ([fix isEqualToString:@""]) {
			NSLog (@"asd");
		}
		else {
			NSString *link = [NSString stringWithFormat:@"http://lmgtfy.com/?q=%@ ", fix];
			UITextView *textView = MSHookIvar<UITextView *>(self, "textView");
			textView.text = [textView.text stringByAppendingString:link];
	}
	UIButton* buttonBarPhotoButton = MSHookIvar<UIButton *>(self, "buttonBarPhotoButton");
	UIView *meh = buttonBarPhotoButton.superview;
	[meh setFrame:CGRectMake(meh.frame.origin.x, meh.frame.origin.y, 350, meh.frame.size.height)];
}
%end