//
//  DeliveryLocationForAddress.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryLocationForAddress.h"

@implementation DeliveryLocationForAddress

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _deliveryLocationId = -1;
        _locationName = nil;
        _active = NO;
    }
    
    return self;
}

@end
