//
//  PaymentInfo.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaymentInfo : NSObject

@property (nonatomic) NSString *    fistName;
@property (nonatomic) NSString *    lastName;
@property (nonatomic) NSString *    cardNbr;
@property (nonatomic) NSInteger     expMonth;
@property (nonatomic) NSInteger     expYear;
@property (nonatomic) NSString *    cVV2;
@property (nonatomic) double        amount;

@end
