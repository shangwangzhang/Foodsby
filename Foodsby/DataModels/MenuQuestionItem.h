//
//  MenuQuestionItem.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuQuestionItem : NSObject

@property (nonatomic) NSString *                    displayText;
@property (nonatomic) NSInteger                     questionId;
@property (nonatomic) NSMutableArray *              answerItems;
@property (nonatomic) NSInteger                     minimumSelection;
@property (nonatomic) NSInteger                     maximumSelection;
@property (nonatomic) BOOL                          showAsRadio;

@end
