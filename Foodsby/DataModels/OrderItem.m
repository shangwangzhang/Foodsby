//
//  OrderItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderItem.h"

@implementation OrderItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _itemName = nil;
        _price = 0.0;
        _orderItemId = -1;
        _specialInstructions = nil;
        _modifiers = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
