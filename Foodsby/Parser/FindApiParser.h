//
//  FindApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CompanyDetail.h"

@interface FindApiParser : NSObject

- (void) error:(NSDictionary *)errorInfo;
- (NSMutableArray *) didSearchOffice:(NSArray *)info;
- (NSMutableArray *) didSearchCompanyDetails:(NSArray *) info;


+ (FindApiParser *)sharedFindApiParser;

@end
