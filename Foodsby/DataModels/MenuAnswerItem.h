//
//  MenuAnswerItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuAnswerItem : NSObject

@property (nonatomic) NSInteger                     answerId;
@property (nonatomic) NSString *                    displayText;
@property (nonatomic) NSMutableArray *              questionItems;
@property (nonatomic) NSInteger                     parentQuestionId;
@property (nonatomic) BOOL                          selected;
@property (nonatomic) double                        price;
@property (nonatomic) BOOL                          showAsRadio;
@property (nonatomic) NSInteger                     depth;
@property (nonatomic) BOOL                          autoSelected;

@end
