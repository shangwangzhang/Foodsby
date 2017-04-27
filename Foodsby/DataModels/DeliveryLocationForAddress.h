//
//  DeliveryLocationForAddress.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeliveryLocationForAddress : NSObject

@property (nonatomic) NSInteger                     deliveryLocationId;
@property (nonatomic) NSString *                    locationName;
@property (nonatomic) BOOL                          active;

@end
