//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABAccountCustomizationPolicy-Protocol.h>

@class NSString;

@interface ABDefaultCustomizationPolicy : NSObject <ABAccountCustomizationPolicy>
{
}

+ (id)customizationPolicy;
- (BOOL)usesSyncServices;
- (BOOL)showAllContactsIfOnlyOneGroup;
- (id)defaultAccountDescription;
- (long long)sortOrder;
- (BOOL)supportsDistributionLists;
- (BOOL)supportsPhotos;
- (BOOL)supportsPhoneticName;
- (BOOL)canReimportFromMetadata;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)groupsCanRemoveMembers;
- (id)directoryLabelForAccountName:(id)arg1;
- (id)allContactsLabelForAccountName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

