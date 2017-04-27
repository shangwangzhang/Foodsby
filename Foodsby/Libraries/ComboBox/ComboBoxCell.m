//
//  ComboBoxCell.m
//  Foodsby
//
//  Created by ShangWang Zhang on 11/3/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "ComboBoxCell.h"

@implementation ComboBoxCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
