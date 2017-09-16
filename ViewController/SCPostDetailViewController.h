//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/25/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
