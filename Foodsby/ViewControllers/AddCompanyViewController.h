//
//  AddCompanyViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/16/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddressApi.h"
#import "OfficeApi.h"
#import "AddressApiParser.h"


@interface AddCompanyViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, AddressApiDelegate, OfficeApiDelegate> {
    
    ValidatedAddress * validateAddress;
}

@property (weak, nonatomic) IBOutlet UIView *viewAddCompany;
@property (weak, nonatomic) IBOutlet UIView *viewVerifyAddress;

@property (weak, nonatomic) IBOutlet UITextField *textFieldCompanyName;
@property (weak, nonatomic) IBOutlet UITextField *textFieldStreetAddress;
@property (weak, nonatomic) IBOutlet UITextField *textFieldSuite;
@property (weak, nonatomic) IBOutlet UITextField *textFieldCity;
@property (weak, nonatomic) IBOutlet UITextField *textFieldState;
@property (weak, nonatomic) IBOutlet UITextField *textFieldZip;
@property (weak, nonatomic) IBOutlet UIButton *buttonAdd;

@property (weak, nonatomic) IBOutlet UITableView *tableViewVerifyAddress;

@end
