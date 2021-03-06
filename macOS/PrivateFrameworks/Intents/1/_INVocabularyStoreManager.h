//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, _INVocabularyValidator;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSBundle *_appBundle;
    _INVocabularyValidator *_validator;
    NSString *_appBundleID;
    NSString *_baseDirectoryPath;
    NSString *_appBundlePath;
}

+ (void)deleteAllUserVocabularyFromAllAppsAsync;
+ (id)savedCustomVocabularyOverviewDictionary;
+ (id)managerForBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)_hashOfAppPath:(id)arg1;
+ (id)_customVocabularyDirectory;
+ (id)_globalClassQueue;
@property(copy, nonatomic) NSString *appBundlePath; // @synthesize appBundlePath=_appBundlePath;
@property(readonly, copy, nonatomic) NSString *baseDirectoryPath; // @synthesize baseDirectoryPath=_baseDirectoryPath;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (void).cxx_destruct;
- (void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(CDUnknownBlockType)arg2;
- (void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)deleteEverything;
- (id)getPathToLatestVocabulary:(id *)arg1 pathDuringReading:(id *)arg2 sentVocabulary:(id *)arg3 forIntentSlot:(id)arg4;
- (id)deleteIntentSlot:(id)arg1;
- (id)deleteVocabularyStoreItemAt:(id)arg1;
- (id)_validator;
- (id)_appBundle;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3;
- (id)_baseDirectoryPathForIntentSlot:(id)arg1;
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;

@end

