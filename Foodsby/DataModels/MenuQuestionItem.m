//
//  MenuQuestionItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "MenuQuestionItem.h"

@implementation MenuQuestionItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _displayText = nil;
        _questionId = -1;
        _answerItems = [[NSMutableArray alloc] init];
        _minimumSelection = -1;
        _maximumSelection = -1;
        _showAsRadio = NO;
    }
    
    return self;
}

@end
