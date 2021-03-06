//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaIO/CMIOServerProtocol-Protocol.h>

@class NSConnection, NSOperationQueue;
@protocol CMIOClientProtocol;

__attribute__((visibility("hidden")))
@interface CMIOGraphService : NSObject <CMIOServerProtocol>
{
    struct OpaqueCMIOGraph *graph;
    NSConnection *connection;
    id <CMIOClientProtocol> remoteClient;
    NSOperationQueue *operationQueue;
}

- (void)stopMonitoring;
- (void)connectionDidDie:(id)arg1;
- (oneway void)setMonitoring:(in bycopy unsigned int)arg1 forNodes:(in bycopy id)arg2;
- (oneway void)setMonitoringForAllNodes:(in bycopy unsigned int)arg1;
- (oneway void)graphGetXMLRepresentation;
- (oneway void)graphGetConnectionCount;
- (oneway void)graphGetNodeCount;
- (oneway void)initiateConnectionWithClient:(in byref id)arg1;
- (void)setConnection:(id)arg1;
- (id)client;
- (void)cleanup;
- (void)dealloc;
- (id)initWithGraph:(struct OpaqueCMIOGraph *)arg1;

@end

