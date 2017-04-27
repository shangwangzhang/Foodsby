//
//  MenuItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/10/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuItem : NSObject

@property (nonatomic) NSInteger                     menuItemId;
@property (nonatomic) NSString *                    displayText;
@property (nonatomic) double                        price;
@property (nonatomic) NSString *                    menuItemDescription;
@property (nonatomic) NSString *                    specialInstructions;
@property (nonatomic) NSMutableArray *              questionItems;
@property (nonatomic) NSMutableArray *              selectedAnswers;

@end
