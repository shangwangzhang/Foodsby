//
//  OfficeViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/13/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserApi.h"
#import "OfficeApi.h"
#import "LocationApi.h"
#import "CompanyDetail.h"

@interface OfficeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, UserApiDelegate, OfficeApiDelegate, LocationApiDelegate> {
    
    NSMutableArray *    arrayFilteredOffices;
    CompanyDetail *     office;
    
}

@property (nonatomic)  BOOL                         bShowBackButton;
@property (weak, nonatomic) IBOutlet UITableView *  tableViewOffices;
@property (weak, nonatomic) IBOutlet UISearchBar *  searchBarOffice;
@property (weak, nonatomic) IBOutlet UIButton *     buttonAddYourOffice;

@end
