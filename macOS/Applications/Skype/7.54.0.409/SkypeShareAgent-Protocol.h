//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SkypeShareAgent <NSObject>
- (void)stopAgentWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)startProcessingPendingTasksForSkypeName:(NSString *)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
- (void)verifyCurrentSkypeName:(NSString *)arg1 withReply:(void (^)(NSString *, NSError *))arg2;
- (void)addShareTasks:(NSArray *)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
@end

