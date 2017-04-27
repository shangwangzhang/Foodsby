//
//  ResetPasswordViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/12/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserApi.h"

@interface ResetPasswordViewController : UIViewController <UITextFieldDelegate, UserApiDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textFieldEmailAddress;
@property (weak, nonatomic) IBOutlet UIButton *buttonSendPasswordLink;

@end
