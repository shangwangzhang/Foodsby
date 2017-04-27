//
//  StoreForLocation.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Store.h"

@interface StoreForLocation : NSObject

@property (nonatomic) NSInteger                storeId;
@property (nonatomic) Store *                  store;
@property (nonatomic) NSString *               cutOffTime;
@property (nonatomic) NSString *               cutOffDateTime;
@property (nonatomic) NSMutableArray *         deliveryTimes;
@property (nonatomic) NSString *               logoLink;
@property (nonatomic) NSString *               timeZoneInfoId;
@property (nonatomic) NSInteger                maxWeight;
@property (nonatomic) NSMutableArray *         availableDays;
@property (nonatomic) NSInteger                currentWeight;
@property (nonatomic) BOOL                     inZone;
@property (nonatomic) NSInteger                mondayCount;
@property (nonatomic) NSInteger                tuesdayCount;
@property (nonatomic) NSInteger                wednesdayCount;
@property (nonatomic) NSInteger                thursdayCount;
@property (nonatomic) NSInteger                fridayCount;
@property (nonatomic) NSInteger                saturdayCount;
@property (nonatomic) NSInteger                sundayCount;

@end
