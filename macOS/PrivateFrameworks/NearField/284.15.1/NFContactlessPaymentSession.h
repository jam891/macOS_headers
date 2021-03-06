//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import <NearField/NFContactlessPaymentSessionCallbacks-Protocol.h>

@class NFApplet, NFWeakReference, NSDictionary, NSString;
@protocol NFContactlessPaymentSessionDelegate;

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks>
{
    NSDictionary *_appletsById;
    NFWeakReference *_delegate;
    unsigned long long _numActiveSEs;
    NFApplet *_activeApplet;
    NFApplet *_defaultApplet;
}

@property(readonly) NFApplet *defaultApplet; // @synthesize defaultApplet=_defaultApplet;
@property(readonly) NFApplet *activeApplet; // @synthesize activeApplet=_activeApplet;
- (id)transitAppletState:(id)arg1 error:(id *)arg2;
- (id)felicaAppletState:(id)arg1 error:(id *)arg2;
- (id)felicaAppletState:(id)arg1;
- (BOOL)stopCardEmulation:(id *)arg1;
- (BOOL)stopCardEmulation;
- (BOOL)startHostCardEmulation:(id *)arg1;
- (BOOL)startHostCardEmulation;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)arg1;
- (BOOL)startCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (BOOL)startCardEmulationWithAuthorization:(id)arg1;
- (BOOL)setActivePaymentApplet:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (BOOL)setActivePaymentApplet:(id)arg1 authorization:(id)arg2;
- (BOOL)setActivePaymentApplet:(id)arg1 makeDefault:(BOOL)arg2 authorization:(id)arg3;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
@property(readonly) unsigned long long numberOfActiveSecureElements;
- (void)didReceiveActivityTimeout:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didFailDeferredAuthorization;
- (void)didExpressModeStateChange:(unsigned int)arg1;
- (void)didFelicaStateChange:(id)arg1;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didDetectField:(BOOL)arg1;
- (void)didEndUnexpectedly;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endSession;
- (void)didStartSession:(id)arg1;
@property id <NFContactlessPaymentSessionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

