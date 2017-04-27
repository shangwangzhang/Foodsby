//
//  LoginViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/11/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserApi.h"
#import "LocationApi.h"
#import "OfficeApi.h"
#import "ExceptionApi.h"

@interface LoginViewController : UIViewController <UITextFieldDelegate, UserApiDelegate, LocationApiDelegate, OfficeApiDelegate, ExceptionApiDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textFieldEmailAddress;
@property (weak, nonatomic) IBOutlet UITextField *textFieldPassword;
@property (weak, nonatomic) IBOutlet UIButton *buttonLogin;

@end

