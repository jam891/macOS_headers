//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollection.h"

@class NSArray, NSDate, NSDictionary, NSMapTable, RDModelCollectionArray;

@interface IPXSparseCollection : IPXCollection
{
    RDModelCollectionArray *_sparseCollectionArray;
    NSDictionary *_cachedAspectRatios;
    NSMapTable *_modelIdsToIndexMapTable;
    NSDate *_cachedEarliestDate;
    NSDate *_cachedLatestDate;
}

+ (id)_dateFromModel:(id)arg1;
@property(retain, nonatomic) NSDate *cachedLatestDate; // @synthesize cachedLatestDate=_cachedLatestDate;
@property(retain, nonatomic) NSDate *cachedEarliestDate; // @synthesize cachedEarliestDate=_cachedEarliestDate;
@property(readonly, nonatomic) NSMapTable *modelIdsToIndexMapTable; // @synthesize modelIdsToIndexMapTable=_modelIdsToIndexMapTable;
@property(retain, nonatomic) NSDictionary *cachedAspectRatios; // @synthesize cachedAspectRatios=_cachedAspectRatios;
@property(retain, nonatomic) RDModelCollectionArray *sparseCollectionArray; // @synthesize sparseCollectionArray=_sparseCollectionArray;
- (void).cxx_destruct;
- (void)_getCollectionEarliestDate:(id *)arg1 latestDate:(id *)arg2;
- (void)_cacheCollectionEarliestAndLatestDates;
@property(readonly, nonatomic) BOOL isFullyLoaded;
@property(readonly, nonatomic) NSArray *modelIdsCollectionArray;
- (BOOL)isItemLoadedAtIndex:(unsigned long long)arg1;
- (id)latestDateForCollectionObjects;
- (id)earliestDateForCollectionObjects;
- (id)leafCollectionObjects;
- (id)collectionObjects;
- (void)enumerateCollectionObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)collectionObjectsAtIndexes:(id)arg1;
- (id)collectionObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfCollectionObject:(id)arg1;
- (unsigned long long)collectionObjectCount;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (id)summarizedCountsString;

@end

