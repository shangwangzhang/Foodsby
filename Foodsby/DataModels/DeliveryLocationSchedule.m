//
//  DeliveryLocationSchedule.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryLocationSchedule.h"

@implementation DeliveryLocationSchedule

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _storesForLocation = [[NSMutableArray alloc] init];
        _deliveryDaysThisWeek = [[NSMutableArray alloc] init];
        _today = nil;
        _locationName = nil;
    }
    
    return self;
}

@end
