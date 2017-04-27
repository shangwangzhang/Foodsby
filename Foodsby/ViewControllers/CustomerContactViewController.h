//
//  CustomerContactViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserApi.h"
#import "CheckoutApi.h"

@interface CustomerContactViewController : UIViewController <UITextFieldDelegate, UserApiDelegate, CheckoutApiDelegate>

@property (nonatomic)       BOOL            bFree;
@property (weak, nonatomic) IBOutlet UITextField *textFieldEmail;
@property (weak, nonatomic) IBOutlet UITextField *textFieldFirstName;
@property (weak, nonatomic) IBOutlet UITextField *textFieldLastName;
@property (weak, nonatomic) IBOutlet UITextField *textFieldPhoneNumber;
@property (weak, nonatomic) IBOutlet UIButton *buttonDo;

@end
