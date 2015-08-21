//
//  ViewController.m
//  SobotDemo
//
//  Created by 张新耀 on 15/8/19.
//  Copyright (c) 2015年 com.sobot.demo. All rights reserved.
//

#import "ViewController.h"
#import <SobotSDK/SobotSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    FTest *test=[FTest shareFTest];
    NSString *hhh=[test printString:@"nil ma"];
    NSLog(@"%@",hhh);
    
    [self.navigationController setNavigationBarHidden:YES];
    
    
    UIGestureRecognizer *tap=[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(didTapAnywhere:)];
    [self.view addGestureRecognizer:tap];
    
    NSString *Pre_Text=[[NSUserDefaults standardUserDefaults] valueForKey:@"Pre_Text"];
    if(Pre_Text!=nil){
        _textField.text=Pre_Text;
    }
}

-(IBAction)button:(UIButton *)sender{
    NSLog(@"%@",[SobotInit getVersion]);
    UIColor *color=nil;
    
    NSString *sysNumber=@"";
    if(sender.tag==1){
        sysNumber=@"df60ea2a8fa74440aacd687cb2de62f8";
        color=[UIColor colorWithRed:255.0/255.0 green:173.0/255.0 blue:1.0/255.0 alpha:1];
    }
    if(sender.tag==2){
        color=[UIColor redColor];
        sysNumber=@"110503e69ee94101a31f692a554c6e32";
    }
    
    if(sender.tag==3){
        sysNumber=_textField.text;
        
        [[NSUserDefaults standardUserDefaults] setObject:sysNumber forKey:@"Pre_Text"];
        
        if(sysNumber.length < 5 ){
            return;
        }
    }
    
    [SobotInit showSobot:sysNumber withController:self customColor:color];
}



//屏幕点击事件
- (void)didTapAnywhere:(UITapGestureRecognizer *)recognizer {
    [_textField resignFirstResponder];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
