//
//  CheckoutApiParser.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/9/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CheckoutCard.h"

@interface CheckoutApiParser : NSObject

- (void) error:(NSDictionary *) errorInfo;

- (CheckoutCard *) checkout:(NSDictionary *)info;
- (CheckoutCard *) didCheckoutCard:(NSDictionary *)info;
- (CheckoutCard *) didCheckoutSavedCard:(NSDictionary *) info;
- (CheckoutCard *) didCheckoutFreeMeal:(NSDictionary *) info;


+ (CheckoutApiParser *)sharedCheckoutApiParser;

@end
