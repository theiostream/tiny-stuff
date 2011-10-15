/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSArray.h>
#import "Twitter-Structs.h"


@interface NSArray (ABAdditions)
+(id)arrayByConcatenatingArrays:(id)arrays;
-(id)ab_firstObjectThat:(SEL)that;
-(id)map:(SEL)map;
-(id)map:(SEL)map withObject:(id)object;
-(id)map:(SEL)map withObject:(id)object withObject:(id)object3;
-(id)mapFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(id)filter:(SEL)filter;
-(id)filter:(SEL)filter withObject:(id)object;
-(void)apply:(SEL)apply;
-(void)apply:(SEL)apply withObject:(id)object;
-(void)apply:(SEL)apply withObject:(id)object withObject:(id)object3;
-(void)applyFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(id)arrayWithoutDuplicates;
-(id)sortedArray;
-(id)reverseSortedArray;
-(id)arrayByRemovingDuplicates;
-(BOOL)hasCommonObjectWithArray:(id)array;
-(id)subarrayWithAtMost:(int)most;
-(id)subarrayWithAtMostFromEnd:(int)end;
-(id)reversedArray;
-(BOOL)ab_containsIndex:(int)index;
-(BOOL)ab_isSubsetOfArray:(id)array;
-(id)ab_slice:(NSRange)slice;
@end

@interface NSArray (ABSimpleArchive)
-(const char*)ab_classNameForSimpleEncoding;
-(void)ab_simpleEncode:(XXStruct_Z6OKRC*)encode;
-(id)ab_initWithSimpleDecoder:(XXStruct_Z6OKRC*)simpleDecoder;
@end

@interface NSArray (JSONKit)
-(id)JSONData;
-(id)JSONDataWithOptions:(unsigned)options error:(id*)error;
-(id)JSONString;
-(id)JSONStringWithOptions:(unsigned)options error:(id*)error;
@end

