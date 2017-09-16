//
//  SCUser.h
//  SocialProject
//
//  Created by Zengyang Wu on 8/25/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end
