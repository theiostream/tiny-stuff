%hook UIStatusBarLayoutManager
- (id)_itemViewsSortedForLayout {
	NSMutableArray *views = %orig;
	
	for (NSUInteger i=0; i<[views count]; i++) {
		id item = [views objectAtIndex:i];
		if ([item isKindOfClass:%c(UIStatusBarDataNetworkItemView)]) {
			id carrier = [views objectAtIndex:i-1];
			[views insertObject:carrier atIndex:i+1];
			[views removeObjectAtIndex:i-1];
		}
	}
	
	return views;
}
%end