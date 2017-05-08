//
//  RouteResult.h
//  MapsIndoors
//
//  Created by Daniel Nielsen on 07/07/14.
//  Copyright (c) 2014 MapsPeople A/S. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "MPRouteProperty.h"

@protocol MPRoute
@end

@interface MPRouteResult : JSONModel

@property NSArray<MPRoute, Optional>* routes;
@property NSString<Optional>* status;


@end
