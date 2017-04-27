//
//  ReceiptViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"

@interface ReceiptViewController : UIViewController <SlideNavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UIImageView *imageViewLogo;
@property (weak, nonatomic) IBOutlet UILabel *labelDeliveryInfo;
@property (weak, nonatomic) IBOutlet UILabel *labelDeliveryInstructions;

@property (weak, nonatomic) IBOutlet UITableView *tableViewOrderSummary;

@property (weak, nonatomic) IBOutlet UILabel *labelSubtotalPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDeliveryPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelTaxPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDiscountPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelTotalPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDiscount;

@end
