//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXActionIndicatorTarget-Protocol.h"
#import "IPXAlbumAndFolderSummaryControllerDelegate-Protocol.h"
#import "IPXAlbumContentBrowserDelegate-Protocol.h"
#import "IPXAlbumsBrowserContentChangedDelegate-Protocol.h"
#import "IPXAssetTransitioning-Protocol.h"
#import "IPXAssetsViewControllerStyleBasedDelegate-Protocol.h"
#import "IPXCreateFolderActionDelegate-Protocol.h"
#import "IPXEditableTextFieldContainerDelegate-Protocol.h"
#import "IPXFacesAlbumThumbnailChangeReceiver-Protocol.h"
#import "IPXFavoriteMemoriesAlbumThumbnailChangeReceiver-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXPeopleOnboardingDelegate-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"
#import "UXCollectionViewAccessibilityDelegate-Protocol.h"
#import "UXNavigationRoot-Protocol.h"

@class IPXAlbumCell, IPXAssetTransitionController, IPXAssetsViewController, IPXAssetsViewControllerColumnCountSliderController, IPXDatabaseAlbumsAndFoldersController, IPXDatabaseMagicAlbumsController, IPXDragDropPasteboardController, IPXEditableTextFieldContainer, IPXFolderSummaryController, IPXLibrary, NSArray, NSButton, NSIndexPath, NSSet, NSString, NSTextField, NSView, PFDispatchQueue, PXPeopleProgressManager, RDFolder, RDModel, UXBarButtonItem, UXLabel;

@interface IPXAlbumsBrowserController : IPXBrowserController <UXCollectionViewAccessibilityDelegate, IPXObjectsControllerChangeReceiver, IPXAssetsViewControllerStyleBasedDelegate, IPXAlbumsBrowserContentChangedDelegate, IPXSelectionProvider, IPXAlbumContentBrowserDelegate, IPXAssetTransitioning, IPXActionIndicatorTarget, PFResourceAccessClient, IPXFacesAlbumThumbnailChangeReceiver, IPXFavoriteMemoriesAlbumThumbnailChangeReceiver, RDLibraryMessagesReceiver, IPXAlbumAndFolderSummaryControllerDelegate, IPXEditableTextFieldContainerDelegate, IPXCreateFolderActionDelegate, IPXPeopleOnboardingDelegate, UXNavigationRoot>
{
    NSString *_parentFolderUuid;
    IPXAssetsViewControllerColumnCountSliderController *_columnCountSliderController;
    IPXDatabaseAlbumsAndFoldersController *_albumsAndFoldersObjectsController;
    IPXDatabaseMagicAlbumsController *_magicAlbumsObjectController;
    IPXAssetsViewController *_albumsViewController;
    NSButton *_createPopupButton;
    NSButton *_playPopupButton;
    NSButton *_sharePopupButton;
    IPXFolderSummaryController *_folderSummaryController;
    IPXEditableTextFieldContainer *_summaryTitleLabelContainer;
    UXLabel *_summaryDateRangeLabel;
    UXLabel *_summaryItemCountLabel;
    UXBarButtonItem *_summaryTitleItem;
    UXBarButtonItem *_summaryDateRangeItem;
    UXBarButtonItem *_summaryItemCountItem;
    NSView *_noAlbumsPlaceholderView;
    NSTextField *_noAlbumsPlaceholderViewTitle;
    NSTextField *_noAlbumsPlaceholderViewMessage;
    NSSet *_onDemandMagicSmartAlbums;
    PFDispatchQueue *_magicSmartAlbumHideShowQueue;
    IPXDragDropPasteboardController *_currentPasteboardController;
    NSIndexPath *_contextualMenuAssetPath;
    IPXAssetTransitionController *_assetTransitionController;
    IPXAlbumCell *_tempDraggingZoomedCell;
    RDFolder *_mostRecentlyCreatedFolder;
    RDModel *_modelToScrollToWhenDisplayed;
    NSArray *_restoreSelectedAlbumsUUIDs;
    BOOL _monitoringLibrary;
    BOOL _beginningMonitoringLibrary;
    BOOL _stopMonitoringObjectsControllerOnDealloc;
    BOOL _suspendUpdates;
    BOOL _editTitleOfModelWhenScrolledTo;
    BOOL _editingTitleOfNewlyCreatedFolder;
    long long _highestAlbumThumbnailCheckpointSeen;
    BOOL _readyForCounts;
    IPXLibrary *_library;
    PXPeopleProgressManager *_peopleProgressManager;
}

+ (id)navigationDestinationForFolderUuid:(id)arg1 forDatabase:(id)arg2;
+ (id)sortKeyForMenuTag:(long long)arg1;
+ (void)promptForDeleteCollections:(id)arg1 forLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)promptForAlbumMoveAction:(id)arg1 albumCount:(unsigned long long)arg2 isMerge:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)builtInAlbumUuids;
@property(retain, nonatomic) PXPeopleProgressManager *peopleProgressManager; // @synthesize peopleProgressManager=_peopleProgressManager;
@property(retain, nonatomic) IPXLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) IPXFolderSummaryController *folderSummaryController; // @synthesize folderSummaryController=_folderSummaryController;
- (void).cxx_destruct;
- (void)thumbnailChangedForFavoriteMemoriesAlbum;
- (void)peopleOnboardingControllerWelcomeConfirmed:(id)arg1;
- (void)thumbnailChangedForFacesAlbum;
- (void)willUndoCreateFolderAction:(id)arg1;
- (void)editableTextFieldContainer:(id)arg1 editingEndedWithString:(id)arg2;
- (void)libraryDeletedMemory:(id)arg1;
- (void)libraryUpdatedMemory:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryDeletedFolder:(id)arg1;
- (void)libraryUpdatedFolder:(id)arg1 forKeyPaths:(id)arg2;
- (void)viewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationDestination;
- (id)navigationIdentifier;
- (BOOL)canNavigateToDestination:(id)arg1;
- (void)albumContentBrowser:(id)arg1 dismissingForAlbum:(id)arg2;
- (void)updateThumbnailForAssets:(id)arg1;
- (void)itemUpdated:(id)arg1;
- (id)actionStringForPromoteActionWithAlbumCount:(long long)arg1 smartAlbumCount:(long long)arg2 folderCount:(long long)arg3 withParentFolder:(id)arg4;
- (id)actionStringForPasteActionWithAlbumCount:(long long)arg1 smartAlbumCount:(long long)arg2 folderCount:(long long)arg3;
- (id)actionStringForCutActionWithAlbumCount:(long long)arg1 smartAlbumCount:(long long)arg2 folderCount:(long long)arg3;
- (id)actionStringForDeleteActionWithAlbumCount:(long long)arg1 smartAlbumCount:(long long)arg2 folderCount:(long long)arg3;
- (id)actionStringForAction:(id)arg1 withAlbumCount:(long long)arg2 smartAlbumCount:(long long)arg3 folderCount:(long long)arg4;
- (void)itemCollection:(id)arg1 albumCount:(long long *)arg2 smartAlbumCount:(long long *)arg3 folderCount:(long long *)arg4 magicAlbumCount:(long long *)arg5;
- (void)_showOrHidePlaceholderAsNeededWithSectionsCollection:(id)arg1;
- (void)setBaseFolderSortOrderCustom:(BOOL)arg1;
- (BOOL)isCustomSorted;
- (void)keyDown:(id)arg1;
- (void)a_toggleShowHiddenPhotosAlbum:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)a_sortAlbums:(id)arg1;
- (void)a_playButton:(id)arg1;
- (void)a_consolidateOriginal:(id)arg1;
- (void)cellNamingWasAborted:(id)arg1;
- (void)cellNameWasEdited:(id)arg1;
- (void)editSmartAlbumButtonClicked:(id)arg1;
- (void)a_pinItem:(id)arg1;
- (void)a_duplicateItem:(id)arg1;
- (void)a_newEmptyAlbum:(id)arg1;
- (void)a_newAlbum:(id)arg1;
- (void)a_addFolder:(id)arg1;
- (void)a_editSmartAlbum:(id)arg1;
- (void)a_newSmartAlbum:(id)arg1;
- (void)a_promoteItem:(id)arg1;
- (void)_deleteCollections:(id)arg1;
- (void)a_trashItem:(id)arg1;
- (void)a_print:(id)arg1;
- (void)a_exportOriginal:(id)arg1;
- (void)a_export:(id)arg1;
- (void)a_setContainerSortOrder:(id)arg1;
- (void)a_setContainerSort:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)targetFrameForActionIndicator:(id)arg1;
- (void)didTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (void)willTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (void)assetsViewController:(id)arg1 draggingEnded:(id)arg2;
- (void)assetsViewController:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)assetsViewController:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)assetsViewController:(id)arg1 draggingEntered:(id)arg2;
- (unsigned long long)updateExternalDragFromSender:(id)arg1;
- (BOOL)assetsViewController:(id)arg1 performDragOperation:(id)arg2;
- (id)_assetAtWindowLocation:(struct CGPoint)arg1 indexPath:(id *)arg2;
- (BOOL)assetsViewController:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)resetTempDrag;
- (id)assetsViewController:(id)arg1 movedAssetsInSectionsCollection:(id)arg2 atIndexPaths:(id)arg3 toIndexPath:(id)arg4 dropPosition:(long long)arg5;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)resetLayer:(id)arg1;
- (void)zoomLayer:(id)arg1;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (long long)assetsViewController:(id)arg1 allowedDropPositionsForItemsAtIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (BOOL)assetsViewController:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)assetsViewController:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (id)assetsToSelectForSelectAllOperationOnAssetsViewController:(id)arg1;
- (void)assetsViewController:(id)arg1 didUpdateSectionsCollection:(id)arg2;
- (void)assetsViewController:(id)arg1 changedValueOfLayoutColumnCountScalar:(id)arg2;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (void)showBackgroundContextualMenuForAssetsViewController:(id)arg1 withEvent:(id)arg2;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (void)assetsViewController:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2;
- (void)assetsViewController:(id)arg1 backgroundWasClickedWithEvent:(id)arg2;
- (void)assetsViewController:(id)arg1 mouseDownWithEvent:(id)arg2;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (id)layoutColumnCountScalarForAssetsViewController:(id)arg1;
- (BOOL)assetsViewController:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2;
- (Class)assetsViewController:(id)arg1 headerViewClassForViewStyle:(unsigned long long)arg2;
- (Class)assetsViewController:(id)arg1 itemCellClassForViewStyle:(unsigned long long)arg2;
- (unsigned long long)styleForAssetsViewController:(id)arg1;
- (void)selectedItemAlbumCount:(long long *)arg1 smartAlbumCount:(long long *)arg2 folderCount:(long long *)arg3 magicAlbumCount:(long long *)arg4;
- (id)selectionProviderCurrentSelectionWithOptions:(long long)arg1;
- (id)selectionProviderCurrentLiteSelection;
- (void)allSelectedVersionsWithResult:(CDUnknownBlockType)arg1;
- (void)recursiveSelectedVersionsInContainer:(id)arg1 addingToOrderedSet:(id)arg2;
- (id)_selectedIndexPaths;
- (id)_selectedCollections;
- (BOOL)_hasSelectedAlbums;
- (void)databaseObjectsControllerDatabaseClosing:(id)arg1;
- (void)suspendUpdates:(BOOL)arg1;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)objectsController:(id)arg1 propertiesChanged:(id)arg2;
- (id)_createPeopleHomeBrowserController;
- (id)_createPeopleBrowserController;
- (id)controllerForDatabaseObject:(id)arg1;
- (id)viewControllersForItem:(id)arg1;
- (void)showCollectionViewForItem:(id)arg1 animated:(BOOL)arg2;
- (id)preferredFirstResponder;
- (void)setEdgeInsets:(struct NSEdgeInsets)arg1;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewFailedTransitionInWithContext:(id)arg1;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)updateAlbumVersionCountTracking;
- (void)stopAlbumVersionCountTracking;
- (void)assetsViewControllerItemsChanged:(id)arg1;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationParticipatingTitle;
- (void)didBecomeInactive;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)controller:(id)arg1 updatedItemCount:(id)arg2;
- (void)controller:(id)arg1 updatedTitle:(id)arg2;
- (void)_setupToolbarItems;
- (void)_setupNavigationItem;
- (void)_scrollToMostRecentlyCreatedItemAndBeginEditingNameIfNecessary;
- (BOOL)_scrollToModelObject:(id)arg1 beginNameEditing:(BOOL)arg2;
- (void)_handleChangeInCurrentSelectionWithUserInfo:(id)arg1;
- (BOOL)displayContentsOfDatabaseObject:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canDisplayContentsOfDatabaseObject:(id)arg1;
- (id)baseFolder;
- (id)databaseObjectsController;
- (void)stopMonitoringLibrary;
- (void)createDataControllers;
- (void)startMonitoringLibrary:(CDUnknownBlockType)arg1;
- (void)startMonitoringLibrary;
- (void)_shutdown;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 databaseObjectsController:(id)arg2;
- (id)initWithLibrary:(id)arg1;
- (void)collectionView:(id)arg1 shouldPrepareAccessibilitySection:(id)arg2;
- (void)assetsViewController:(id)arg1 didAssignMediaItem:(id)arg2 toCell:(id)arg3 atIndexPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

