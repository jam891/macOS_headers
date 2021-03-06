//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;
}

@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)requestDidParsePlistObject:(id)arg1;
- (BOOL)hasRequestBody;
- (id)httpMethod;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresSignature;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;

@end

