//
//  ValidatedAddress.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "ValidatedAddress.h"

@implementation ValidatedAddress

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _validatedAddressId = -1;
        _candidates = [[NSMutableArray alloc] init];
        _success = NO;
    }
    
    return self;
}

@end
