//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)restrictionPayloadKeys;
+ (id)CommunicationServiceRules_DefaultServiceHandlers_allowedPayloadKeys;
+ (id)CommunicationServiceRules_allowedPayloadKeys;
+ (id)LDAPSearchSettingsItem_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredType;
+ (id)registeredClass;
- (id)serializePayloadCommunicationServiceRules_DefaultServiceHandlers:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadLDAPSearchSettingsItem:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadCommunicationServiceRules_DefaultServiceHandlers_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadCommunicationServiceRules_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadLDAPSearchSettingsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;
@property(readonly, nonatomic) NSString *payloadLDAPCredentials;
@property(readonly, nonatomic) NSDictionary *payloadCommunicationServiceRules;
@property(readonly, nonatomic) NSArray *payloadLDAPSearchSettings;
@property(readonly, nonatomic) NSNumber *payloadLDAPAccountUseSSL;
@property(readonly, nonatomic) NSString *payloadLDAPAccountHostName;
@property(readonly, nonatomic) NSString *payloadLDAPAccountDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

