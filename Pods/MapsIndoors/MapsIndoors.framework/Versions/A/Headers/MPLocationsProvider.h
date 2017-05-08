//
//  MPLocationsProvider.h
//  MapsIndoors SDK for iOS
//
//  Created by Daniel Nielsen on 1/14/14.
//  Copyright (c) 2014 MapsPeople A/S. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPLocationDataset.h"
#import "MPLocationQuery.h"
#import "MPLocation.h"

typedef void(^mpLocationDetailsHandlerBlockType)(MPLocation* location, NSError* error);
typedef void(^mpLocationListHandlerBlockType)(MPLocationDataset* locationData, NSError* error);

/**
 * Locations provider delegate.
 */
@protocol MPLocationsProviderDelegate <NSObject>
/**
 * Locations data ready event method.
 * @param LocationsCollection The Locations data collection.
 */
@required
- (void) onLocationsReady: (MPLocationDataset*)locationData;

@required
- (void) onLocationDetailsReady: (MPLocation*)location;
@end
/**
 * Locations provider protocol.
 */
@protocol MPLocationsProvider <NSObject>

@property (weak) id <MPLocationsProviderDelegate> delegate;
/**
 * Method to initiate fetching of all locations from the provider in a specific translation.
 * @param solutionId The MapsIndoors solution ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
@required
- (void)getLocationsAsync: (NSString*) solutionId language: (NSString*) language;
/**
 * Method to initiate fetching of all locations from the provider in a specific translation.
 * @param solutionId The MapsIndoors solution ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocation object (can be nil) and an NSError object (can be nil).
 */
@required
- (void)getLocationsAsync: (NSString*) solutionId language: (NSString*) language completionHandler: (mpLocationListHandlerBlockType) handler;
/**
 * Method to query a unique location from the provider based on an id.
 * @param solutionId The MapsIndoors solution ID.
 * @param locationId The MapsIndoors location ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
@required
- (void)getLocationDetailsAsync: (NSString*) solutionId withId:(NSString*)locationId language: (NSString*) language;
/**
 * Method to query a unique location from the provider based on an id.
 * @param solutionId The MapsIndoors solution ID.
 * @param locationId The MapsIndoors location ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocation object (can be nil) and an NSError object (can be nil).
 */
@required
- (void)getLocationDetailsAsync: (NSString*) solutionId withId:(NSString*)locationId language: (NSString*) language completionHandler: (mpLocationDetailsHandlerBlockType) handler;
/**
 * Method to query a subset of locations from the provider.
 * @param locationQuery Locations query object. Must at least define your MapsIndoors solution ID (MPLocationQuery.solutionId)
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
@required
- (void)getLocationsUsingQueryAsync: (MPLocationQuery*) locationQuery language: (NSString*) language;
/**
 * Method to query a subset of locations from the provider.
 * @param locationQuery Locations query object. Must at least define your MapsIndoors solution ID (MPLocationQuery.solutionId)
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocationDataset object (can be nil) and an NSError object (can be nil).
 */
@required
- (void)getLocationsUsingQueryAsync: (MPLocationQuery*) locationQuery language: (NSString*) language completionHandler: (mpLocationListHandlerBlockType) handler;
@end


/**
 * Locations provider that defines a delegate and a method to initiate fetching of locations from the provider.
 */
@interface MPLocationsProvider : NSObject<MPLocationsProvider>
/**
 * Locations provider delegate.
 */
@property (weak) id <MPLocationsProviderDelegate> delegate;

- (id)init;

/**
 * Method to initiate fetching of all locations from the provider in a specific translation.
 * @param solutionId The MapsIndoors solution ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
- (void)getLocationsAsync: (NSString*) solutionId language: (NSString*) language;
/**
 * Method to initiate fetching of all locations from the provider in a specific translation.
 * @param solutionId The MapsIndoors solution ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocation object (can be nil) and an NSError object (can be nil).
 */
- (void)getLocationsAsync: (NSString*) solutionId language: (NSString*) language completionHandler: (mpLocationListHandlerBlockType) handler;
/**
 * Method to query a unique location from the provider based on an id.
 * @param solutionId The MapsIndoors solution ID.
 * @param locationId The MapsIndoors location ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
- (void)getLocationDetailsAsync: (NSString*) solutionId withId:(NSString*)locationId language: (NSString*) language;
/**
 * Method to query a unique location from the provider based on an id.
 * @param solutionId The MapsIndoors solution ID.
 * @param locationId The MapsIndoors location ID.
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocation object (can be nil) and an NSError object (can be nil).
 */
- (void)getLocationDetailsAsync: (NSString*) solutionId withId:(NSString*)locationId language: (NSString*) language completionHandler: (mpLocationDetailsHandlerBlockType) handler;
/**
 * Method to query a subset of locations from the provider.
 * @param locationQuery Locations query object. Must at least define your MapsIndoors solution ID (MPLocationQuery.solutionId)
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 */
- (void)getLocationsUsingQueryAsync: (MPLocationQuery*) locationQuery language: (NSString*) language;
/**
 * Method to query a subset of locations from the provider.
 * @param locationQuery Locations query object. Must at least define your MapsIndoors solution ID (MPLocationQuery.solutionId)
 * @param language The language code. Must be one of the MapsIndoors solutions supported content languages.
 * @param handler The handler callback block. Contains the MPLocationDataset object (can be nil) and an NSError object (can be nil).
 */
- (void)getLocationsUsingQueryAsync: (MPLocationQuery*) locationQuery language: (NSString*) language completionHandler: (mpLocationListHandlerBlockType) handler;

@end
