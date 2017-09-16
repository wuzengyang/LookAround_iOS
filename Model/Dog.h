//
//  Dog.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/21/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Animal.h"

@interface Dog : Animal

@property (nonatomic, strong) NSString *name;

- (instancetype) initWithName : (NSString *) name;

@end
