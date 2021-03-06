//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>
{
}

@property(readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)resetWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long countOfOriginalOthers;
@property(readonly, nonatomic) unsigned long long countOfOriginalVideos;
@property(readonly, nonatomic) unsigned long long countOfOriginalImages;
- (BOOL)shouldUploadResource:(id)arg1;
- (id)resourceTypesToUploadForUploadIdentifier:(id)arg1;
- (BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

