//
//  Exception.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "Exception.h"

@implementation Exception

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _globalExceptionId = -1;
        _exceptionDate = nil;
        _duration = -1;
    }
    
    return self;
}

@end
