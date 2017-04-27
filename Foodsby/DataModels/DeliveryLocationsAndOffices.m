//
//  DeliveryLocationsAndOffices.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryLocationsAndOffices.h"

@implementation DeliveryLocationsAndOffices

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _validatedAddressId = -1;
        _deliveryLocations = [[NSMutableArray alloc] init];
        _deliveryLine1 = nil;
        _lastLine = nil;
        _offices = [[NSMutableArray alloc] init];
        _latitude = nil;
        _longitude = nil;
    }
    
    return self;
}

@end
