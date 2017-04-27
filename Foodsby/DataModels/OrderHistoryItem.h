//
//  OrderHistoryItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderHistoryItem : NSObject

@property (nonatomic) NSString *                    specialInstructions;
@property (nonatomic) NSString *                    itemName;
@property (nonatomic) NSMutableArray *              modifiers;

@end
