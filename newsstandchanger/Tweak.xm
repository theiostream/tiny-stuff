#import <UIKit/UIKit.h>

%hook SBNewsstand
+(BOOL)newsstandEnabled {
	return NO;
}

%end