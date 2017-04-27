//
//  User.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (nonatomic) NSInteger                 userId;
@property (nonatomic) NSString *                inviteCode;
@property (nonatomic) NSString *                userName;
@property (nonatomic) NSString *                email;
@property (nonatomic) NSString *                firstName;
@property (nonatomic) NSString *                lastName;
@property (nonatomic) NSString *                phone;
@property (nonatomic) NSInteger                 officeId;
@property (nonatomic) NSInteger                 deliveryLocationId;
@property (nonatomic) NSString *                created;
@property (nonatomic) NSString *                birthday;
@property (nonatomic) NSInteger                 status;
@property (nonatomic) NSString *                token;
@property (nonatomic) NSString *                tokenExpire;
@property (nonatomic) BOOL                      smsNotify;

@end
