/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "UIActionSheetDelegate.h"
#import "MKMapViewDelegate.h"
#import <UIKit/UIViewController.h>

@class UIBarButtonItem, NSArray, UIActionSheet, MKMapView, NSString, ABHUD, TwitterPlace, GeoRSSPoint;

__attribute__((visibility("hidden")))
@interface LocationViewController : UIViewController <MKMapViewDelegate, UIActionSheetDelegate> {
@private
	TwitterPlace* place;
	GeoRSSPoint* location;
	NSString* locationName;
	UIBarButtonItem* openInMapsItem;
	MKMapView* _mapView;
	ABHUD* hud;
	NSArray* geocodedLocations;
	XXStruct_3sqDcB _flags;
	UIActionSheet* _chooseLocationSheet;
	UIActionSheet* _openInMapsSheet;
}
@property(retain, nonatomic) GeoRSSPoint* location;
@property(retain, nonatomic) TwitterPlace* place;
@property(copy, nonatomic) NSString* locationName;
+(id)locationViewControllerWithLatitude:(double)latitude longitude:(double)longitude;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithPlace:(id)place location:(id)location locationName:(id)name;
-(void)dealloc;
-(BOOL)ab_shouldShowPullTab;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)loadView;
-(void)viewDidUnload;
-(void)_goToLocation:(BOOL)location span:(double)span;
-(void)viewWillAppear:(BOOL)view;
-(void)_dropPinAtLocation;
-(void)viewDidAppear:(BOOL)view;
-(void)_hideHUD;
-(void)goToGeocodedLocation:(id)geocodedLocation;
-(void)geocodeResponse:(id)response info:(id)info;
-(void)dismissError:(id)error info:(id)info;
-(void)viewWillDisappear:(BOOL)view;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)openMaps:(id)maps;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)mapView:(id)view didAddAnnotationViews:(id)views;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
@end

