//
//  Store.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "Store.h"

@implementation Store

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _restaurantName = nil;
        _storeName = nil;
    }
    
    return self;
}

@end
