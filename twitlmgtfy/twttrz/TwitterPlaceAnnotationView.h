/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import <MapKit/MKPinAnnotationView.h>

@class MKMapView, TwitterPlace;

__attribute__((visibility("hidden")))
@interface TwitterPlaceAnnotationView : MKPinAnnotationView {
@private
	BOOL isMoving;
	CGPoint startLocation;
	CGPoint originalCenter;
	MKMapView* map;
	TwitterPlace* annotation;
}
@property(retain, nonatomic) MKMapView* map;
@property(retain, nonatomic) TwitterPlace* annotation;
-(id)initWithAnnotation:(id)annotation;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)dealloc;
@end
