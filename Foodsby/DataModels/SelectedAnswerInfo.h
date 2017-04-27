//
//  SelectedAnswerInfo.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SelectedAnswerInfo : NSObject

@property (nonatomic) NSInteger         answerId;
@property (nonatomic) BOOL              selected;
@property (nonatomic) NSInteger         depth;

@end
