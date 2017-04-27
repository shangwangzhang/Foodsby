//
//  Exception.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Exception : NSObject

@property (nonatomic) NSInteger                     globalExceptionId;
@property (nonatomic) NSString *                    exceptionDate;
@property (nonatomic) NSInteger                     duration;

@end
