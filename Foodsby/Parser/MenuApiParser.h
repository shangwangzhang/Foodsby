//
//  MenuApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MenuList.h"

@interface MenuApiParser : NSObject

- (void) error:(NSDictionary *)errorInfo;
- (MenuList *) didGetMenu:(NSDictionary *)info;
- (MenuItem *) didGetMenuItem:(NSDictionary *)info;

    
+ (MenuApiParser *)sharedMenuApiParser;

@end
