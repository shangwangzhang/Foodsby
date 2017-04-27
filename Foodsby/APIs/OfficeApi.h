//
//  OfficeApi.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Global.h"


@class OfficeApi;

@protocol OfficeApiDelegate

@required

- (void) error:(NSDictionary *) errorInfo;

@optional

- (void) didCreateOffice:(NSDictionary *) info;
- (void) didInviteOffice:(NSDictionary *) info;
- (void) didGetOffice:(NSDictionary *) info;
- (void) didGetAllOffices:(NSArray *) info;

@end

@interface OfficeApi : NSObject {
    
    NSObject <OfficeApiDelegate> *          delegate;
    enum API_CALL_TYPE                      currentCallType;
}

+ (OfficeApi *) sharedOfficeApi;
- (void)setDelegate:(NSObject <OfficeApiDelegate> *) apiDelegate;

- (void) createOffice:(NSString *)companyName isCandidateAddress:(BOOL)isCandidateAddress selectedAddressId:(NSInteger) selectedAddressId;
- (void) inviteOffice:(NSString *)emails officeId:(NSInteger)officeId;
- (void) getOffice:(NSInteger)officeId;
- (void) getAllOffices;

@end
