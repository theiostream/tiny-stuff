/**
 * Name: TapDewiggle
 * Description: Allows edit (wiggle) mode to be disabled by tapping anywhere outside a SpringBoard icon
*/

/* Findings:
1. -[SBIconScrollView touchesBegan:withEvent:] isn't called when an icon is tapped (even having SBIconView as a subview!?), making stuff a lot easier
2. meh, I don't think there's anything else curious around here! :P
*/

#include <objc/runtime.h>

@interface SBIconController : NSObject {}
+ (id)sharedInstance;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)isEditing;
@end

static id controller = nil;

%hook SBIconScrollView
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
	if (controller == nil) controller = [%c(SBIconController) sharedInstance];
	[controller setIsEditing:NO];
	
	%orig;
}
%end
