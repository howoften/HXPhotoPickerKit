//
//  LLViewController.m
//  HXPhotoPickerKit
//
//  Created by howoften on 11/07/2024.
//  Copyright (c) 2024 howoften. All rights reserved.
//

#import "LLViewController.h"
#import <HXPhotoPicker/HXPhotoPicker.h>

@interface LLViewController ()

@end

@implementation LLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    HXPhotoManager *mgr = [HXPhotoManager managerWithType:0];
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
