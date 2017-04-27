//
//  ValidatedAddress.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CandidateAddress.h"

@interface ValidatedAddress : NSObject

@property (nonatomic) NSInteger                     validatedAddressId;
@property (nonatomic) NSMutableArray *              candidates;
@property (nonatomic) BOOL                          success;

@end
