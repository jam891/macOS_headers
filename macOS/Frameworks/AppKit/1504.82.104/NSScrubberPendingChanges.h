//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSScrubberPendingChanges : NSObject
{
    NSMutableSet *_toBeRemoved;
    NSMutableSet *_toReload;
    NSMutableArray *_stagedAttributes;
    long long _stagedAttributesStart;
    long long _countDelta;
    long long _selectionIndex;
}

@property(readonly) long long countDelta; // @synthesize countDelta=_countDelta;
@property(readonly) long long stagedAttributesStart; // @synthesize stagedAttributesStart=_stagedAttributesStart;
@property(readonly) NSMutableArray *stagedAttributes; // @synthesize stagedAttributes=_stagedAttributes;
@property(readonly) NSMutableSet *toReload; // @synthesize toReload=_toReload;
@property(readonly) NSMutableSet *toBeRemoved; // @synthesize toBeRemoved=_toBeRemoved;
@property long long selectionIndex; // @synthesize selectionIndex=_selectionIndex;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (id)_indexSetForStagedAttributesFromGlobalIndexSet:(id)arg1 truncatingLength:(BOOL)arg2;
- (void)dealloc;
- (id)initWithCurrentLayoutAttributes:(id)arg1;

@end

