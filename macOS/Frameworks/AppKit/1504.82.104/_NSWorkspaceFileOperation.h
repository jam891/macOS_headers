//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface _NSWorkspaceFileOperation : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSLock *lock;
    NSMutableArray *remainingURLs;
    struct __CFArray *operationRefs;
    NSMutableDictionary *urlsToNewURLs;
    NSMutableDictionary *urlsToErrors;
    NSMutableDictionary *urlToLastTriedName;
    NSMutableSet *urlsOnVolumesWithoutTrash;
    CDUnknownBlockType completionHandler;
    long long whichOperation;
    unsigned long long successfulFileCount;
}

@property(readonly) long long whichOperation; // @synthesize whichOperation;
- (void)dealloc;
- (void)operationRefDidComplete:(struct __FSFileOperation *)arg1 newPath:(const char *)arg2 error:(int)arg3 status:(struct __CFDictionary *)arg4;
- (void)operationRef:(struct __FSFileOperation *)arg1 didHaveImmediateError:(int)arg2;
- (void)operationCompleted;
- (void)handleDeletionOfURLsOnVolumesWithoutTrash;
- (void)doSomething:(id)arg1;
- (void)operationRefsDidFinish;
- (void)updateOperationRef:(struct __FSFileOperation *)arg1 newPath:(const char *)arg2 error:(int)arg3 status:(struct __CFDictionary *)arg4;
- (id)copyError;
- (void)start;
- (id)initWithQueue:(id)arg1 URLs:(id)arg2 operation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)retryOperationRefWithNextName:(struct __FSFileOperation *)arg1;
- (void)makeOperationRefs;
- (void)scheduleOperationRef:(struct __FSFileOperation *)arg1 forURL:(id)arg2;
- (id)copyNextPathToTryForURL:(id)arg1;

@end

