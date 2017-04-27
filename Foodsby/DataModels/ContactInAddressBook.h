//
//  ContactInAddressBook.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/20/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContactInAddressBook : NSObject

@property (nonatomic) NSString *    firstName;
@property (nonatomic) NSString *    lastName;
@property (nonatomic) NSString *    companyName;
@property (nonatomic) NSString *    email;
@property (nonatomic) BOOL          selected;

@end
