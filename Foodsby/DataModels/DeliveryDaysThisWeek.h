//
//  DeliveryDaysThisWeek.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeliveryDaysThisWeek : NSObject

@property (nonatomic) NSInteger                 dayOfWeek;
@property (nonatomic) NSString *                dateOfDayForWeek;
@property (nonatomic) NSMutableArray *          stores;

@end
