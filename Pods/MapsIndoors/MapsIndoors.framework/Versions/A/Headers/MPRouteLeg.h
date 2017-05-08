//
//  MPRouteLeg.h
//  MapsIndoors SDK for iOS
//
//  Created by Daniel Nielsen on 12/2/13.
//  Copyright (c) 2013 MapsPeople A/S. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "MPLineGeometry.h"
#import "MPRouteCoordinate.h"
#import "MPRouteProperty.h"

/**
 * Route action empty protocol specification.
 */
@protocol MPRouteStep
@end

/**
 * Route leg model. A route model will consist of one ore more route legs. Typically a route from 1st floor to 2nd floor will consist of two route legs. Thus, a route leg defines a continueus route part within the same floor and/or building and/or vehicle.
 */
@interface MPRouteLeg : JSONModel

/**
 * The routeleg distance
 */
@property NSNumber<Optional>* distance;
/**
 * The routeleg duration
 */
@property NSNumber<Optional>* duration;

@property MPRouteCoordinate<Optional>* start_location;
@property MPRouteCoordinate<Optional>* end_location;
@property NSString<Optional>* start_address;
@property NSString<Optional>* end_address;

/**
 * The array of route actions in this route leg.
 */
@property NSMutableArray<MPRouteStep, Optional>* steps;

@end
