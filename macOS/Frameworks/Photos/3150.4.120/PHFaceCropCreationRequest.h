//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHFaceCropChangeRequest.h>

@class PHObjectPlaceholder, RDFaceCrop;

@interface PHFaceCropCreationRequest : PHFaceCropChangeRequest
{
    PHObjectPlaceholder *_placeHolder;
    RDFaceCrop *_createdFaceCrop;
}

- (void).cxx_destruct;
- (id)placeholderForCreatedObject;
- (id)mutableModel;
- (id)model;
- (id)localIdentifier;
- (id)initWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personId:(long long)arg3 userConfirmedForPerson:(BOOL)arg4;

@end

