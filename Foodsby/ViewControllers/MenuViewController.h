//
//  MenuViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/12/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"


@interface MenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *      tableViewMenu;
@property (nonatomic) NSInteger                           nMenuType;
@property (weak, nonatomic) UINavigationController *      menuNavigationController;

@end
