//
//  SPRMessengerViewController.h
//  SprMessengerClient
//
//  Created by Sprinklr on 28/08/19.
//  Copyright © 2019 Sprinklr. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const SPRMessengerViewPresented;
extern NSString *const SPRMessengerViewDismissed;

@interface SPRMessengerViewController : UIViewController

- (instancetype)initWithLaunchOptions:(NSDictionary *)launchOptions;

- (instancetype)initWithLaunchOptions:(NSDictionary *)launchOptions andChatInitialisationContext: (NSDictionary *)chatInitialisationContext;

@end
