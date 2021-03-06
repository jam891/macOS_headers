//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLCloudKitFeatureVersionHistory : PBCodable <NSCopying>
{
    NSMutableArray *_featureVersions;
}

@property(retain, nonatomic) NSMutableArray *featureVersions; // @synthesize featureVersions=_featureVersions;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)featureVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureVersionsCount;
- (void)addFeatureVersion:(id)arg1;
- (void)clearFeatureVersions;

@end

