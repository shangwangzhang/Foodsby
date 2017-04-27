//
//  StatusViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/18/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"

@interface StatusViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *labelOfficeName;
@property (weak, nonatomic) IBOutlet UILabel *labelOfficeCount;
@property (weak, nonatomic) IBOutlet UILabel *labelOfficeAddress;
@property (weak, nonatomic) IBOutlet UILabel *labelLocationComment;
@property (weak, nonatomic) IBOutlet UIView *viewCommentContainer;

@end
