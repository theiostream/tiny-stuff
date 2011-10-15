/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "ABPlainRowCell.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SideBySideRowView : ABPlainRowCell {
@private
	int sections;
	int highlightedSection;
	int selectedSection;
	NSArray* titles;
	NSArray* subtitles;
	NSArray* images;
	NSArray* callbacks;
}
@property(assign, nonatomic) int sections;
@property(assign, nonatomic) int selectedSection;
@property(retain, nonatomic) NSArray* titles;
@property(retain, nonatomic) NSArray* subtitles;
@property(retain, nonatomic) NSArray* images;
@property(retain, nonatomic) NSArray* callbacks;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGRect)rectForSection:(int)section;
-(void)drawRect:(CGRect)rect;
-(int)sectionForTouches:(id)touches;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

