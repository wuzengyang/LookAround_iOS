//
//  SCCreatePostViewController.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/25/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end
