//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ESDObject.h"

@class CHDChart, NSData;

@interface EBEscherShape : ESDObject
{
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (void)setChart:(id)arg1;
- (id)chart;
- (void)setShowLegend:(BOOL)arg1;
- (BOOL)showLegend;
- (void)setChartData:(id)arg1;
- (id)chartData;
- (void)dealloc;

@end

