//
//  TermsViewController.h
//  Foodsby
//
//  Created by ShangWang Zhang on 10/11/16.
//  Copyright (c) 2016 ShangWang Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TermsViewController : UIViewController <UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UIWebView *webViewTermsAndConditions;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *indicatorView;

@property (nonatomic) NSURL *           urlTerms;

@end
