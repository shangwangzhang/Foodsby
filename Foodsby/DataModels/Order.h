//
//  Order.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Order : NSObject

@property (nonatomic) NSInteger                 orderId;
@property (nonatomic) NSInteger                 storeId;
@property (nonatomic) NSInteger                 userId;
@property (nonatomic) NSInteger                 deliveryTimeId;
@property (nonatomic) NSString *                orderDate;
@property (nonatomic) NSInteger                 orderStatus;
@property (nonatomic) NSString *                additionalInstructions;
@property (nonatomic) NSMutableArray *          orderItems;
@property (nonatomic) NSString *                created;
@property (nonatomic) double                    itemSubTotal;
@property (nonatomic) double                    couponSubTotal;
@property (nonatomic) double                    taxSubTotal;
@property (nonatomic) double                    orderTotal;
@property (nonatomic) NSString *                transactionId;
@property (nonatomic) NSInteger                 deliveryLocationId;
@property (nonatomic) double                    foodsbyFee;

@end
