//
//  SCLocationManager.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/23/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//



#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
