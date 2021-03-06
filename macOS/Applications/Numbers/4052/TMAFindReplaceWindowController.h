//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"
#import "TSAFindReplaceControllerObserver-Protocol.h"
#import "TSASearchFieldDelegate-Protocol.h"
#import "TSDModalMouseEventHandler-Protocol.h"

@class NSArray, NSButton, NSPopUpButton, NSSegmentedControl, NSString, TSAFindReplaceController, TSAInteractiveCanvasController, TSAProgressSearchField, TSKCollaborationState;
@protocol TSDModalMouseEventHandler, TSKSearchReference;

@interface TMAFindReplaceWindowController : NSWindowController <TSASearchFieldDelegate, TSDModalMouseEventHandler, NSWindowDelegate, TSAFindReplaceControllerObserver>
{
    BOOL _replaceMode;
    BOOL _persistPasteboardOnNextSearchEnd;
    BOOL _startedModelSearchForCurrentString;
    BOOL _startedVisualSearchForCurrentString;
    NSPopUpButton *_gearButton;
    TSAProgressSearchField *_searchField;
    TSAProgressSearchField *_replaceField;
    NSSegmentedControl *_nextPreviousControl;
    NSButton *_replaceAllButton;
    NSButton *_replaceAndFindButton;
    NSButton *_replaceButton;
    TSAInteractiveCanvasController *_interactiveCanvasController;
    TSAFindReplaceController *_findReplaceController;
    double _lastUpdateTime;
    NSArray *_findOnlyConstraints;
    NSArray *_findReplaceOnlyConstraints;
    id <TSDModalMouseEventHandler> _previousCanvasEventHandler;
    id <TSKSearchReference> _mouseDownSearchReference;
    long long _lastFindPasteboardChangeCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedController;
+ (id)_singletonAlloc;
@property(nonatomic) BOOL startedVisualSearchForCurrentString; // @synthesize startedVisualSearchForCurrentString=_startedVisualSearchForCurrentString;
@property(nonatomic) BOOL startedModelSearchForCurrentString; // @synthesize startedModelSearchForCurrentString=_startedModelSearchForCurrentString;
@property(nonatomic) long long lastFindPasteboardChangeCount; // @synthesize lastFindPasteboardChangeCount=_lastFindPasteboardChangeCount;
@property(retain, nonatomic) id <TSKSearchReference> mouseDownSearchReference; // @synthesize mouseDownSearchReference=_mouseDownSearchReference;
@property(retain, nonatomic) id <TSDModalMouseEventHandler> previousCanvasEventHandler; // @synthesize previousCanvasEventHandler=_previousCanvasEventHandler;
@property(retain, nonatomic) NSArray *findReplaceOnlyConstraints; // @synthesize findReplaceOnlyConstraints=_findReplaceOnlyConstraints;
@property(retain, nonatomic) NSArray *findOnlyConstraints; // @synthesize findOnlyConstraints=_findOnlyConstraints;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property BOOL persistPasteboardOnNextSearchEnd; // @synthesize persistPasteboardOnNextSearchEnd=_persistPasteboardOnNextSearchEnd;
@property(nonatomic) TSAFindReplaceController *findReplaceController; // @synthesize findReplaceController=_findReplaceController;
@property(retain) TSAInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(retain) NSButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(retain) NSButton *replaceAndFindButton; // @synthesize replaceAndFindButton=_replaceAndFindButton;
@property(retain) NSButton *replaceAllButton; // @synthesize replaceAllButton=_replaceAllButton;
@property(retain) NSSegmentedControl *nextPreviousControl; // @synthesize nextPreviousControl=_nextPreviousControl;
@property(retain) TSAProgressSearchField *replaceField; // @synthesize replaceField=_replaceField;
@property(retain) TSAProgressSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) NSPopUpButton *gearButton; // @synthesize gearButton=_gearButton;
@property(nonatomic) BOOL replaceMode; // @synthesize replaceMode=_replaceMode;
- (void)collaborativeTimerDidTrigger:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)wantsMouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_removeHighlightEventHandler;
- (void)p_installHighlightEventHandlerIfNecessary;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)p_replacePboardContentsChanged:(id)arg1;
- (void)p_findPboardContentsChanged:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_searchFieldTextDidChange:(id)arg1;
- (void)p_startSearchFromTimer;
- (void)p_startVisualSearch;
- (void)p_startModelSearch;
- (void)p_endFindMode;
- (void)p_invalidateSearchResults;
- (void)p_updateUIState;
- (void)p_clearReplaceAllStatusText;
- (void)p_populateReplaceFieldFromReplacePboard;
- (void)p_populateSearchFieldFromFindPboard;
- (void)p_persistReplaceStringToReplacePboard;
- (void)p_persistFindStringToFindPboard;
- (void)p_proposeRecentSearchString;
- (void)p_findNextResultInDirection:(unsigned long long)arg1;
- (void)p_replaceAndFindNext:(BOOL)arg1;
- (void)p_userDidInitiateMoveToNextResult;
- (id)makeTouchBar;
- (BOOL)validateMenuItem:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)removeFindReplaceController:(id)arg1;
- (BOOL)isInCollaborationMode;
@property(readonly, nonatomic) TSKCollaborationState *collaborationState;
- (void)toggleMatchCaseOption:(id)arg1;
- (void)toggleWholeWordsOption:(id)arg1;
- (void)updateFindReplaceMode;
- (void)menuShowReplace:(id)arg1;
- (void)menuShowFind:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)replaceButtonClicked:(id)arg1;
- (void)replaceAndFindButtonClicked:(id)arg1;
- (void)replaceAllButtonClicked:(id)arg1;
- (void)nextPreviousControlClicked:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
@property(readonly, nonatomic) BOOL isVisible;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

