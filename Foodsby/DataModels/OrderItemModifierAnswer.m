//
//  OrderItemModifierAnswer.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderItemModifierAnswer.h"

@implementation OrderItemModifierAnswer

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _answerId = -1;
        _itemName = nil;
        _price = 0.0;
    }
    
    return self;
}

@end
