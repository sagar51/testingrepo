//
//  MPBuildingCollection.h
//  MapsIndoors
//
//  Created by Daniel Nielsen on 21/10/14.
//  Copyright (c) 2014 MapsPeople A/S. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@protocol MPBuilding
@end

@interface MPBuildingCollection : JSONModel

@property NSArray<MPBuilding>* buildings;

@end
