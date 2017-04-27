//
//  ExceptionApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ExceptionApi.h"
#import "Exception.h"

@interface ExceptionApiParser : NSObject <ExceptionApiDelegate>

- (void) error:(NSDictionary *)errorInfo;
- (void) didGetAllGlobalException:(NSArray *)info;
- (void) didGetOpenTodayException:(BOOL) info;

    
+ (ExceptionApiParser *)sharedExceptionApiParser;

@end
