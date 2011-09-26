%hook SBAwayLockBar
-(void)setShowsSlideshowButton:(BOOL)button {
	%orig(NO);
}
%end