//
//  OrderItemModifier.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderItemModifier.h"

@implementation OrderItemModifier

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _depth = -1;
        _orderItemModifierId = -1;
        _answers = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
