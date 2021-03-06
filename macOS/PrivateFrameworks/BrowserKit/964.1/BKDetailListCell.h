//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BrowserKit/BKImageBrowserCell.h>

__attribute__((visibility("hidden")))
@interface BKDetailListCell : BKImageBrowserCell
{
}

+ (float)minimumRowHeight;
- (BOOL)hitTestWithRect:(struct CGRect)arg1;
- (BOOL)hitTestWithPoint:(struct CGPoint)arg1;
- (void)drawShadow;
- (void)drawSelection;
- (void)drawBackground;
- (void)drawSelectionOnTitle;
- (void)drawTitle;
- (struct CGRect)detailListSelectionFrame;
- (struct CGRect)subtitleFrame;
- (struct CGRect)titleFrame;
- (unsigned long long)imageAlignment;
- (struct CGRect)imageContainerFrame;
- (struct CGSize)imageSizeForCellSize:(struct CGSize)arg1 withAspectRatio:(float)arg2;
- (float)squareSizeForCellSize:(struct CGSize)arg1;
- (int)heightOfInfoSpace;
- (id)detailListItemDataSource;

@end

