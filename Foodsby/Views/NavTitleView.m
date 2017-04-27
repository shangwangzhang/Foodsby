//
//  NavTitleView.m
//  Foodsby
//
//  Created by ShangWang Zhang on 10/13/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import "NavTitleView.h"

@implementation NavTitleView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/
-(id)initWithNibName:(NSString*)nibNameOrNil {
    
    self = [super init];
    
    if (self) {
        // Initialization code
        NSArray * _nibContents = [[NSBundle mainBundle] loadNibNamed:nibNameOrNil
                                                              owner:self
                                                            options:nil];
        self = [_nibContents objectAtIndex:0];
    }
    
    return self;
}


- (id)initWithFrame:(CGRect)frame nibName:(NSString*)nibNameOrNil {

    self = [super initWithFrame:frame];
    
    if (self) {
        // Initialization code
        NSArray* _nibContents = [[NSBundle mainBundle] loadNibNamed:nibNameOrNil
                                                              owner:self
                                                            options:nil];
        self = [_nibContents objectAtIndex:0];
    }
    
    return self;
}

@end
