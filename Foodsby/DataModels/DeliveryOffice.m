//
//  DeliveryOffice.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryOffice.h"

@implementation DeliveryOffice

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _officeId = -1;
        _officeName = nil;
        _deliveryLocationId = -1;
    }
    
    return self;
}

@end
