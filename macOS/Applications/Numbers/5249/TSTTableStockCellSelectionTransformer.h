//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableSubSelectionTransformerBase.h"

@interface TSTTableStockCellSelectionTransformer : TSTTableSubSelectionTransformerBase
{
    struct TSUCellCoord _originCellID;
    struct TSTCellUID _originCellUID;
}

@property(nonatomic) struct TSUCellCoord originCellID; // @synthesize originCellID=_originCellID;
@property(nonatomic) struct TSTCellUID originCellUID; // @synthesize originCellUID=_originCellUID;
- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (BOOL)preventsNextSelectionFromTransformer:(id)arg1;
- (BOOL)isShadowedByTransform;
- (id)transformedSelection;
- (id)initWithContext:(id)arg1 tableInfoIdPath:(id)arg2;
- (id)initWithTableInfo:(id)arg1 cellUID:(const struct TSTCellUID *)arg2;

@end

