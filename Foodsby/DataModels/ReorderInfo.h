//
//  ReorderInfo.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReorderInfo : NSObject

@property (nonatomic) NSInteger         orderHistoryId;
@property (nonatomic) NSInteger         dayOfWeek;
@property (nonatomic) NSInteger         storeId;
@property (nonatomic) NSInteger         deliveryTimeId;
@property (nonatomic) NSInteger         deliveryLocationId;

@end
