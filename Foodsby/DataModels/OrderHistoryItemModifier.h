//
//  OrderHistoryItemModifier.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderHistoryItemModifier : NSObject

@property (nonatomic) NSString *                    questionName;
@property (nonatomic) NSMutableArray *              answers;
@property (nonatomic) NSInteger                     depth;

@end
