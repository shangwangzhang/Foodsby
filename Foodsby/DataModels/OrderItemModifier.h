//
//  OrderItemModifier.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderItemModifier : NSObject

@property (nonatomic) NSInteger                depth;
@property (nonatomic) NSInteger                orderItemModifierId;
@property (nonatomic) NSMutableArray *         answers;

@end
