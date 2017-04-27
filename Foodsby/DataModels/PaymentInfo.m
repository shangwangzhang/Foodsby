//
//  PaymentInfo.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "PaymentInfo.h"

@implementation PaymentInfo

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _fistName = nil;
        _lastName = nil;
        _cardNbr = nil;
        _expMonth = 0;
        _expYear = 0;
        _cVV2 = nil;
        _amount = 0.0;
    }
    return self;
}

@end
