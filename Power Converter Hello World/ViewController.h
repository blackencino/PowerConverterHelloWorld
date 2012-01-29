//
//  ViewController.h
//  Power Converter Hello World
//
//  Created by Christopher Horvath on 1/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate> {
    
    NSString *userName;
}

@property (nonatomic, copy) NSString *userName;

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)changeGreeting:(id)sender;

@end
