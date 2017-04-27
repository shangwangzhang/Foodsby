//
//  CheckoutCard.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CheckoutOrderDetails.h"
#import "CheckoutReceiptDetails.h"
#import "CheckoutOrderItem.h"

@interface CheckoutCard : NSObject

@property (nonatomic) BOOL                          success;
@property (nonatomic) NSString *                    message;
@property (nonatomic) CheckoutOrderDetails *        orderDetails;
@property (nonatomic) CheckoutReceiptDetails *      receiptDetails;

@end
