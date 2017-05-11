//
//  ViewController.m
//  BQCardAnimation
//
//  Created by wbq on 17/5/4.
//  Copyright © 2017年 汪炳权. All rights reserved.
//

#import "ViewController.h"
#import "Define.h"
#import "BQDragCardView.h"




@interface ViewController ()




@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    [BQDragCardView addCardViewWithSuperView:self.view];
    
    
}






@end
