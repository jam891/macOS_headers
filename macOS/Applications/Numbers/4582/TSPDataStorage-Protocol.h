//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAsset, NSData, NSDictionary, NSProgress, NSString, NSURL, TSPData, TSPDataStorageWriteResult, TSPPackage, TSPPackageWriter, TSUColor;
@protocol TSPCryptoInfo, TSPDataArchiver, TSPMutableCryptoInfo;

@protocol TSPDataStorage <NSObject>
@property(readonly, nonatomic) BOOL readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) BOOL isMissingData;
@property(readonly, nonatomic) BOOL isReadable;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (void)performIOChannelReadWithAccessor:(void (^)(id <TSUReadChannel>))arg1;
- (BOOL)isInPackage:(TSPPackage *)arg1;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (TSPDataStorageWriteResult *)writeData:(TSPData *)arg1 toPackageWriter:(TSPPackageWriter *)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(NSString *)arg4;
- (BOOL)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id <TSPDataArchiver>)arg2 packageWriter:(TSPPackageWriter *)arg3;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 forData:(TSPData *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;

@optional
@property(readonly, nonatomic) TSUColor *fallbackColor;
@property(readonly, nonatomic) unsigned int CRC;
@property(readonly, nonatomic) id <TSPCryptoInfo> decryptionInfo;
@property(readonly, nonatomic) int downloadRetrials;
@property(readonly) NSProgress *downloadProgress;
@property(readonly, nonatomic) BOOL needsDownload;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(void (^)(NSURL *))arg1;
- (void)addDownloadObserver:(id)arg1 forData:(TSPData *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(id, TSPData *, long long, NSDictionary *))arg4;
- (void)willRetryDownloadForData:(TSPData *)arg1;
- (void)retryDownloadForData:(TSPData *)arg1;
- (void)didFinishDownload;
- (void)willBeginDownloadForData:(TSPData *)arg1 withProgress:(NSProgress *)arg2;
- (void)setIsMissingData:(BOOL)arg1;
- (BOOL)copyToTemporaryURL:(NSURL *)arg1 encryptionInfo:(id <TSPMutableCryptoInfo>)arg2;
- (id)storageForDataCopyFromOtherContext;
- (void)didInitializeFromDocumentURL:(NSURL *)arg1;
@end

