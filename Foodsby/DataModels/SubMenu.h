//
//  SubMenu.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SubMenu : NSObject

@property (nonatomic) NSInteger                     subMenuId;
@property (nonatomic) NSString *                    subMenuName;
@property (nonatomic) NSMutableArray *              menuItems;
@property (nonatomic) NSString *                    subMenuDescription;

@end
