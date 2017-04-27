//
//  InviteContactsViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/20/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OfficeApi.h"
#import "SlideNavigationController.h"

@interface InviteContactsViewController : UIViewController <SlideNavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource, OfficeApiDelegate> {
    
    NSMutableArray *        arrayContacts;
}

@property (weak, nonatomic) IBOutlet UITableView *  tableViewCotacts;
@property (weak, nonatomic) IBOutlet UIButton *     buttonSendInvitation;

@end
