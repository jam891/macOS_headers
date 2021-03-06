//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXAssetsStackBarButtonItemDataSource-Protocol.h"
#import "IPXEditableLabelBarButtonItemDelegate-Protocol.h"
#import "IPXPullDownBarButtonItemActionDelegate-Protocol.h"
#import "PXBrowserSummaryControllerDataSource-Protocol.h"
#import "PXChangeObserver-Protocol.h"

@class IPXAssetsStackBarButtonItem, IPXBrowserControllerSettings, IPXEditableLabelBarButtonItem, IPXLabelBarButtonItem, IPXPullDownBarButtonItem, IPXSectionHeaderBarButtonItem, MOMediaView, MOPhotosSupplementaryHeader, NSArray, NSDateInterval, NSScrollView, NSString, PXBrowserSummaryController, UXBarButtonItem;
@protocol IPXBrowserSummaryActionDelegate, IPXBrowserSummaryDataSource, IPXBrowserSummaryHelperDelegate, IPXViewControllerToolbarDefining;

@interface IPXBrowserControllerSummaryHelper : NSObject <PXChangeObserver, PXBrowserSummaryControllerDataSource, IPXEditableLabelBarButtonItemDelegate, IPXPullDownBarButtonItemActionDelegate, IPXAssetsStackBarButtonItemDataSource>
{
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    struct {
        char contentScrollView;
        char mediaView;
        char wantsTopSectionHeaderInSummaryBar;
        char containerTitle;
        char localizedContainerItemsCount;
        char containerDateInterval;
        char floatingSectionHeader;
        char filtering;
        char browserSummaryControllerContainerTitle;
        char browserSummaryControllerLocalizedContainerItemsCount;
        char browserSummaryControllerContainerDateInterval;
        char browserSummaryControllerVisibleDateInterval;
        char browserSummaryControllerSelectionInfo;
        char browserSummaryControllerFilteringContainerContent;
        char toolbarItems;
        char subtoolbarItems;
        char navigationTitle;
    } _needsUpdateFlags;
    struct {
        char contentScrollView;
        char mediaView;
        char wantsTopSectionHeaderInSummaryBar;
        char containerTitle;
        char setContainerTitle;
        char containerTitleIsEditable;
        char containerLocalizedCount;
        char containerDateInterval;
        char extraBarButtonItems;
        char visibleContentSnapshot;
        char selectionSnapshot;
        char filteringIsActive;
        char filteringLocalizedCaption;
        char filteringLocalizedTitle;
        char dragSourceIdentifier;
    } _dataSourceRespondsTo;
    struct {
        char didChange;
    } _delegateRespondsTo;
    struct {
        char showFilteringOptionsWithSender;
    } _actionDelegateRespondsTo;
    BOOL _willNotifyVisibleContentChange;
    BOOL _shouldHideSummary;
    BOOL _shouldHideFilteringControls;
    BOOL _shouldUseNavigationTitle;
    BOOL _wantsTopSectionHeaderInSummaryBar;
    BOOL _filteringAvailable;
    BOOL _filteringActive;
    id <IPXBrowserSummaryDataSource> _dataSource;
    id <IPXBrowserSummaryHelperDelegate> _delegate;
    id <IPXViewControllerToolbarDefining> _toolbarOutput;
    id <IPXBrowserSummaryActionDelegate> _actionDelegate;
    NSString *_navigationTitle;
    IPXBrowserControllerSettings *_settings;
    PXBrowserSummaryController *_browserSummaryController;
    IPXLabelBarButtonItem *_titleBarButtonItem;
    IPXEditableLabelBarButtonItem *_editableTitleBarButtonItem;
    IPXLabelBarButtonItem *_selectionTitleBarButtonItem;
    IPXAssetsStackBarButtonItem *_assetsStackBarButtonItem;
    IPXPullDownBarButtonItem *_filterTitleBarButtonItem;
    IPXSectionHeaderBarButtonItem *_sectionHeaderBarButtonItem;
    IPXLabelBarButtonItem *_containerSecondaryTitleBarButtonItem;
    IPXLabelBarButtonItem *_containerTertiaryTitleBarButtonItem;
    UXBarButtonItem *_toolbarFlexibleSpaceBarButtonItem;
    UXBarButtonItem *_subtoolbarFlexibleSpaceBarButtonItem;
    NSScrollView *_contentScrollView;
    MOMediaView *_mediaView;
    NSString *_containerTitle;
    NSString *_localizedContainerItemsCount;
    NSDateInterval *_containerDateInterval;
    MOPhotosSupplementaryHeader *_floatingSectionHeader;
    NSArray *_toolbarItems;
    NSArray *_subtoolbarItems;
}

@property(copy, nonatomic) NSArray *subtoolbarItems; // @synthesize subtoolbarItems=_subtoolbarItems;
@property(copy, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(nonatomic, getter=isFilteringActive) BOOL filteringActive; // @synthesize filteringActive=_filteringActive;
@property(nonatomic, getter=isFilteringAvailable) BOOL filteringAvailable; // @synthesize filteringAvailable=_filteringAvailable;
@property(retain, nonatomic) MOPhotosSupplementaryHeader *floatingSectionHeader; // @synthesize floatingSectionHeader=_floatingSectionHeader;
@property(copy, nonatomic) NSDateInterval *containerDateInterval; // @synthesize containerDateInterval=_containerDateInterval;
@property(copy, nonatomic) NSString *localizedContainerItemsCount; // @synthesize localizedContainerItemsCount=_localizedContainerItemsCount;
@property(copy, nonatomic) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;
@property(nonatomic) BOOL wantsTopSectionHeaderInSummaryBar; // @synthesize wantsTopSectionHeaderInSummaryBar=_wantsTopSectionHeaderInSummaryBar;
@property(retain, nonatomic) MOMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NSScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(readonly, nonatomic) UXBarButtonItem *subtoolbarFlexibleSpaceBarButtonItem; // @synthesize subtoolbarFlexibleSpaceBarButtonItem=_subtoolbarFlexibleSpaceBarButtonItem;
@property(readonly, nonatomic) UXBarButtonItem *toolbarFlexibleSpaceBarButtonItem; // @synthesize toolbarFlexibleSpaceBarButtonItem=_toolbarFlexibleSpaceBarButtonItem;
@property(readonly, nonatomic) IPXLabelBarButtonItem *containerTertiaryTitleBarButtonItem; // @synthesize containerTertiaryTitleBarButtonItem=_containerTertiaryTitleBarButtonItem;
@property(readonly, nonatomic) IPXLabelBarButtonItem *containerSecondaryTitleBarButtonItem; // @synthesize containerSecondaryTitleBarButtonItem=_containerSecondaryTitleBarButtonItem;
@property(readonly, nonatomic) IPXSectionHeaderBarButtonItem *sectionHeaderBarButtonItem; // @synthesize sectionHeaderBarButtonItem=_sectionHeaderBarButtonItem;
@property(readonly, nonatomic) IPXPullDownBarButtonItem *filterTitleBarButtonItem; // @synthesize filterTitleBarButtonItem=_filterTitleBarButtonItem;
@property(readonly, nonatomic) IPXAssetsStackBarButtonItem *assetsStackBarButtonItem; // @synthesize assetsStackBarButtonItem=_assetsStackBarButtonItem;
@property(readonly, nonatomic) IPXLabelBarButtonItem *selectionTitleBarButtonItem; // @synthesize selectionTitleBarButtonItem=_selectionTitleBarButtonItem;
@property(readonly, nonatomic) IPXEditableLabelBarButtonItem *editableTitleBarButtonItem; // @synthesize editableTitleBarButtonItem=_editableTitleBarButtonItem;
@property(readonly, nonatomic) IPXLabelBarButtonItem *titleBarButtonItem; // @synthesize titleBarButtonItem=_titleBarButtonItem;
@property(readonly, nonatomic) PXBrowserSummaryController *browserSummaryController; // @synthesize browserSummaryController=_browserSummaryController;
@property(readonly, nonatomic) IPXBrowserControllerSettings *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) BOOL shouldUseNavigationTitle; // @synthesize shouldUseNavigationTitle=_shouldUseNavigationTitle;
@property(nonatomic) BOOL shouldHideFilteringControls; // @synthesize shouldHideFilteringControls=_shouldHideFilteringControls;
@property(nonatomic) BOOL shouldHideSummary; // @synthesize shouldHideSummary=_shouldHideSummary;
@property(nonatomic) __weak id <IPXBrowserSummaryActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <IPXViewControllerToolbarDefining> toolbarOutput; // @synthesize toolbarOutput=_toolbarOutput;
@property(nonatomic) __weak id <IPXBrowserSummaryHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IPXBrowserSummaryDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)contextMenuHostViewForAssetsStackBarButtonItem:(id)arg1;
- (id)dragSourceIdentifierForAssetsStackBarButtonItem:(id)arg1;
- (id)versionsForAssetsStackBarButtonItem:(id)arg1;
- (void)pullDownBarButtonItem:(id)arg1 handleActionWithSender:(id)arg2;
- (void)editableLabelBarButtonItem:(id)arg1 didEndEditingWithText:(id)arg2;
- (BOOL)isFilteringContainerContentForBrowserSummaryController:(id)arg1;
- (id)selectionSnapshotForBrowserSummaryController:(id)arg1;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)arg1;
- (id)containerDateIntervalForBrowserSummaryController:(id)arg1;
- (id)localizedContainerItemsCountForBrowserSummaryController:(id)arg1;
- (id)containerTitleForBrowserSummaryController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateNavigationTitleIfNeeded;
- (void)_invalidateNavigationTitle;
- (void)_updateSubtoolbarItemsIfNeeded;
- (void)_invalidateSubtoolbarItems;
- (void)_updateToolbarItemsIfNeeded;
- (void)_invalidateToolbarItems;
- (void)_updateBrowserSummaryControllerIfNeeded;
- (void)_invalidateBrowserSummaryController;
- (void)_invalidateBrowserSummaryControllerFilteringContainerContent;
- (void)_invalidateBrowserSummaryControllerSelectionInfo;
- (void)_invalidateBrowserSummaryControllerVisibleDateInterval;
- (void)_invalidateBrowserSummaryControllerContainerDateInterval;
- (void)_invalidateBrowserSummaryControllerLocalizedContainerItemsCount;
- (void)_invalidateBrowserSummaryControllerContainerTitle;
- (void)_updateFilteringIfNeeded;
- (void)_invalidateFiltering;
- (void)_updateFloatingSectionHeaderIfNeeded;
- (void)_invalidateFloatingSectionHeader;
- (void)_updateContainerDateIntervalIfNeeded;
- (void)_invalidateContainerDateInterval;
- (void)_updateLocalizedContainerItemsCountIfNeeded;
- (void)_invalidateLocalizedContainerItemsCount;
- (void)_updateContainerTitleIfNeeded;
- (void)_invalidateContainerTitle;
- (void)_updateWantsTopSectionHeaderInSummaryBarIfNeeded;
- (void)_invalidateWantsTopSectionHeaderInSummaryBar;
- (void)_updateMediaViewIfNeeded;
- (void)_invalidateMediaView;
- (void)_updateContentScrollViewIfNeeded;
- (void)_invalidateContentScrollView;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_updateToolbarOutputSubtoolbarItems;
- (void)_invalidateToolbarOutputSubtoolbarItems;
- (void)_signalChange:(unsigned long long)arg1;
- (void)_updateToolbarOutputToolbarItems;
- (void)_invalidateToolbarOutputToolbarItems;
- (void)_updateToolbarOutputMetrics;
- (void)_invalidateToolbarOutputMetrics;
- (void)_updateContentScrollViewScrollerInsets;
- (void)_invalidateContentScrollViewScrollerInsets;
- (void)filteringDidChange;
- (void)selectionDidChange;
- (void)_handleVisibleContentDidScroll;
- (void)visibleContentDidScroll;
- (void)visibleContentDidChange;
- (void)containerPropertiesDidChange;
- (void)mediaViewDidChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

