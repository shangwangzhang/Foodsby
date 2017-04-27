//
//  MenuItem.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/10/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "MenuItem.h"

@implementation MenuItem

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _menuItemId = -1;
        _displayText = nil;
        _price = 0.0;
        _menuItemDescription = nil;
        _specialInstructions = nil;
        _questionItems = [[NSMutableArray alloc] init];
        _selectedAnswers = [[NSMutableArray alloc] init];
    }
    
    return self;
}

@end
