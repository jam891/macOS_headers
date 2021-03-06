//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityInterface/AuthenticationHintsDelegate-Protocol.h>
#import <SecurityInterface/LAUIAuthenticationSheetDelegate-Protocol.h>

@class LAUIAuthenticationSheetController, NSData, NSMutableArray, NSMutableDictionary, NSString, SFAuthorization;
@protocol AuthenticationHintsProvider;

__attribute__((visibility("hidden")))
@interface SheetSupport : NSObject <AuthenticationHintsDelegate, LAUIAuthenticationSheetDelegate>
{
    id <AuthenticationHintsProvider> _watchProvider;
    id <AuthenticationHintsProvider> _smartCardProvider;
    id _laContext;
    LAUIAuthenticationSheetController *_sheetController;
    SFAuthorization *_sfAuthorization;
    CDStruct_166d2db6 *_rights;
    NSData *_pamToken;
    NSString *_pamUsername;
    NSString *_pamService;
    NSString *_originalUsername;
    NSMutableDictionary *_scLongNames;
    NSMutableArray *_scUsers;
    long long _authType;
    int _sheetResult;
}

+ (id)_longNameForUser:(id)arg1;
+ (BOOL)_legacySmartcard;
+ (Class)_lauiClassFromString:(id)arg1;
+ (void *)_loadLAUI;
+ (Class)_saClassFromString:(id)arg1;
+ (void *)_loadSystemAdministrationFramework;
- (long long)unverifiedDataEntered:(unsigned int)arg1;
- (void)event:(long long)arg1 eventHints:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_shortNameForUser:(id)arg1;
- (id)_createProviderWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)_finishSheet;
- (void)_freeInternals;
- (BOOL)_shouldUseTouchId;
- (int)_processSheetCredentials:(unsigned int)arg1 providedUid:(int)arg2;
- (int)doSheetAuthorization:(unsigned int)arg1 forWindow:(id)arg2;
- (BOOL)shouldUseSheet;
- (void)dealloc;
- (id)initWithAuthorization:(id)arg1 andRights:(CDStruct_166d2db6 *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

