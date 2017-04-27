//
//  CheckoutReceiptDetails.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CheckoutReceiptDetails : NSObject

@property (nonatomic) NSInteger                     deliveryLocationId;
@property (nonatomic) NSInteger                     orderId;
@property (nonatomic) NSString *                    transactionId;
@property (nonatomic) NSString *                    locationName;
@property (nonatomic) NSString *                    dropoffTime;
@property (nonatomic) NSString *                    orderDate;
@property (nonatomic) NSString *                    restaurantName;
@property (nonatomic) NSString *                    pickupInstruction;
@property (nonatomic) NSString *                    phone;
@property (nonatomic) BOOL                          showSMS;
@property (nonatomic) NSString *                    smsNumber;

@end
