//
//  BodyFatTableViewCell.h
//  HealthABC
//
//  Created by 夏 伟 on 14-3-26.
//  Copyright (c) 2014年 夏 伟. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BodyFatTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *weightDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *muscleDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *boneDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *kcalDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *bodyfatDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *waterDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *visfatDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *bmiDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *testtimeDataLabel;
@property (weak, nonatomic) IBOutlet UIButton *weightBtn;
@property (weak, nonatomic) IBOutlet UIButton *muscleBtn;
@property (weak, nonatomic) IBOutlet UIButton *fatBtn;
@property (weak, nonatomic) IBOutlet UIButton *boneBtn;
@property (weak, nonatomic) IBOutlet UIButton *waterBtn;
@property (weak, nonatomic) IBOutlet UIButton *bmrBtn;
@property (weak, nonatomic) IBOutlet UIButton *visFatBtn;
@property (weak, nonatomic) IBOutlet UIButton *bmiBtn;

@end
