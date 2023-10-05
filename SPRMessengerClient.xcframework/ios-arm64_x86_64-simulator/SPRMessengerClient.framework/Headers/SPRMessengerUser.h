//
//  SPRMessengerUser.m
//  SprMessengerClient
//
//  Created by Nikhil Tekwani on 19/12/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SPRMessengerUser : NSObject

@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *profileImageUrl;
@property (nonatomic, strong) NSString *phoneNo;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *hashValue;

@end
