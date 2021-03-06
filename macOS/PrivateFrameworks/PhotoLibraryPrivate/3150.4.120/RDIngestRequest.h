//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, RDIngestAsset, RDVersion;

@interface RDIngestRequest : NSObject
{
    unsigned short _importedByType;
    RDVersion *sourceVersion;
    NSString *_uuid;
    RDIngestAsset *_masterAsset;
    RDIngestAsset *_renderedAsset;
    RDIngestAsset *_thumbnailAsset;
    RDIngestAsset *_miniThumbnailAsset;
    RDIngestAsset *_videoComplementAsset;
    NSDictionary *_metadataProperties;
    NSDictionary *_userInfo;
    long long _options;
}

@property unsigned short importedByType; // @synthesize importedByType=_importedByType;
@property(readonly) long long options; // @synthesize options=_options;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSDictionary *metadataProperties; // @synthesize metadataProperties=_metadataProperties;
@property(readonly) RDIngestAsset *videoComplementAsset; // @synthesize videoComplementAsset=_videoComplementAsset;
@property(readonly) RDIngestAsset *miniThumbnailAsset; // @synthesize miniThumbnailAsset=_miniThumbnailAsset;
@property(readonly) RDIngestAsset *thumbnailAsset; // @synthesize thumbnailAsset=_thumbnailAsset;
@property(readonly) RDIngestAsset *renderedAsset; // @synthesize renderedAsset=_renderedAsset;
@property(readonly) RDIngestAsset *masterAsset; // @synthesize masterAsset=_masterAsset;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) RDVersion *sourceVersion; // @synthesize sourceVersion;
- (void).cxx_destruct;
- (BOOL)isOptionSet:(long long)arg1;
- (id)initWithUuid:(id)arg1 masterAsset:(id)arg2 renderedAsset:(id)arg3 thumbnailAsset:(id)arg4 miniThumbnailAsset:(id)arg5 videoComplement:(id)arg6 metadataProperties:(id)arg7 userInfo:(id)arg8 options:(long long)arg9 importedByType:(unsigned short)arg10;

@end

