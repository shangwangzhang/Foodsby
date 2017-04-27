//
//  MenuInfo.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "MenuInfo.h"

@implementation MenuInfo

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _deliveryTimeId = -1;
        _deliveryLocationId = -1;
        _storeId = -1;
        _deliveryId = -1;
        _dayOfWeek = 0;
    }
    
    return self;
}

@end
