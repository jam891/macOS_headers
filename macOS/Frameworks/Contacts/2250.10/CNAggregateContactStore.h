//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore : CNContactStore
{
    CNContactStore *_mainStore;
    NSArray *_contactStores;
}

@property(copy, nonatomic) NSArray *contactStores; // @synthesize contactStores=_contactStores;
- (BOOL)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (BOOL)registerClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)supportsSaveRequest:(id)arg1;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(BOOL)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
@property(readonly, nonatomic) __weak CNContactStore *mainStore;
- (BOOL)store:(id)arg1 supportsSelector:(SEL)arg2;
- (void)dealloc;
- (id)initWithContactStores:(id)arg1;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end

