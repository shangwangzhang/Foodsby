//
//  DeliveryTimes.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeliveryTimes : NSObject

@property (nonatomic) NSString *                dropoffTime;
@property (nonatomic) NSString *                dropoffDateTime;
@property (nonatomic) NSInteger                 deliveryTimeId;
@property (nonatomic) NSInteger                 deliveryLocationId;
@property (nonatomic) NSInteger                 deliveryId;
@property (nonatomic) NSString *                deliveryName;
@property (nonatomic) BOOL                      isPending;
@property (nonatomic) BOOL                      inZone;

@end

