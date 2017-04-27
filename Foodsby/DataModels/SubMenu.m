//
//  SubMenu.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "SubMenu.h"

@implementation SubMenu

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _subMenuId = -1;
        _subMenuName = nil;
        _menuItems = [[NSMutableArray alloc] init];
        _subMenuDescription = nil;
    }
    
    return self;
}

@end
