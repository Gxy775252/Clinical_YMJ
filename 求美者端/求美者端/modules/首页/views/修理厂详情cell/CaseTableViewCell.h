//
//  CaseTableViewCell.h
//  求美者端
//
//  Created by apple on 2016/11/26.
//  Copyright © 2016年 AnYanbo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetDoctorDetailsInfo.h"

@interface CaseTableViewCell : UITableViewCell

+ (CGFloat)height;

- (void)setupWithCaseInfo:(GetCaseListListInfo*)info;

@end
