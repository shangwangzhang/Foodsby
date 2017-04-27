//
//  DeliveryDaysThisWeek.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "DeliveryDaysThisWeek.h"

@implementation DeliveryDaysThisWeek

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _dayOfWeek = -1;
        _dateOfDayForWeek = nil;
        _stores = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
