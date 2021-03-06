//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPCanvasElement.h"

@class NSDate, NSFont, NSMutableArray;

@interface APLPMonthElement : APLPCanvasElement
{
    NSDate *month;
    NSMutableArray *days;
    NSFont *dayFont;
    NSFont *eventFont;
    int daysPerWeek;
    struct CGSize daySize;
    int columnCount;
    int lineCount;
    long long leadingDays;
    int trailingDays;
    double alldayEventHeight;
    BOOL showAlldayEvents;
    BOOL showEvents;
}

- (void).cxx_destruct;
- (void)draw;
- (id)attenuatedColorFromColor:(id)arg1;
- (double)setupEvents:(id)arg1 inRect:(struct CGRect)arg2;
- (long long)calculateRectsForEvents:(id)arg1 inRect:(struct CGRect)arg2;
- (long long)setupEventsInRect:(struct CGRect)arg1 forDay:(id)arg2;
- (double)alldayEventHeight;
- (double)xPosForIndex:(long long)arg1 end:(BOOL)arg2;
- (long long)indexForDate:(id)arg1 forWeekIndex:(long long)arg2;
- (long long)setupAlldayEventsInRect:(struct CGRect)arg1 forDay:(id)arg2 previousDay:(id)arg3 firstDayOfWeek:(BOOL)arg4;
- (void)setupMoreEventsInRect:(struct CGRect)arg1 withCount:(long long)arg2 forDate:(id)arg3;
- (void)setup;
- (BOOL)resolveWithDataSource:(id)arg1;
- (BOOL)canGrowVertically;
- (BOOL)canGrowHorizontally;

@end

