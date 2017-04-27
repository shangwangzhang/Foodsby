//
//  PromoCode.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/28/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "PromoCode.h"

@implementation PromoCode

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _Id = -1;
        _code = nil;
    }
    
    return self;
}

@end
