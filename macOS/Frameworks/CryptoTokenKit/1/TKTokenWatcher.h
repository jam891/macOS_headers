//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher>
{
    NSXPCConnection *_connection;
    NSMutableArray *_tokenIDs;
    NSMutableDictionary *_removalHandlers;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _insertionHandler;
}

@property(readonly) NSArray *tokenIDs; // @synthesize tokenIDs=_tokenIDs;
- (void).cxx_destruct;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addRemovalHandler:(CDUnknownBlockType)arg1 forTokenID:(id)arg2;
- (void)setup;
- (id)initWithInsertionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

