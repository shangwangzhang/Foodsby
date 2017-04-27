//
//  SelectMenuViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/24/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"

@interface SelectMenuViewController : UIViewController <SlideNavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UIImageView *  imageViewLogo;
@property (weak, nonatomic) IBOutlet UILabel *      labelDeliveryTime;
@property (weak, nonatomic) IBOutlet UILabel *      labelDeliveryInstructions;
@property (weak, nonatomic) IBOutlet UITableView *  tableViewMenu;

@end
