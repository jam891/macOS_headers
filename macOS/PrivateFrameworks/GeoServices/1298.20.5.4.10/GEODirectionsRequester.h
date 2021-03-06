//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject
{
    id <_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)finalizeRequest:(id)arg1;
- (id)init;

@end

