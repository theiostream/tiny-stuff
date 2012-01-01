/**
 * Name: TapDewiggle
 * Description: Allows edit (wiggle) mode to be disabled by tapping anywhere outside a SpringBoard icon
*/

/* Findings:
1. -[SBIconScrollView touchesBegan:withEvent:] isn't called when an icon is tapped (even having SBIconView as a subview!?), making stuff a lot easier
2. meh, I don't think there's anything else curious around here! :P
*/

#include <objc/runtime.h>

@interface SBIconScrollView : UIScrollView <UIGestureRecognizerDelegate>
@end

@interface SBIconController : NSObject {}
+ (id)sharedInstance;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)isEditing;
@end

static BOOL touchValid = NO;

%hook SBIconScrollView
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {	
	if ([[objc_getClass("SBIconController") sharedInstance] isEditing]) {
		touchValid = YES;
	}
	
	%orig;
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event {
	touchValid = NO;
	%orig;
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
	if (touchValid) {
		[[objc_getClass("SBIconController") sharedInstance] setIsEditing:NO];
	}
	
	%orig;
}
%end