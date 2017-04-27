//
//  CandidateAddress.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "CandidateAddress.h"

@implementation CandidateAddress

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _candidateAddressId = -1;
        _deliveryLine1 = nil;
        _lastLine = nil;
    }
    
    return self;
}

@end
