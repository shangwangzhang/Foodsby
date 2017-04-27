//
//  OrderApplyCoupon.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Order.h"

@interface OrderApplyCoupon : NSObject

@property (nonatomic) BOOL                          success;
@property (nonatomic) NSString *                    message;
@property (nonatomic) Order *                       order;

@end
