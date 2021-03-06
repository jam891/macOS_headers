//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DDThreadManager, NSArray, NSString;
@protocol DDOperationDelegate;

__attribute__((visibility("hidden")))
@interface DDOperation : NSOperation
{
    id <DDOperationDelegate> _delegate;
    DDThreadManager *_threadManager;
    struct __DDScanQuery *_query;
    NSString *_scannedTextID;
    id _viewOrController;
    NSArray *_results;
    int _tag;
    int _failuresCount;
}

@property int failuresCount; // @synthesize failuresCount=_failuresCount;
@property int tag; // @synthesize tag=_tag;
@property(retain) NSArray *results; // @synthesize results=_results;
@property id viewOrController; // @synthesize viewOrController=_viewOrController;
@property(copy) NSString *scannedTextID; // @synthesize scannedTextID=_scannedTextID;
- (void)cancel;
- (void)scan;
- (void)_scanDone;
- (void)postOperationCleanUp;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setScanQuery:(struct __DDScanQuery *)arg1;
- (struct __DDScanQuery *)scanQuery;
- (id)initWithStringToScan:(id)arg1 threadManager:(id)arg2;
- (id)initWithQuery:(struct __DDScanQuery *)arg1 threadManager:(id)arg2;
- (id)init;

@end

