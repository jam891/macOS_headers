//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TSKChangeSourceObserver-Protocol.h"

@class NSArray, NSColor, NSMutableDictionary, NSMutableOrderedSet, NSSet, NSString, TMAInspectorPaneController, TMAInspectorView, TSDEditorController;
@protocol TMAInspectorPaneProvider;

@interface TMAInspectorViewController : NSViewController <TSKChangeSourceObserver>
{
    TMAInspectorPaneController *_selectedPaneController;
    NSArray *_paneIdentifiers;
    NSMutableDictionary *_paneControllerCache;
    NSMutableOrderedSet *_selectedTabHistory;
    NSSet *_observedModels;
    BOOL _newCanvasObjectAdded;
    BOOL _tornDown;
    BOOL _loaded;
    BOOL _editorsChanged;
    BOOL _needsPaneUpdate;
    id <TMAInspectorPaneProvider> _provider;
    TSDEditorController *_editorController;
}

+ (id)keyPathsForValuesAffectingMinimumContainerHeight;
+ (void)initialize;
@property(retain, nonatomic) TSDEditorController *editorController; // @synthesize editorController=_editorController;
@property(retain, nonatomic) id <TMAInspectorPaneProvider> provider; // @synthesize provider=_provider;
- (void)p_addModelObservationIfNeeded;
- (void)p_removeModelObservationIfNeeded;
- (long long)p_selectedTabIndexInHistoryFromIdentifiers:(id)arg1;
- (long long)p_historyEntryIndexForIdentifier:(id)arg1 tabName:(id)arg2;
- (void)p_pushTabWithIdentifierIntoHistory:(id)arg1;
- (void)p_pushSelectedTabIntoHistory;
- (long long)p_selectedTabIndexWithPreviousIdentifier:(id)arg1 previousTabName:(id)arg2;
- (long long)p_indexOfTabWithName:(id)arg1;
- (void)p_updateTabs;
- (void)p_updatePaneForSelectedTab;
- (id)p_paneControllerForIdentifier:(id)arg1;
- (void)p_updateSelectedPaneRepresentedObject;
@property(readonly, nonatomic) BOOL hasPanes;
- (id)p_tabNameForIdentifier:(id)arg1;
- (id)p_selectedTabName;
@property(readonly, nonatomic) NSString *selectedPaneIdentifier;
- (void)p_updatePanes;
- (void)p_setNeedsPaneUpdate;
- (void)p_inspectorStateDidChange:(id)arg1;
- (void)p_selectionDidChange:(id)arg1;
- (void)p_tabsShouldUpdate:(id)arg1;
- (void)p_editorsDidChange:(id)arg1;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)discardEditing;
- (BOOL)commitEditing;
- (void)addPreferredTabSelectionToHistoryWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL canSelectNextOrPreviousTab;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)p_selectTabFromUserActionAtIndex:(long long)arg1;
- (void)tabSelected:(id)arg1;
@property(readonly, nonatomic) TMAInspectorView *inspectorView;
@property(retain, nonatomic) NSColor *backgroundColor;
- (void)teardown;
- (void)viewWillLayout;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

