//
//  Dog.m
//  SocialProject
//
//  Created by Zengyang Wu on 8/21/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import "Dog.h"

@implementation Dog

- (instancetype) initWithName:(NSString *)name
{
    self = [super init];
    if (self) {
        self.name = name;
    }
    return self;
}

- (void) run
{
    [super run];
    NSLog(@"%@ is running...", self.name);
}

@end
