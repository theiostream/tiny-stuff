/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "Twitter-Structs.h"
#import "NSCoding.h"
#import "MKAnnotation.h"
#import "TwitterPlace.h"

@class NSDate, NSMutableArray, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface TwitterPlace : NSObject <NSCoding, MKAnnotation> {
@private
	NSString* placeID;
	NSString* fullName;
	NSString* name;
	NSString* streetAddress;
	NSDate* timestamp;
	int placeType;
	NSNumber* latitude;
	NSNumber* longitude;
	NSString* cityID;
	double accuracy;
	NSMutableArray* boundingBox;
	NSMutableArray* polylines;
	NSMutableArray* polygonPoints;
	NSMutableArray* containedWithin;
	int geometryType;
	XXStruct_3sqDcB _flags;
}
@property(retain, nonatomic) NSString* placeID;
@property(retain, nonatomic) NSString* fullName;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* streetAddress;
@property(assign, nonatomic) int placeType;
@property(retain, nonatomic) NSNumber* latitude;
@property(retain, nonatomic) NSNumber* longitude;
@property(assign, nonatomic) double accuracy;
@property(retain, nonatomic) NSDate* timestamp;
@property(retain, nonatomic) NSMutableArray* boundingBox;
@property(retain, nonatomic) NSMutableArray* polylines;
@property(retain, nonatomic) NSMutableArray* polygonPoints;
@property(assign, nonatomic) int geometryType;
@property(retain, nonatomic) NSMutableArray* containedWithin;
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;
@property(assign, nonatomic) BOOL isFullPlace;
+(id)nearByPlaces;
+(id)currentCoordinatePlace;
+(void)refreshNearbyPlacesForAccount:(id)account;
+(void)cancelRefreshNearbyPlaces;
+(void)startGPSUpdatesForAccount:(id)account;
+(void)endGPSUpdates;
+(void)currentLocationResponse:(id)response account:(id)account;
+(void)requestNearbyPlacesForAccount:(id)account;
+(void)findPlacesFromCurrentCoordinatePlaceForAccount:(id)account;
+(void)topPlacesFromCurrentCoordinatePlace;
+(void)topPlacesFromReverseGeocode:(id)reverseGeocode info:(id)info;
+(void)saveAutocompletePlaces:(id)places;
+(void)placesDidLoad:(id)places info:(id)info;
+(void)nearbyPlacesDidLoad:(id)nearbyPlaces info:(id)info;
+(void)_refreshNearbyPlacesTimeout;
+(id)placesWithJSON:(id)json;
+(id)placeWithJSON:(id)json;
+(void)parseJSON:(id)json info:(id)info;
+(void)parsePlacesJSON:(id)json info:(id)info;
+(id)placeWithDictionary:(id)dictionary;
+(id)globalGeoSearchParams:(id)params;
-(void)saveAutocompletePlace;
-(id)init;
-(id)initCoordinateWithLatitude:(double)latitude andLongitude:(double)longitude;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(double)distanceToLatitude:(double)latitude longitude:(double)longitude;
-(double)distanceToPlace:(id)place;
-(void)parsePlaceXML:(id)xml info:(id)info;
-(void)parsePlaceJSON:(id)json info:(id)info;
-(void)parsePolylines:(id)polylines info:(id)info;
-(void)parseBoundingBoxJSON:(id)json info:(id)info;
-(void)parseCoordinatesArrayJSON:(id)json info:(id)info;
-(void)parseGeometryJSON:(id)json info:(id)info;
-(void)prepare;
-(void)parseCoordinatesJSON:(id)json info:(id)info;
-(id)description;
-(id)parseXMLCallback;
-(void)parseXML:(id)xml info:(id)info;
-(id)placeSubtext;
-(void)setCoordinate:(XXStruct_zYrK5D)coordinate;
-(id)annotationViewForMapView:(id)mapView;
-(id)title;
-(id)subtitle;
-(XXStruct_03F4WD)_POIRegion;
-(double)_latDelta;
-(double)_lonDelta;
-(XXStruct_03F4WD)_boundingBoxRegion;
-(double)boundingBoxRadius;
-(XXStruct_zYrK5D)boundingBoxCenter;
-(XXStruct_03F4WD)region;
-(id)polygonOverlay;
-(id)geoSearchParams;
-(id)geoSearchParamsWithAutocompleteQuery:(id)autocompleteQuery;
-(id)reverseGeocodeParams;
-(id)topPlacesParams;
@end

@interface TwitterPlace (Search)
-(id)searchWithAccount:(id)account;
@end

@interface TwitterPlace (StaticMaps)
-(id)staticMapURLwithWidth:(int)width height:(int)height;
@end

@interface TwitterPlace (TableViewCells)
+(id)cellIdentifier;
+(id)dequeueCellForTableView:(id)tableView;
-(id)cellForTableView:(id)tableView;
@end

