//
//  SelectedAnswerInfo.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/5/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "SelectedAnswerInfo.h"

@implementation SelectedAnswerInfo

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _answerId = -1;
        _selected = NO;
        _depth = -1;
    }
    
    return self;
}

@end
