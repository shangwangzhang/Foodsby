//
//  OrderAddItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderAddItem.h"

@implementation OrderAddItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _orderId = -1;
        _menuItemId = -1;
        _specialInstructions = nil;
        _selectedAnswers = [[NSMutableArray alloc] init];        
    }
    
    return self;
}

@end
