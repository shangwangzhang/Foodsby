//
//  CustomizeDetailViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/27/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomizeDetailViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic)       NSArray *           arrayQuestionItems;

@property (weak, nonatomic) IBOutlet UITableView *tableViewQuestion;

@end
