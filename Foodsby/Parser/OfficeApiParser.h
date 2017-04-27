//
//  OfficeApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CompanyDetail.h"

@interface OfficeApiParser : NSObject

- (void) error:(NSDictionary *) errorInfo;
- (void) didGetAllOffices:(NSArray *) info;
- (CompanyDetail *) didCreateOffice:(NSDictionary *) info;
- (CompanyDetail *) didGetOffice:(NSDictionary *) info;
- (void) didInviteOffice:(NSDictionary *) info;


+ (OfficeApiParser *)sharedOfficeApiParser;

@end
