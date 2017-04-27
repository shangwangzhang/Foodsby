//
//  OrderHistoryItemModifier.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "OrderHistoryItemModifier.h"

@implementation OrderHistoryItemModifier

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _questionName = nil;
        _answers = [[NSMutableArray alloc] init];
        _depth = -1;
    }
    
    return self;
}

@end
