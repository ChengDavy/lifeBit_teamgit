//
//  endDataTableViewCell.h
//  lifeBit_teach
//
//  Created by 程党威 on 2017/11/9.
//  Copyright © 2017年 WilliamYan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface endDataTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *watchName;
@property (weak, nonatomic) IBOutlet UILabel *mac;
@property (weak, nonatomic) IBOutlet UILabel *MyRSSI;
@property (weak, nonatomic) IBOutlet UILabel *conType;
@property (weak, nonatomic) IBOutlet UIButton *conButton;
@property (weak, nonatomic) IBOutlet UIButton *exChange;

@end
