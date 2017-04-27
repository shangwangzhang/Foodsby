//
//  MenuList.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MenuList.h"
#import "SubMenu.h"
#import "MenuItem.h"
#import "MenuQuestionItem.h"
#import "MenuAnswerItem.h"

@interface MenuList : NSObject

@property (nonatomic) NSString *                    locationName;
@property (nonatomic) NSString *                    pickupInstruction;
@property (nonatomic) NSInteger                     dayOfWeek;
@property (nonatomic) NSInteger                     dateOfDayForWeek;
@property (nonatomic) NSInteger                     deliveryLocationId;
@property (nonatomic) NSString *                    restaurantName;
@property (nonatomic) NSString *                    dropoffTime;
@property (nonatomic) NSString *                    cutOffTime;
@property (nonatomic) NSString *                    timeZoneInfoId;
@property (nonatomic) NSMutableArray *              subMenus;
@property (nonatomic) BOOL                          soldOut;
@property (nonatomic) NSInteger                     orderId;
@property (nonatomic) NSInteger                     orderItemsCount;
@property (nonatomic) NSString *                    logoLink;
@property (nonatomic) BOOL                          hasPastOrder;

@end
