//
//  DeliveryLocationsAndOffices.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeliveryLocationForAddress.h"
#import "DeliveryOffice.h"

@interface DeliveryLocationsAndOffices : NSObject

@property (nonatomic) NSInteger                     validatedAddressId;
@property (nonatomic) NSMutableArray *              deliveryLocations;
@property (nonatomic) NSString *                    deliveryLine1;
@property (nonatomic) NSString *                    lastLine;
@property (nonatomic) NSMutableArray *              offices;
@property (nonatomic) NSString *                    latitude;
@property (nonatomic) NSString *                    longitude;

@end
