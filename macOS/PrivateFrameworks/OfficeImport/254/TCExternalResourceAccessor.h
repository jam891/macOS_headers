//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface TCExternalResourceAccessor : NSObject
{
    NSURL *mDocumentURL;
    NSString *mExtractorServiceName;
    NSArray *mExternalResourceURLs;
    NSDictionary *mAccessErrorsForExternalResourceURLs;
    NSError *mError;
    NSObject<OS_dispatch_queue> *mAccessorQueue;
    NSObject<OS_xpc_object> *mAccessorConnection;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) NSArray *externalResourceURLs; // @synthesize externalResourceURLs=mExternalResourceURLs;
- (BOOL)couldAccessExternalResourceURL:(id)arg1 error:(out id *)arg2;
- (id)p_localizedErrorWithError:(id)arg1 forURL:(id)arg2;
- (void)p_finishAccessingExternalResourcesWithExternalResourceURLs:(id)arg1 accessErrorsForExternalResourceURLs:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accessExternalResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1 extractorServiceName:(id)arg2;

@end

