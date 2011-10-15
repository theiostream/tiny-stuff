/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABStaticTableViewElement.h"

@class ABStaticTableViewExpandDisclosureElement, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ABStaticTableViewSectionElement : ABStaticTableViewElement {
@private
	NSMutableArray* elements;
	NSString* footerText;
	BOOL collapsed;
	ABStaticTableViewExpandDisclosureElement* collapsedDisclosureElement;
}
@property(copy, nonatomic) NSString* footerText;
@property(assign, nonatomic) BOOL collapsed;
@property(retain, nonatomic) ABStaticTableViewExpandDisclosureElement* collapsedDisclosureElement;
-(void)dealloc;
-(void)addElement:(id)element;
-(int)replaceElement:(id)element withElement:(id)element2;
-(id)elements;
-(void)removeAllElements;
-(void)expandSection:(id)section;
-(void)collapseSection:(id)section;
@end
