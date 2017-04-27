//
//  DeliveryTimes.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryTimes.h"

@implementation DeliveryTimes

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _dropoffTime = nil;
        _dropoffDateTime = nil;
        _deliveryTimeId = -1;
        _deliveryLocationId = -1;
        _deliveryId = -1;
        _deliveryName = nil;
        _isPending = NO;
        _inZone = NO;
    }
    
    return self;
}


@end
