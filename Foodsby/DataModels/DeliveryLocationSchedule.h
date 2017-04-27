//
//  DeliveryLocationSchedule.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeliveryLocationSchedule : NSObject

@property (nonatomic) NSMutableArray *          storesForLocation;
@property (nonatomic) NSMutableArray *          deliveryDaysThisWeek;
@property (nonatomic) NSString *                today;
@property (nonatomic) NSString *                locationName;

@end
