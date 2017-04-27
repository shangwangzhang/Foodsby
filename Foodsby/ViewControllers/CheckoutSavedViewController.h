//
//  CheckoutSavedViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ComboBox.h"
#import "CheckoutApi.h"
#import "UserApi.h"

@interface CheckoutSavedViewController : UIViewController <ComBoxDelegate, CheckoutApiDelegate, UserApiDelegate>

@property (weak, nonatomic) IBOutlet UILabel *labelSubtotalPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDeliveryPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelTaxPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDiscountPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelTotalPrice;
@property (weak, nonatomic) IBOutlet UILabel *labelDiscount;
@property (weak, nonatomic) IBOutlet UIButton *buttonPlaceOrder;

@property (weak, nonatomic) IBOutlet UITextField *textFieldCreditCard;

@end
