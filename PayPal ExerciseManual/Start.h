//
//  ViewController.h
//  PayPal ExerciseManual
//
//  Created by Francisco Javier Trujillo Lopez on 11/01/16.
//  Copyright © 2016 FZagato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPayPressed:(id)sender;

@end

