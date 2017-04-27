//
//  NotificationsViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ComboBox.h"

@interface NotificationsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, ComBoxDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textFieldTime;

@property (weak, nonatomic) IBOutlet UITableView *tableViewNotifications;

@end
