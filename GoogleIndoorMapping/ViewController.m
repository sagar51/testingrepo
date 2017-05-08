//
//  ViewController.m
//  GoogleIndoorMapping
//
//  Created by Sagar Srivastava on 4/25/17.
//  Copyright © 2017 Sagar Srivastava. All rights reserved.
//

#import "ViewController.h"
#import <MapsIndoors/MapsIndoors.h>
#import "ViewController.h"



@interface ViewController ()<GMSMapViewDelegate,GMSIndoorDisplayDelegate>
@end

@implementation ViewController
{
    GMSMapView*mapview_;
    UIPickerView*levelpickerview_;
    NSArray*levels_;
}

- (void)viewDidLoad {
    [super viewDidLoad];
   
}

-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:true];
    
    // Place the map above the demo-building
GMSCameraPosition* camera = [GMSCameraPosition cameraWithLatitude:28.4470
                                                            longitude:77.0996
                                                                 zoom:17];
    // Initialise the Google map
   mapview_ = [GMSMapView mapWithFrame:CGRectZero camera:camera];
    mapview_ .settings.myLocationButton = NO;
    mapview_.indoorEnabled = YES;
    mapview_.indoorDisplay.delegate = self;
    mapview_.translatesAutoresizingMaskIntoConstraints = NO;
    [_map_view addSubview:mapview_];
    
    
    
    ///reuless//
//    // Adding a rule with name nil, will apply generally to all categories
//    [myMapControl addDisplayRule:[[MPLocationDisplayRule alloc] initWithName:nil AndIcon:[UIImage imageNamed:@"poi"] AndZoomLevelOn:19 AndShowLabel:YES]];
//    // Adding a rule with a name, will override a more general rule
//    [myMapControl addDisplayRule:[[MPLocationDisplayRule alloc] initWithName:@"info" AndIcon:[UIImage imageNamed:@"info"] AndZoomLevelOn:17.0]];
//    [myMapControl addDisplayRule:[[MPLocationDisplayRule alloc] initWithName:@"parking" AndIcon:[UIImage imageNamed:@"parking"] AndZoomLevelOn:17.0]];
//    [myMapControl addDisplayRule:[[MPLocationDisplayRule alloc] initWithName:@"staircase" AndIcon:[UIImage imageNamed:@"staircase"] AndZoomLevelOn:18.0]];
//    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




@end
