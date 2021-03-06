//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GPointSet.h"

@class GPolygon2D, NSBezierPath;

@interface GPointSet2D : GPointSet
{
    NSBezierPath *mPath;
    NSBezierPath *mHandles;
    GPolygon2D *mPolygon;
}

+ (id)defaultAttributes;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (BOOL)touchedByRect:(struct CGRect)arg1;
- (void)drawSelection;
- (void)drawContent;
- (void)updateContentFrame;
- (void)drawMarkAtPoint:(struct CGPoint)arg1;
- (void)lineTo:(double *)arg1;
- (void)startUpdatePointSet;
- (unsigned long long)dimension;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

