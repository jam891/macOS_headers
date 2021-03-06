//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface TSTInspectedStrokeInformation : NSObject <NSCopying>
{
    BOOL _isMixed;
    NSMutableDictionary *_cellStrokes;
    NSMutableSet *_cellStrokeFrequency;
    NSMutableSet *_strokeWidthFrequency;
}

+ (id)horizontalInteriorStrokeInformationFromMasterLayout:(id)arg1 cellRegion:(id)arg2 minTopGridRow:(unsigned int)arg3 maxBottomGridRow:(unsigned int)arg4 bailOutTime:(double)arg5;
+ (id)horizontalEdgeStrokeInformationFromMasterLayout:(id)arg1 cellRegion:(id)arg2 bailOutTime:(double)arg3;
+ (id)verticalInteriorStrokeInformationFromMasterLayout:(id)arg1 cellRegion:(id)arg2 bailOutTime:(double)arg3;
+ (id)verticalEdgeStrokeInformationFromMasterLayout:(id)arg1 cellRegion:(id)arg2 bailOutTime:(double)arg3;
@property(nonatomic) BOOL isMixed; // @synthesize isMixed=_isMixed;
@property(retain, nonatomic) NSMutableSet *strokeWidthFrequency; // @synthesize strokeWidthFrequency=_strokeWidthFrequency;
@property(retain, nonatomic) NSMutableSet *cellStrokeFrequency; // @synthesize cellStrokeFrequency=_cellStrokeFrequency;
@property(retain, nonatomic) NSMutableDictionary *cellStrokes; // @synthesize cellStrokes=_cellStrokes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeStrokeInformation:(id)arg1;
- (double)mostCommonWeightWithSelected:(id)arg1;
- (BOOL)areAllStrokesEmpty;
- (id)commonStrokes:(int)arg1;
- (id)strokesForBoxedKey:(id)arg1;
- (void)p_addObject:(id)arg1 toFrequencySet:(id)arg2 withFrequency:(long long)arg3;
- (void)setMixed;
- (void)incrementFrequencyBy:(int)arg1 forStroke:(id)arg2;
- (void)addStroke:(id)arg1 toKey:(int)arg2 andKey:(int)arg3;
- (void)dealloc;
- (id)init;

@end

