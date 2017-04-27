//
//  CompanyDetail.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "CompanyDetail.h"

@implementation CompanyDetail

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _count = -1;
        _officeId = -1;
        _officeName = nil;
        _validatedAddressId = -1;
        _deliveryLocationId = -1;
        _deliveryLine1 = nil;
        _lastLine = nil;
        _longitude = nil;
        _latitude = nil;
    }
    
    return self;
}

@end
