//
//  OrderHistory.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderHistory.h"

@implementation OrderHistory

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _orderHistoryId = -1;
        _additionalInstructions = nil;
        _orderItems = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
