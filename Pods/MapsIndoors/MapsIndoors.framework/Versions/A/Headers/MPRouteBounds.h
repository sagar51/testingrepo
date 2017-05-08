//
//  MPRouteBounds.h
//  MapsIndoors
//
//  Created by Daniel Nielsen on 25/09/15.
//  Copyright © 2015 MapsPeople A/S. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "MPRouteCoordinate.h"

@interface MPRouteBounds : JSONModel

@property MPRouteCoordinate* northeast;
@property MPRouteCoordinate* southwest;

@end
