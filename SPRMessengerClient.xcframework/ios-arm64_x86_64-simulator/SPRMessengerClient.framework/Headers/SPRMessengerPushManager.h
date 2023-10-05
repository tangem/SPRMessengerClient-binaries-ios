//
//  SPRMessengerPushManager.h
//  SprMessengerClient
//
//  Created by Nikhil Tekwani on 07/11/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const SPRBadgeNumberDidUpdate;

@interface SPRMessengerPushManager : NSObject

@property (nonatomic, strong) NSString *registrationToken;
@property (nonatomic, assign) BOOL pushEnabled; /* default value is YES*/

- (void)updateRegistration;

- (void)setRegistrationToken: (NSString *)registrationToken;

- (BOOL)canHandlePushEvent: (NSDictionary *)userInfo;

- (void)handlePushEvent: (NSDictionary *)userInfo;

- (void)fetchBadgeNumber:(void (^)(NSInteger *badgeNumber, NSError *error))completionHandler;

- (void)resetBadge;

@end
