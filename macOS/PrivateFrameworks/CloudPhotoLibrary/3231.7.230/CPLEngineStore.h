//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineChangePipe, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineOutgoingResources, CPLEnginePushRepository, CPLEngineQuarantinedRecords, CPLEngineRemappedDeletes, CPLEngineResourceDownloadQueue, CPLEngineResourceStorage, CPLEngineStatusCenter, CPLEngineTransientRepository, CPLPlatformObject, CPLResetTracker, NSArray, NSDate, NSHashTable, NSMutableArray, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    NSHashTable *_storages;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    NSMutableArray *_batchedTransactions;
    BOOL _batchedTransactionDequeueIsScheduled;
    BOOL _dontDelayChangeSessionUpdate;
    NSURL *_resetEventsURL;
    NSMutableArray *_resetEvents;
    CPLResetTracker *_pendingTracker;
    NSSet *_lastInvalidRecordIdentifiers;
    NSDate *_lastInvalidRecordsDate;
    NSObject<OS_dispatch_source> *_pendingUpdateTimer;
    NSObject<OS_dispatch_queue> *_pendingUpdateQueue;
    double _pendingUpdateInterval;
    BOOL _unschedulePendingUpdateApplyOnWriteSuccess;
    BOOL _schedulePendingUpdateApplyOnWriteSuccess;
    BOOL _supportedFeatureVersionIsMostRecent;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineIDMapping *_idMapping;
    CPLEngineClientCache *_clientCache;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineResourceStorage *_resourceStorage;
    CPLEngineResourceDownloadQueue *_downloadQueue;
    CPLEngineOutgoingResources *_outgoingResources;
    CPLEngineRemappedDeletes *_remappedDeletes;
    CPLEngineQuarantinedRecords *_quarantinedRecords;
    CPLEngineStatusCenter *_statusCenter;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL supportedFeatureVersionIsMostRecent; // @synthesize supportedFeatureVersionIsMostRecent=_supportedFeatureVersionIsMostRecent;
@property(readonly, nonatomic) CPLEngineStatusCenter *statusCenter; // @synthesize statusCenter=_statusCenter;
@property(readonly, nonatomic) CPLEngineQuarantinedRecords *quarantinedRecords; // @synthesize quarantinedRecords=_quarantinedRecords;
@property(readonly, nonatomic) CPLEngineRemappedDeletes *remappedDeletes; // @synthesize remappedDeletes=_remappedDeletes;
@property(readonly, nonatomic) CPLEngineOutgoingResources *outgoingResources; // @synthesize outgoingResources=_outgoingResources;
@property(readonly, nonatomic) CPLEngineResourceDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(readonly, nonatomic) CPLEngineResourceStorage *resourceStorage; // @synthesize resourceStorage=_resourceStorage;
@property(readonly, nonatomic) CPLEngineTransientRepository *transientPullRepository; // @synthesize transientPullRepository=_transientPullRepository;
@property(readonly, nonatomic) CPLEngineCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(readonly, nonatomic) CPLEngineClientCache *clientCache; // @synthesize clientCache=_clientCache;
@property(readonly, nonatomic) CPLEngineIDMapping *idMapping; // @synthesize idMapping=_idMapping;
@property(readonly, nonatomic) CPLEngineChangePipe *pullQueue; // @synthesize pullQueue=_pullQueue;
@property(readonly, nonatomic) CPLEnginePushRepository *pushRepository; // @synthesize pushRepository=_pushRepository;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)assertCanRead;
- (void)assertCanWrite;
- (BOOL)_canWrite;
- (BOOL)_canRead;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (id)_currentTransaction;
@property(readonly, copy) NSString *description;
- (BOOL)checkExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (BOOL)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (BOOL)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id *)arg4;
- (BOOL)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;
- (void)_unschedulePendingUpdateApply;
- (void)_schedulePendingUpdateApply;
- (void)_reallyUnschedulePendingUpdateApply;
- (void)_reallySchedulePendingUpdateApply;
- (BOOL)_applyPendingUpdate:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) id corruptionInfo;
@property(readonly) NSDate *libraryCreationDate;
- (BOOL)isClientInSyncWithClientCache;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (id)clientCacheIdentifier;
- (BOOL)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;
- (id)lastQuarantineCountReportDate;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)supportedFeatureVersionInLastSync;
- (BOOL)storeLibraryZoneName:(id)arg1 error:(id *)arg2;
- (id)libraryZoneName;
- (BOOL)storeUserIdentifier:(id)arg1 error:(id *)arg2;
- (id)userIdentifier;
@property(readonly, nonatomic) BOOL pushRepositoryIsFull;
- (id)createNewLibraryVersion;
- (id)libraryVersion;
- (BOOL)storeLibraryVersion:(id)arg1 withError:(id *)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBatchedWriteTransactionBarrier;
- (void)performBatchedWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_scheduleBatchedTransactionsLocked;
- (id)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (id)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)noteInvalidRecordIdentifiersInPushSession:(id)arg1;
- (void)noteOtherResetEvent:(id)arg1 cause:(id)arg2;
- (BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id *)arg2;
- (BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (id)_resetEventsDescriptions;
- (void)noteResetSyncFinished;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 cause:(id)arg3;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 pending:(BOOL)arg3 cause:(id)arg4;
- (void)_loadResetEvents;
- (BOOL)_resetLocalSyncStateWithError:(id *)arg1;
- (void)registerStorage:(id)arg1;
@property(readonly, nonatomic) NSArray *storages;
- (void)dealloc;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

