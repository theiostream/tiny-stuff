/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@class MKMapView, GeoRSSPoint, TwitterPlace;

__attribute__((visibility("hidden")))
@interface TwitterPadPlaceViewController : UIViewController {
@private
	TwitterPlace* place;
	GeoRSSPoint* point;
	MKMapView* _mapView;
}
@property(retain, nonatomic) TwitterPlace* place;
@property(retain, nonatomic) GeoRSSPoint* point;
-(void)loadView;
@end
