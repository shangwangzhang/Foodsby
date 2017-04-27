//
//  ComboBox.h
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ComboBox;

@protocol ComBoxDelegate <NSObject>

@optional

-(void)comboBox:(ComboBox *)comboBox didSelectRowAtIndexPath:(NSIndexPath *)indexPath;


@end

@interface ComboBox : UIView <UITableViewDataSource, UITableViewDelegate> {
    
    CGSize defaultComboBoxTableSize;
    CGRect comboBoxTableViewFrame;
}

@property (strong, nonatomic) IBOutlet UIView *view;
@property (strong, nonatomic) UITableView *comboBoxTableView;
@property (strong, nonatomic) NSArray *comboBoxDataArray;
@property (strong, nonatomic) IBOutlet UIButton *button;
@property (strong, nonatomic) id <ComBoxDelegate> delegate;

-(void)setComboBoxData:(NSArray *)comboBoxData;
-(void)setComboBoxSize:(CGSize)size;
-(IBAction)openComboBox:(UIButton *)sender;
-(void)setComboBoxTitle:(NSString *)title;
-(void)setComboBoxHintTitle:(NSString *) title;

@end
