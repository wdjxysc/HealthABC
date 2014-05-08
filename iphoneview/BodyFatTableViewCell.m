//
//  BodyFatTableViewCell.m
//  HealthABC
//
//  Created by 夏 伟 on 14-3-26.
//  Copyright (c) 2014年 夏 伟. All rights reserved.
//

#import "BodyFatTableViewCell.h"

@implementation BodyFatTableViewCell

- (void)awakeFromNib
{
    // Initialization code
    [_weightBtn setTitle:NSLocalizedString(@"USER_WEIGHT", nil)  forState:UIControlStateNormal];
    [_muscleBtn setTitle:NSLocalizedString(@"USER_MUSCLE", nil) forState:UIControlStateNormal];
    [_fatBtn setTitle:NSLocalizedString(@"USER_FAT", nil) forState:UIControlStateNormal];
    [_boneBtn setTitle:NSLocalizedString(@"USER_BONE", nil) forState:UIControlStateNormal];
    [_waterBtn setTitle:NSLocalizedString(@"USER_WEIGHT", nil) forState:UIControlStateNormal];
    [_bmrBtn setTitle:NSLocalizedString(@"USER_BMR", nil) forState:UIControlStateNormal];
    [_visFatBtn setTitle:NSLocalizedString(@"USER_VISFAT", nil) forState:UIControlStateNormal];
    [_bmiBtn setTitle:NSLocalizedString(@"USER_BMI", nil) forState:UIControlStateNormal];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
 
    // Configure the view for the selected state
}

@end
