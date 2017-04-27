//
//  Global.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/4/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef Foodsby_Global_h
#define Foodsby_Global_h

#define urlPrefix               @"https://test.foodsby.com/"
#define apiUrlPrefix            [urlPrefix stringByAppendingString:@"api/"]
#define API_URL(url)            [apiUrlPrefix stringByAppendingString:url]

#define MainBackgroundColor     [UIColor colorWithRed:1.0 / 255.0 green:48.0 / 255.0 blue:69.0 / 255.0 alpha:1.0]//013045
#define TextColor               [UIColor colorWithRed:116.0 / 255.0 green:116.0 / 255.0 blue:116.0 / 255.0 alpha:1.0]//747474

enum API_CALL_TYPE {

    GETMENU,
    GETMENUITEM,

    GETDELIVERYLOCATIONS,
    GETSPECIFICDELIVERYLOCATION,
    GETLOCATIONSCHEDULE,
    
    SEARCHOFFICE,
    SEARCHCOMPANYDETAILS,
    
    GETUSER,
    UPDATEUSER,
    CREATEUSER,
    GETUSERCARDS,
    DELETEUSERCARDS,
    RESETPASSWORD,
    CHANGEPASSWORD,

    GETUSERTOKEN,
    
    LOGIN,
    
    GETORDER,
    REORDER,
    GETORDERHISTORY,
    ORDERADDITEM,
    REMOVEORDERITEM,
    APPLYCOUPONTOORDER,

    CHECKOUTCARD,
    CHECKOUTSAVEDCARD,
    CHECKOUTFREEMEAL,

    ADDRESSVALIDATE,
    DELIVERYADDRESS,

    GETALLOFFICES,
    CREATEOFFICE,
    GETOFFICE,
    INVITEOFFICE,

    GETALLGLOBALEXCEPTION,
    GETOPENTODAYEXCEPTION,
    
    SETCONTACTUSERINFO,
};

#endif


