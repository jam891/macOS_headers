//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCEvent;
@protocol NSObject><SCEventListenerProtocol, OS_dispatch_queue;

@interface SCEvents : NSObject
{
    struct __CFRunLoop *_runLoop;
    struct __FSEventStream *_eventStream;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    BOOL _isWatchingPaths;
    BOOL _ignoreEventsFromSubDirs;
    id <NSObject><SCEventListenerProtocol> _delegate;
    SCEvent *_lastEvent;
    double _notificationLatency;
    NSArray *_watchedPaths;
    NSArray *_excludedPaths;
    unsigned long long _resumeFromEventId;
}

@property unsigned long long resumeFromEventId; // @synthesize resumeFromEventId=_resumeFromEventId;
@property(copy) NSArray *excludedPaths; // @synthesize excludedPaths=_excludedPaths;
@property(copy) NSArray *watchedPaths; // @synthesize watchedPaths=_watchedPaths;
@property double notificationLatency; // @synthesize notificationLatency=_notificationLatency;
@property(retain) SCEvent *lastEvent; // @synthesize lastEvent=_lastEvent;
@property BOOL ignoreEventsFromSubDirs; // @synthesize ignoreEventsFromSubDirs=_ignoreEventsFromSubDirs;
@property(readonly) BOOL isWatchingPaths; // @synthesize isWatchingPaths=_isWatchingPaths;
@property __weak id <NSObject><SCEventListenerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)streamDescription;
- (BOOL)stopWatchingPaths;
- (BOOL)startWatchingPaths:(id)arg1 onRunLoop:(id)arg2;
- (BOOL)startWatchingPaths:(id)arg1;
- (BOOL)flushEventStreamAsync;
- (BOOL)flushEventStreamSync;
- (id)init;

@end

