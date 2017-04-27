//
//  NavTitleView.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/13/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavTitleView : UIView

@property (weak, nonatomic) IBOutlet UILabel *labelTitle;

@property (weak, nonatomic) IBOutlet UILabel *labelSubTitle;


- (id)initWithNibName:(NSString*)nibNameOrNil;
- (id)initWithFrame:(CGRect)frame nibName:(NSString*)nibNameOrNil;


@end
