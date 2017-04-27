//
//  OrderAddItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderAddItem : NSObject

@property (nonatomic) NSInteger         orderId;
@property (nonatomic) NSInteger         menuItemId;
@property (nonatomic) NSString *        specialInstructions;
@property (nonatomic) NSMutableArray *  selectedAnswers;

@end
