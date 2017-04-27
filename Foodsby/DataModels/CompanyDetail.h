//
//  CompanyDetail.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CompanyDetail : NSObject

@property (nonatomic) NSInteger         count;
@property (nonatomic) NSInteger         officeId;
@property (nonatomic) NSString *        officeName;
@property (nonatomic) NSInteger         validatedAddressId;
@property (nonatomic) NSInteger         deliveryLocationId;
@property (nonatomic) NSString *        deliveryLine1;
@property (nonatomic) NSString *        lastLine;
@property (nonatomic) NSString *        longitude;
@property (nonatomic) NSString *        latitude;

@end
