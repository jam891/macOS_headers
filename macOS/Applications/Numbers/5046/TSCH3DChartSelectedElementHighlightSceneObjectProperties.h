//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DPrefilteredLineRenderer, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject
{
    TSCH3Dvec3DataBuffer *edgeVertices;
    TSCH3DPrefilteredLineRenderer *mRenderer;
    unsigned long long mSelectedSeriesIndex;
    tvec4_ac57c72d mColor;
    TSCH3Dvec3DataBuffer *mEdgeVertices;
}

@property(nonatomic) tvec4_ac57c72d color; // @synthesize color=mColor;
@property(nonatomic) unsigned long long selectedSeriesIndex; // @synthesize selectedSeriesIndex=mSelectedSeriesIndex;
@property(retain, nonatomic) TSCH3Dvec3DataBuffer *edgeVertices; // @synthesize edgeVertices=mEdgeVertices;
- (id).cxx_construct;
@property(readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer;
- (void)dealloc;
- (id)init;

@end

