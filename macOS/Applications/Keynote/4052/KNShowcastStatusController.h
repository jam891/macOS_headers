//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePresenter-Protocol.h"

@class KNShowcastParticipantMonitor, KNShowcastServiceReachabilityMonitor, NSMutableArray, NSOperationQueue, NSString, NSURL, TSKCloudKitMetadataController, TSKICloudHTTPRequestSenderFactory, TSUNetworkReachability;

@interface KNShowcastStatusController : NSObject <NSFilePresenter>
{
    NSMutableArray *_statusCompletionHandlers;
    BOOL _isDocumentURLUbiquitous;
    BOOL _isApplicationTooOld;
    BOOL _isRunning;
    BOOL _isShowcastEnabled;
    BOOL _hasPassword;
    NSURL *_documentURL;
    NSOperationQueue *_presentedItemOperationQueue;
    long long _status;
    NSString *_showcastToken;
    NSURL *_showcastURL;
    TSKICloudHTTPRequestSenderFactory *_requestSenderFactory;
    TSKCloudKitMetadataController *_metadataController;
    KNShowcastServiceReachabilityMonitor *_reachabilityMonitor;
    id _reachabilityObserver;
    TSUNetworkReachability *_networkReachability;
    long long _cancelToken;
    KNShowcastParticipantMonitor *_participantMonitor;
}

+ (id)keyPathsForValuesAffectingViewerCount;
@property(retain, nonatomic) KNShowcastParticipantMonitor *participantMonitor; // @synthesize participantMonitor=_participantMonitor;
@property(nonatomic) long long cancelToken; // @synthesize cancelToken=_cancelToken;
@property(retain, nonatomic) TSUNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) id reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(retain, nonatomic) KNShowcastServiceReachabilityMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(retain, nonatomic) TSKCloudKitMetadataController *metadataController; // @synthesize metadataController=_metadataController;
@property(retain, nonatomic) TSKICloudHTTPRequestSenderFactory *requestSenderFactory; // @synthesize requestSenderFactory=_requestSenderFactory;
@property(nonatomic) BOOL hasPassword; // @synthesize hasPassword=_hasPassword;
@property(nonatomic) BOOL isShowcastEnabled; // @synthesize isShowcastEnabled=_isShowcastEnabled;
@property(copy, nonatomic) NSURL *showcastURL; // @synthesize showcastURL=_showcastURL;
@property(copy, nonatomic) NSString *showcastToken; // @synthesize showcastToken=_showcastToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(copy) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void)p_getDocumentURLUsingBlock:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)setPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)p_setShowcastEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableShowcastWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableShowcastWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)verifyFileSizeForShowcastingDocumentAtURL:(id)arg1 playing:(BOOL)arg2;
- (void)p_stopUpdatingViewerCount;
- (void)p_startUpdatingViewerCount;
@property(readonly, nonatomic) unsigned long long viewerCount;
- (void)p_removeReachabilityObserver;
- (void)p_addReachabilityObserver;
- (void)p_makeNetworkReachabilityIfNeeded;
- (void)cancel;
- (void)p_loadingDidFinishWithError:(id)arg1;
- (void)p_didGoOffline;
- (void)p_updateCloudKitMetadataUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)p_updateStatusFromCloudKitMetadata:(id)arg1;
- (id)p_errorWithUnderlyingError:(id)arg1 didCancel:(out char *)arg2;
- (void)p_loadShowcastTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_makeRequestSenderFactoryIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_checkApplicationVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_loadStatus;
- (void)refreshStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)startWithDocumentURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

