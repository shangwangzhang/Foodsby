//
//  ExceptionApi.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Global.h"

@class ExceptionApi;

@protocol ExceptionApiDelegate

@required

- (void) error:(NSDictionary *) errorInfo;

@optional

- (void) didGetAllGlobalException:(NSArray *) info;
- (void) didGetOpenTodayException:(BOOL) info;

@end

@interface ExceptionApi : NSObject {
    
    NSObject <ExceptionApiDelegate> *           delegate;
    enum API_CALL_TYPE                          currentCallType;
}

+ (ExceptionApi *) sharedExceptionApi;
- (void)setDelegate:(NSObject <ExceptionApiDelegate> *) apiDelegate;

- (void) getAllGlobalException;
- (void) getOpenTodayException;

@end
