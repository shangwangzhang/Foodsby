//
//  ContactInAddressBook.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/20/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "ContactInAddressBook.h"

@implementation ContactInAddressBook

- (id) init {
    
    // Call superclass's initializer
    self = [super init];
    
    if( self != nil ) {
        
        _firstName = nil;
        _lastName = nil;
        _companyName = nil;
        _email = nil;
        _selected = NO;
    }
    
    return self;
}

@end
