//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INShareFileIntent-Protocol.h>

@class NSArray, NSString;

@interface INShareFileIntent : INIntent <INShareFileIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setRecipients:(id)arg1;
@property(readonly, copy) NSArray *recipients;
- (void)setEntityNames:(id)arg1;
@property(readonly, copy) NSArray *entityNames;
- (void)setShareMode:(id)arg1;
@property(readonly, copy) NSString *shareMode;
- (id)initWithShareMode:(id)arg1 entityNames:(id)arg2 recipients:(id)arg3;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

