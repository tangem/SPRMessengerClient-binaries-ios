//
//  SPRMessengerConfig.h
//  SprMessengerClient
//
//  Created by Sprinklr on 16/08/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPRMessengerUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPRMessengerConfig : NSObject

@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, strong) NSString *environment;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) SPRMessengerUser *user;
@property (nonatomic, strong) NSString *pushAppId;
@property (nonatomic, strong) NSString *deviceId;
@property (nonatomic, strong) NSString *locale;
@property (nonatomic, strong) NSDictionary *clientContext;
@property (nonatomic, strong) NSString *skin;

@end

NS_ASSUME_NONNULL_END
