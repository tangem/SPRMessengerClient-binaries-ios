//
//  SPRMessenger.h
//  SprMessengerClient
//
//  Created by Sprinklr on 16/08/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPRMessengerConfig.h"
#import "SPRMessengerPushManager.h"
#import "SPRUnreadMessagesCountResponse.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SPRMessengerDelegate <NSObject>

- (void) handleExternalAction:(NSDictionary *)payload;
- (void) onUpdateNumberOfOpenConversations:(NSNumber *)count;
- (void) onUpdateUnreadMessagesCount:(SPRMessengerUnreadMessagesCountResponse *) response;

@end

@interface SPRMessenger : NSObject

@property (nonatomic, weak) id <SPRMessengerDelegate> delegate;

+ (void)takeOff:(SPRMessengerConfig *)config;

+ (SPRMessenger *)shared;

+ (SPRMessengerPushManager *)pushManager NS_EXTENSION_UNAVAILABLE_IOS("");

- (void)updateUser:(SPRMessengerUser *)user;

- (void)updateLocale:(NSString *)currentLocale;

- (void)updateClientContext:(NSDictionary *)clientContext;

- (void)updateConversationContext:(NSDictionary *)conversationContext;

- (void)updateUserContext:(NSDictionary *)userContext;

- (void)getUnreadMessagesCount;

- (void)logout;

- (void)getNumberOfOpenConversations;

- (void)closeMessenger;

@end

NS_ASSUME_NONNULL_END
