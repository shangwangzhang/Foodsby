//
//  CustomerInfo.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "CustomerInfo.h"

@implementation CustomerInfo

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _fistName = nil;
        _lastName = nil;
        _phone = nil;
        _smsNotify = NO;

    }
    
    return self;
}

@end
