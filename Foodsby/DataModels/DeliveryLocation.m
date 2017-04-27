//
//  DeliveryLocation.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryLocation.h"

@implementation DeliveryLocation

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _deliveryLocationId = -1;
        _locationName = nil;
        _dropoffInstruction = nil;
        _pickupInstruction = nil;
        _deliveryLine1 = nil;
        _lastLine = nil;
        _longitude = nil;
        _latitude = nil;
    }
    
    return self;
}

@end
