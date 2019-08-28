//
//  AWViewController.m
//  YWDemoTools
//
//  Created by Tioks on 08/28/2019.
//  Copyright (c) 2019 Tioks. All rights reserved.
//

#import "AWViewController.h"
#import <AWCheckTool.h>

@interface AWViewController ()

@end

@implementation AWViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *str = @"aaa";
    
    if ([AWCheckTool isEmpty:str]) {
        NSLog(@"empty");
    } else {
        NSLog(@"not empty");
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
