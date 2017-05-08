//
//  DirectionsService.h
//  MapsIndoorsGenericApp
//
//  Created by Daniel Nielsen on 03/09/15.
//  Copyright (c) 2015 MapsPeople A/S. All rights reserved.
//

#import "MPLocation.h"
#import "MPDistanceMatrixProvider.h"
#import "MPVenueProvider.h"
#import "MPRoutingProvider.h"

@interface MPDirectionsService : NSObject<MPVenueProviderDelegate>

@property (weak) id <MPRoutingProviderDelegate> delegate;
@property NSString* solutionId;
@property NSString* googleApiKey;

- (id)initWithMapsIndoorsSolutionId:(NSString *)solutionId googleApiKey: (NSString*) googleApiKey;
- (void)routingFrom:(MPLocation *)from to:(MPLocation *)to by:(NSString *)mode avoid:(NSArray *)restrictions depart:(NSDate *)departureTime arrive:(NSDate *)arrivalTime;
- (void)routingFrom:(MPLocation *)from to:(MPLocation *)to by:(NSString *)mode;

- (void)routingFrom:(MPLocation *)from to:(MPLocation *)to by:(NSString *)mode avoid:(NSArray *)restrictions depart:(NSDate *)departureTime arrive:(NSDate *)arrivalTime completionHandler: (mpRouteHandlerBlockType)handler;
- (void)routingFrom:(MPLocation *)from to:(MPLocation *)to by:(NSString *)mode completionHandler: (mpRouteHandlerBlockType)handler;
@end
