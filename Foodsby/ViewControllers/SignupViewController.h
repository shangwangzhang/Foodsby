//
//  SignupViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/11/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserApi.h"
#import "LocationApi.h"
#import "OfficeApi.h"
#import "TTTAttributedLabel.h"
#import "ExceptionApi.h"

@interface SignupViewController : UIViewController <UITextFieldDelegate, TTTAttributedLabelDelegate, UserApiDelegate, LocationApiDelegate, OfficeApiDelegate, ExceptionApiDelegate> {
    
    BOOL        bCheckboxTerms;
}

@property (weak, nonatomic) IBOutlet UITextField *textFieldEmailAddress;
@property (weak, nonatomic) IBOutlet UITextField *textFieldPassword;
@property (weak, nonatomic) IBOutlet UITextField *textFieldConfirmPassword;
@property (weak, nonatomic) IBOutlet UIButton *buttonSignup;
@property (weak, nonatomic) IBOutlet UIButton *buttonCheckbox;
@property (weak, nonatomic) IBOutlet TTTAttributedLabel *labelTermsAndConditions;

@end
