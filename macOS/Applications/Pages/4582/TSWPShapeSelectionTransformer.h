//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeSelectionTransformer.h"

@class TSUUUIDPath;

@interface TSWPShapeSelectionTransformer : TSDShapeSelectionTransformer
{
    TSUUUIDPath *_storageUUIDPath;
}

- (void)loadFromArchive:(const struct ShapeSelectionTransformerArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShapeSelectionTransformerArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1 drawableSelection:(id)arg2;

@end

