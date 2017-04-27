//
//  DeliveryLocation.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/6/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeliveryLocation : NSObject

@property (nonatomic) NSInteger         deliveryLocationId;
@property (nonatomic) NSString *        locationName;
@property (nonatomic) NSString *        dropoffInstruction;
@property (nonatomic) NSString *        pickupInstruction;
@property (nonatomic) NSString *        deliveryLine1;
@property (nonatomic) NSString *        lastLine;
@property (nonatomic) NSString *        longitude;
@property (nonatomic) NSString *        latitude;

@end
