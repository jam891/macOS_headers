//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNPdfExporter.h"

@interface KNPdfNoteExporter : KNPdfExporter
{
    BOOL mIsPrintingNote;
}

- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)incrementPage;
- (id)currentInfos;

@end

