//
//  UserApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/8/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserApi.h"
#import "UserCard.h"

@interface UserApiParser : NSObject <UserApiDelegate>

- (void) error:(NSDictionary *)errorInfo;
- (void) didGetUser:(NSDictionary *) info;
- (void) didUpdateUser:(NSDictionary *) info;
- (void) didCreateUser:(NSDictionary *)info;
- (void) didLogIn:(NSDictionary *) info;
- (void) didGetUserToken:(NSDictionary *)info;
- (void) didResetPassword:(NSDictionary *)info;
- (BOOL) didChangePassword:(NSDictionary *)info;
- (void) didDeleteUserCards:(NSDictionary *) info;
- (void) didGetUserCards:(NSArray *) info;


+ (UserApiParser *)sharedUserApiParser;

@end
