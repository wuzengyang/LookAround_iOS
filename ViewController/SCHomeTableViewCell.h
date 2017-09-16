//
//  SCHomeTableViewCell.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/22/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end

