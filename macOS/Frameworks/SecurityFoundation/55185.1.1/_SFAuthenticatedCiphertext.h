//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext
{
    id _authenticatedCiphertextInternal;
}

- (void).cxx_destruct;
@property(readonly) NSData *initializationVector;
@property(readonly) NSData *authenticationCode;
- (id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3;

@end

