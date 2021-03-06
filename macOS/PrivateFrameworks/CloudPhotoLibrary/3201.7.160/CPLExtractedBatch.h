//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLChangeBatch, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableIdentifiers;
    NSMutableSet *_mutableUntrustableIndentifiers;
    BOOL _full;
    BOOL _batchCanLowerQuota;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
@property(readonly, nonatomic) BOOL batchCanLowerQuota; // @synthesize batchCanLowerQuota=_batchCanLowerQuota;
@property(nonatomic, getter=isFull) BOOL full; // @synthesize full=_full;
@property(readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (void).cxx_destruct;
- (id)uploadIdentifiers;
- (void)addChange:(id)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

