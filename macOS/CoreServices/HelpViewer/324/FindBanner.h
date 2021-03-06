//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BannerWithOverlay.h"

@class BrowserCoachMarkController, NSArray, NSButton, NSSearchField, NSSegmentedControl, NSString, NSTextField, WebDataSource;

@interface FindBanner : BannerWithOverlay
{
    NSSearchField *searchField;
    NSSegmentedControl *nextPreviousControl;
    NSButton *doneButton;
    NSTextField *statusField;
    BrowserCoachMarkController *_coachMarkController;
    WebDataSource *_highlightedDataSource;
    NSString *_highlightedString;
    unsigned long long _matchCount;
    NSArray *_textRects;
    long long _lastFindPasteboardChangeCount;
    BOOL _nextReturnShouldPerformFind;
    BOOL _displayedMatchesLimited;
    BOOL _textWasEditedSinceLastSearch;
}

+ (BOOL)overlayIgnoresMouseEvents;
+ (int)bannerSortOrder;
- (void).cxx_destruct;
- (void)updateHighlightedMatches;
- (void)dismissOverlayIfContainsMouseDown:(id)arg1;
- (id)holesInFadingOverlay:(id)arg1;
- (BOOL)readyToFind;
- (id)searchField;
- (void)focusSearchField;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)performTextFinderAction:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findFromSearchField:(id)arg1;
- (void)findFromNextPreviousControl:(id)arg1;
- (void)initiateSelectionHighlightAnimation;
- (void)cancelSelectionHighlightAnimation;
- (void)willUninstallBannerView;
- (void)viewBelowBannerWasResizedFromFrame:(struct CGRect)arg1 animationProgress:(double)arg2 installing:(BOOL)arg3;
- (void)hideOverlay;
- (void)fadingOverlayNeedsUpdateInRect:(struct CGRect)arg1;
- (void)didInstallBannerView;
- (void)detachWebView;
- (id)bannerNibName;
- (void)awakeFromNib;
- (id)initWithWebView:(id)arg1;
- (void)_windowDidUpdate:(id)arg1;
- (void)_updateSearchFieldFromFindPasteboard;
- (void)_updateNextAndPreviousButtons;
- (void)_updateHighlightedMatchesAllowingOverlay:(BOOL)arg1;
- (void)_updateFindPasteboardFromSearchField;
- (void)_stopObservingWindowAndBannerView;
- (id)_statusStringFromMatchCount;
- (void)_startObservingWindowAndBannerView;
- (void)_setStatus:(id)arg1;
- (id)_searchString;
- (id)_searchableWebView;
- (void)_resetHighlightedMatches;
- (BOOL)_forWindow:(id)arg1 firstResponderIsDescendantOf:(id)arg2;
- (void)_makeSearchFieldFirstResponder;
- (id)_imageForBannerControlWithBaseName:(id)arg1;
- (void)_highlightAllMatchesAllowingOverlay:(BOOL)arg1;
- (BOOL)_findWithDirection:(BOOL)arg1 caseSensitive:(BOOL)arg2 beepOnFailure:(BOOL)arg3 animateOnSuccess:(BOOL)arg4;
- (void)_clearSelectionInWebView;
- (void)_clearHighlightedMatches;
- (BOOL)_canHighlightAllMatches;
- (void)_animateSelectedText;
- (id)_selectionSourceInWebView;

@end

