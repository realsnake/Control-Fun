//
//  ViewController.h
//  Control Fun
//
//  Created by snake on 11-11-30.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIActionSheetDelegate>
{
    UITextField *nameField;
    UITextField *numberField;
    UILabel     *sliderLabel;
    UISwitch    *leftSwitch;
    UISwitch    *rightSwitch;
    UIButton    *doSomethingButton;
}

@property (retain, nonatomic) IBOutlet UITextField *nameField;
@property (retain, nonatomic) IBOutlet UITextField *numberField;
@property (retain, nonatomic) IBOutlet UILabel *sliderLabel;
@property (retain, nonatomic) IBOutlet UISwitch *leftSwitch;
@property (retain, nonatomic) IBOutlet UISwitch *rightSwitch;
@property (retain, nonatomic) IBOutlet UIButton *doSomethingButton;

-(IBAction)textFieldDoneEditing:(id)sender;
-(IBAction)backgroundTap:(id)sender;
-(IBAction)sliderChanged:(id)sender;
-(IBAction)switchChanged:(id)sender;
-(IBAction)taggleControls:(id)sender;
-(IBAction)buttonPressed:(id)sender;

@end
