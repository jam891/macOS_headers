//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartDisclosureInspectorPaneController.h"

#import "NSPopoverDelegate-Protocol.h"
#import "TMAImageSwatchGridViewDelegate-Protocol.h"

@class NSArrayController, NSButton, NSString, TMAChartFillSetPopoverViewController, TSKMacNSPopover, TSUPair;

@interface TMAChartSeriesFillDisclosureInspectorPaneController : TMAChartDisclosureInspectorPaneController <NSPopoverDelegate, TMAImageSwatchGridViewDelegate>
{
    NSButton *mPresetButton;
    NSArrayController *mSeriesArrayController;
    TMAChartFillSetPopoverViewController *mPresetPopoverViewController;
    TSKMacNSPopover *mPresetPopover;
    TSUPair *mSwatchOfLastMouseEnter;
    id mWindowResignObserver;
}

+ (id)nibName;
@property(nonatomic) TMAChartFillSetPopoverViewController *presetPopoverViewController; // @synthesize presetPopoverViewController=mPresetPopoverViewController;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
- (void)popoverDidClose:(id)arg1;
- (void)gridView:(id)arg1 mouseExitedSwatch:(id)arg2;
- (void)gridView:(id)arg1 mouseEnteredSwatch:(id)arg2;
- (void)p_clearViewStyleProxies;
- (void)p_updateSelectedSwatches;
- (void)p_showPresetPopover:(id)arg1;
- (id)p_selectionFillProperty;
- (id)p_fillProperty;
- (struct CGImage *)newImageForSwatch:(id)arg1 inGridView:(id)arg2;
- (struct CGSize)p_swatchSize;
- (void)p_applyFillSet:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (id)currentChartColorsSwatches;
- (void)p_updatePresetButtonImage;
- (id)p_presetButtonImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

