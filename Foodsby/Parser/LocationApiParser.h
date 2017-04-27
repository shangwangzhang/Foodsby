//
//  LocationApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DeliveryLocation.h"
#import "StoreForLocation.h"
#import "DeliveryTimes.h"
#import "DeliveryDaysThisWeek.h"

@interface LocationApiParser : NSObject

- (void) error:(NSDictionary *) errorInfo;
- (void) didGetDeliveryLocations:(NSArray *) info;
- (DeliveryLocation *) didGetSpecificDeliveryLocation:(NSDictionary *)info;
- (void) didGetLocationSchedule:(NSDictionary *)info;


+ (LocationApiParser *)sharedLocationApiParser;

@end
