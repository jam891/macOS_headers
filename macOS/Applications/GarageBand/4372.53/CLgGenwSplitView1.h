//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgGenwSplitView.h"

@class CLgGenwSplitPartView_mainView;

@interface CLgGenwSplitView1 : CLgGenwSplitView
{
    CLgGenwSplitPartView_mainView *splitPartView_;
}

- (struct CGRect)splitPartViewFrameForIndex:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)splitPartViewFrame_;
- (id)unilibMainView;
- (void)resizeSubviews_local;
- (void)dealloc;
- (id)initGenwSplitViewWithFrame:(struct CGRect)arg1 genwLayoutCreator:(id)arg2 unilibDocManager:(id)arg3;

@end

