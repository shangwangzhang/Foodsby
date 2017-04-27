//
//  OrderHistory.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderHistory : NSObject

@property (nonatomic) NSInteger                 orderHistoryId;
@property (nonatomic) NSString *                additionalInstructions;
@property (nonatomic) NSMutableArray *          orderItems;

@end
