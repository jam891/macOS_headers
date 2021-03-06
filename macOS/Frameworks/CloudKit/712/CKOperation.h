//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKOperationConfiguration, CKOperationGroup, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, CKPlaceholderOperation, CKTimeLogger, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, OS_os_transaction, OS_voucher;

@interface CKOperation : NSOperation
{
    NSObject<OS_os_transaction> *_isExecuting;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _isOutstandingOperation;
    BOOL _isFinished;
    BOOL _clouddConnectionInterrupted;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKOperationConfiguration *_resolvedConfiguration;
    CKOperationConfiguration *_configuration;
    CKOperationGroup *_group;
    NSString *_operationID;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _usesBackgroundSessionOverride;
    NSError *_cancelError;
    NSMutableArray *_savedRequestUUIDs;
    NSMutableDictionary *_savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary *_savedW3CNavigationTimingByRequestUUID;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKTimeLogger *_timeLogger;
    CKOperationMetrics *_metrics;
    CDUnknownBlockType _requestCompletedBlock;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    NSDictionary *_additionalRequestHTTPHeaders;
    NSString *_deviceIdentifier;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property(retain, nonatomic) id clientVoucher; // @synthesize clientVoucher=_clientVoucher;
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(retain, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property(retain, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) BOOL clouddConnectionInterrupted; // @synthesize clouddConnectionInterrupted=_clouddConnectionInterrupted;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain) CKPlaceholderOperation *placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property(retain, nonatomic) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID; // @synthesize savedW3CNavigationTimingByRequestUUID=_savedW3CNavigationTimingByRequestUUID;
@property(retain, nonatomic) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID; // @synthesize savedResponseHTTPHeadersByRequestUUID=_savedResponseHTTPHeadersByRequestUUID;
@property(retain, nonatomic) NSMutableArray *savedRequestUUIDs; // @synthesize savedRequestUUIDs=_savedRequestUUIDs;
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(nonatomic) BOOL isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property(nonatomic) long long usesBackgroundSessionOverride; // @synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock; // @synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) CKOperationGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) CKOperationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *w3cNavigationTimingByRequestUUID;
@property(readonly, nonatomic) NSDictionary *responseHTTPHeadersByRequestUUID;
@property(readonly, nonatomic) NSArray *requestUUIDs;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (void)setLongLived:(BOOL)arg1;
- (BOOL)isLongLived;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (BOOL)allowsCellularAccess;
- (void)setContainer:(id)arg1;
- (id)container;
- (BOOL)_wantsFlowControl;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
@property(readonly, nonatomic) CKOperationConfiguration *resolvedConfiguration; // @synthesize resolvedConfiguration=_resolvedConfiguration;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
@property(nonatomic) BOOL usesBackgroundSession;
- (id)daemon;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)processOperationResult:(id)arg1;
@property(nonatomic) BOOL isExecuting;
- (void)_setIsExecuting:(BOOL)arg1;
- (void)_setIsFinished:(BOOL)arg1;
- (id)_findBestThrottleError:(id)arg1;
- (void)_installTimeoutSource;
- (void)_uninstallTimeoutSource;
- (void)cancel;
- (void)cancelWithUnderlyingError:(id)arg1;
@property(readonly, nonatomic) CKOperationInfo *operationInfo;
- (Class)operationClass;
- (Class)operationInfoClass;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)isConcurrent;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (void)start;
- (void)_start;
- (id)activityCreate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)dealloc;
- (id)init;

@end

