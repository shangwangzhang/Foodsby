//
//  OrderHistoryItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderHistoryItem.h"

@implementation OrderHistoryItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _specialInstructions = nil;
        _itemName = nil;
        _modifiers = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
