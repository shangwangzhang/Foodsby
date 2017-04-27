//
//  MenuAnswerItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "MenuAnswerItem.h"

@implementation MenuAnswerItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _answerId = -1;
        _displayText = nil;
        _questionItems = [[NSMutableArray alloc] init];
        _parentQuestionId = -1;
        _selected = NO;
        _price = 0.0;
        _showAsRadio = NO;
        _depth = -1;
        _autoSelected = NO;
    }
    
    return self;
}

@end
