#import <Foundation/Foundation.h>

@interface SPRMessengerUnreadMessagesCountResponse : NSObject

@property (nonatomic, assign) BOOL success;
@property (nonatomic, strong) NSNumber *unreadMessagesCount;
@property (nonatomic, strong) NSError *error;

@end
