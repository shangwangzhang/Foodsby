//
//  CheckoutOrderItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CheckoutOrderItem : NSObject

@property (nonatomic) NSInteger                     orderItemHistoryId;
@property (nonatomic) NSInteger                     orderHistoryId;
@property (nonatomic) NSString *                    specialInstructions;
@property (nonatomic) NSInteger                     menuItemId;
@property (nonatomic) NSString *                    itemName;
@property (nonatomic) double                        price;

@end
