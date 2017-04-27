//
//  OrderApplyCoupon.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderApplyCoupon.h"

@implementation OrderApplyCoupon

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _success = NO;
        _message = nil;
        _order = [[Order alloc] init];
    }
    
    return self;
}

@end
