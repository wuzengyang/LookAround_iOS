//
//  SCHomeViewController.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/22/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end
