//
//  AddressApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeliveryLocationsAndOffices.h"
#import "ValidatedAddress.h"

@interface AddressApiParser : NSObject

- (void) error:(NSDictionary *) errorInfo;
- (DeliveryLocationsAndOffices *) didGetDeliveryAddress:(NSDictionary *)info;
- (ValidatedAddress *) didValidateAddress:(NSDictionary *)info;

+ (AddressApiParser *)sharedAddressApiParser;

@end
