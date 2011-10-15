/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface FoursquareUser : NSObject {
@private
	NSString* userID;
	NSString* firstName;
	NSString* lastName;
	NSString* gender;
	NSURL* photoURL;
}
@property(retain, nonatomic) NSString* userID;
@property(retain, nonatomic) NSString* firstName;
@property(retain, nonatomic) NSString* lastName;
@property(retain, nonatomic) NSString* gender;
@property(retain, nonatomic) NSURL* photoURL;
-(void)dealloc;
-(id)_ab_improved_description_body;
-(id)description;
-(void)parseXML:(id)xml info:(id)info;
@end
