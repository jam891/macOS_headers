//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDGraphic.h"

#import "ICExportable-Protocol.h"

@class GQDAffineGeometry, GQDChartLegend, GQDChartModel, GQDSStyle, NSString;

@interface GQDChart : GQDGraphic <ICExportable>
{
    struct __CFDictionary *mElementOffsets;
    GQDChartLegend *mLegend;
    GQDAffineGeometry *mLegendGeometry;
    BOOL mIsLegendRetained;
    GQDChartModel *mModel;
    GQDSStyle *mStyle;
    long long mType;
    BOOL mSizeExcludesLabels;
    BOOL mPositionExcludesLabels;
    struct CGSize mContainingViewport;
}

+ (const struct StateSpec *)stateForReading;
- (void)setContainingViewport:(struct CGSize)arg1;
- (struct CGSize)containingViewport;
- (int)readReferenceAttributesFromReader:(struct _xmlTextReader *)arg1;
- (struct __CFDictionary *)elementOffsets;
- (void)setLegendGeometry:(id)arg1;
- (id)legendGeometry;
- (void)setLegend:(id)arg1;
- (id)legend;
- (BOOL)is3d;
- (BOOL)positionExcludesLabels;
- (BOOL)sizeExcludesLabels;
- (long long)type;
- (id)graphicStyle;
- (id)style;
- (id)model;
- (void)dealloc;
- (BOOL)hasBackgroundLayerForPieChart;
- (unsigned long long)numberOfSeriesForState:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setElementOffsets:(struct __CFDictionary *)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;
- (id)legendForDrawablesExport;
- (BOOL)p_isPieLabelsOutside:(id)arg1;
- (id)initWithTSDDrawableInfo:(id)arg1 exporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

