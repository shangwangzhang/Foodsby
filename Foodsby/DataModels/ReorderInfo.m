//
//  ReorderInfo.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "ReorderInfo.h"

@implementation ReorderInfo

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {

        _orderHistoryId = -1;
        _dayOfWeek = -1;
        _storeId = -1;
        _deliveryTimeId = -1;
        _deliveryLocationId = -1;
    }
    
    return self;
}

@end
