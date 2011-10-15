/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Twitter-Structs.h"
#import "MKMapViewDelegate.h"
#import <UIKit/UIViewController.h>

@class NSMutableSet, NSMutableArray, CALayer, MKMapView, ABHUD, TwitterAccount, TwitterSearch;

__attribute__((visibility("hidden")))
@interface TweetieNearbyViewController : UIViewController <MKMapViewDelegate> {
@private
	TwitterAccount* account;
	TwitterSearch* search;
	MKMapView* _mapView;
	NSMutableSet* statusesOnMap;
	NSMutableArray* annotations;
	BOOL didFirstAnimation;
	CALayer* sweepLayer;
	ABHUD* hud;
	UIEdgeInsets _flags;
}
@property(retain, nonatomic) TwitterAccount* account;
+(id)map_list_toolbarItems:(int)items target:(id)target action:(SEL)action;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
-(void)switchTo:(id)to;
-(void)dealloc;
-(id)persistentProxy;
-(void)decodeWithPersistentProxy:(id)persistentProxy;
-(void)loadView;
-(void)viewDidLoad;
-(void)currentLocation:(id)location info:(id)info;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)_loadNearby;
-(void)doSweepAnimation;
-(void)searchDidUpdate:(id)search;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
-(void)refresh:(id)refresh;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)mapView:(id)view didAddAnnotationViews:(id)views;
-(void)mapView:(id)view annotationView:(id)view2 calloutAccessoryControlTapped:(id)tapped;
@end

