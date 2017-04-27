//
//  CustomerInfo.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomerInfo : NSObject

@property (nonatomic) NSString *    fistName;
@property (nonatomic) NSString *    lastName;
@property (nonatomic) NSString *    phone;
@property (nonatomic) BOOL          smsNotify;

@end
