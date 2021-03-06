//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/NSCopying-Protocol.h>

@class NSArray, NSPredicate;

@interface RDQueryOptions : NSObject <NSCopying>
{
    BOOL _showHidden;
    BOOL _showInTrash;
    BOOL _writableModels;
    BOOL _shouldPrefetchCount;
    BOOL _includeAllVerifiedPersonTypes;
    BOOL _includeNonvisibleFaces;
    BOOL _includeOnlyFacesNeedingFaceCrop;
    BOOL _includeOnlyFacesWithFaceprints;
    BOOL _includeOnlyPersonsWithVisibleKeyFaces;
    NSArray *_loadProperties;
    NSArray *_additionalChangeProperties;
    long long _limit;
    NSPredicate *_predicate;
    unsigned long long _minimumVerifiedFaceCount;
    unsigned long long _minimumUnverifiedFaceCount;
    long long _personContext;
}

@property(nonatomic) BOOL includeOnlyPersonsWithVisibleKeyFaces; // @synthesize includeOnlyPersonsWithVisibleKeyFaces=_includeOnlyPersonsWithVisibleKeyFaces;
@property(nonatomic) BOOL includeOnlyFacesWithFaceprints; // @synthesize includeOnlyFacesWithFaceprints=_includeOnlyFacesWithFaceprints;
@property(nonatomic) BOOL includeOnlyFacesNeedingFaceCrop; // @synthesize includeOnlyFacesNeedingFaceCrop=_includeOnlyFacesNeedingFaceCrop;
@property(nonatomic) BOOL includeNonvisibleFaces; // @synthesize includeNonvisibleFaces=_includeNonvisibleFaces;
@property(nonatomic) BOOL includeAllVerifiedPersonTypes; // @synthesize includeAllVerifiedPersonTypes=_includeAllVerifiedPersonTypes;
@property(nonatomic) long long personContext; // @synthesize personContext=_personContext;
@property(nonatomic) unsigned long long minimumUnverifiedFaceCount; // @synthesize minimumUnverifiedFaceCount=_minimumUnverifiedFaceCount;
@property(nonatomic) unsigned long long minimumVerifiedFaceCount; // @synthesize minimumVerifiedFaceCount=_minimumVerifiedFaceCount;
@property(nonatomic) BOOL shouldPrefetchCount; // @synthesize shouldPrefetchCount=_shouldPrefetchCount;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSArray *additionalChangeProperties; // @synthesize additionalChangeProperties=_additionalChangeProperties;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(nonatomic) BOOL writableModels; // @synthesize writableModels=_writableModels;
@property(nonatomic) BOOL showInTrash; // @synthesize showInTrash=_showInTrash;
@property(nonatomic) BOOL showHidden; // @synthesize showHidden=_showHidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

