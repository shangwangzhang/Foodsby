//
//  LocationApi.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Global.h"


@class LocationApi;

@protocol LocationApiDelegate

@required

- (void) error:(NSDictionary *) errorInfo;

@optional

- (void) didGetLocationSchedule:(NSDictionary *) info;
- (void) didGetDeliveryLocations:(NSArray *) info;
- (void) didGetSpecificDeliveryLocation:(NSDictionary *) info;

@end

@interface LocationApi : NSObject {
    
    NSObject <LocationApiDelegate> *        delegate;
    enum API_CALL_TYPE                      currentCallType;
}

+ (LocationApi *) sharedLocationApi;
- (void)setDelegate:(NSObject <LocationApiDelegate> *) apiDelegate;

- (void) getLocationSchedule:(NSInteger) locationId;
- (void) getDeliveryLocations;
- (void) getSpecificDeliveryLocation:(NSInteger) locationId;

@end
