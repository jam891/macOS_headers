//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSADocumentAlternateContents.h"

#import "NSDocumentAlternateContents-Protocol.h"

@class NSError, NSString, NSURL;

@interface TMADocumentAlternateContents : TSADocumentAlternateContents <NSDocumentAlternateContents>
{
    BOOL _didDisplayDetachedUIDuringOpen;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL didDisplayDetachedUIDuringOpen; // @synthesize didDisplayDetachedUIDuringOpen=_didDisplayDetachedUIDuringOpen;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 supportURL:(id)arg2 uniqueCacheIdentifier:(struct NSUUID *)arg3 sharingState:(id)arg4 collaborationContext:(id)arg5 didDisplayDetachedUIDuringOpen:(BOOL)arg6 error:(id)arg7;
- (id)initWithURL:(id)arg1 supportURL:(id)arg2 uniqueCacheIdentifier:(struct NSUUID *)arg3 sharingState:(id)arg4 collaborationContext:(id)arg5 didDisplayDetachedUIDuringOpen:(BOOL)arg6;
- (id)initWithURL:(id)arg1 supportURL:(id)arg2 uniqueCacheIdentifier:(struct NSUUID *)arg3 sharingState:(id)arg4 collaborationContext:(id)arg5;

// Remaining properties
@property(readonly) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

