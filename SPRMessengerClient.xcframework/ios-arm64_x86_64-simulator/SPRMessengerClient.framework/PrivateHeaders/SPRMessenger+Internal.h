//
//  SPRMessenger.h
//  SprMessengerClient
//
//  Created by Sprinklr on 16/08/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import "SPRMessenger.h"
#import <React/RCTBridge.h>

@interface SPRMessenger ()

@property (nonatomic, strong) RCTBridge *bridge;
@property (nonatomic, strong) SPRMessengerConfig *config;
@property (nonatomic, strong) SPRMessengerPushManager *pushManager;

@property (nonatomic, strong) SPRMessengerUser *user;
@property (nonatomic, strong) NSString *currentLocale;

//+ (NSString *)appBundleVersion;
//+ (NSInteger)appVersionNumber;

- (NSDictionary *)getUserJson;
- (NSDictionary *)getClientContextJson;

@end
