//
//  AppDelegate.h
//  GoogleIndoorMapping
//
//  Created by Sagar Srivastava on 4/25/17.
//  Copyright © 2017 Sagar Srivastava. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

