//
//  CustomizeViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/24/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"
#import "OrderApi.h"

@interface CustomizeViewController : UIViewController <SlideNavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource, OrderApiDelegate> {
    
    NSArray *           arrayQuestionItems;
    OrderAddItem *      orderItems;
    NSInteger           nClickedButton;
}

@property (weak, nonatomic) IBOutlet UITableView *tableViewQuestion;
@property (weak, nonatomic) IBOutlet UITextView *textViewInstruction;
@property (weak, nonatomic) IBOutlet UIButton *buttonNextItem;
@property (weak, nonatomic) IBOutlet UIButton *buttonCheckout;
@property (weak, nonatomic) IBOutlet UIView *viewInstructionFrame;

@end
