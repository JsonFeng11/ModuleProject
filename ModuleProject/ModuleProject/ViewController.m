//
//  ViewController.m
//  ModuleProject
//
//  Created by fdd on 17/1/2.
//  Copyright © 2017年 fdd. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSMutableArray *dataSource;
@end

@implementation ViewController
#pragma mark - life cycle
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
#pragma mark - setters and getters
- (NSMutableArray *)dataSource {
    if (!_dataSource) {
        _dataSource = [NSMutableArray arrayWithObjects:@"", @"", @"", @"", @"", nil];
    }
    return _dataSource;
}

@end
