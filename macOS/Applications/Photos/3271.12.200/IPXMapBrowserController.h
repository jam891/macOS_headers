//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetTransitioning-Protocol.h"
#import "IPXBrowserToolbarItemsDataSource-Protocol.h"
#import "IPXMapViewControllerDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "PXPlacesMapControllerChangeDelegate-Protocol.h"
#import "PXPlacesMapControllerLoadingStateDelegate-Protocol.h"
#import "PXPlacesMapControllerSelectionDelegate-Protocol.h"

@class IPXBrowserControllerBarsHelper, IPXBrowserControllerSummaryHelper, IPXLibrary, IPXMapDetailBrowserController, IPXObjectsController, IPXViewControllerToolbarMultiplexer, IPXWorkspaceController, NSArray, NSButton, NSString, PXPlacesMapPipeline, PXPlacesMapViewController, UXTabBarItemSegment;
@protocol PXBrowserSelectionSnapshot;

@interface IPXMapBrowserController : IPXBrowserController <IPXMapViewControllerDelegate, IPXSelectionProvider, IPXObjectsControllerChangeReceiver, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXPlacesMapControllerLoadingStateDelegate, IPXAssetTransitioning, IPXBrowserToolbarItemsDataSource>
{
    PXPlacesMapViewController *_mapViewController;
    IPXMapDetailBrowserController *_gridBrowserController;
    UXTabBarItemSegment *_mapTabBarItemSegment;
    UXTabBarItemSegment *_satelliteTabBarItemSegment;
    UXTabBarItemSegment *_gridTabBarItemSegment;
    BOOL _isFirstAppearance;
    BOOL _isTransitioningIn;
    BOOL _isRestoring;
    BOOL _isObservingObjectsController;
    PXPlacesMapPipeline *_libraryPipeline;
    PXPlacesMapPipeline *_specificPipeline;
    PXPlacesMapPipeline *_currentPipeline;
    NSArray *_visibleVersions;
    IPXLibrary *_library;
    CDStruct_02837cd9 _initiallyVisibleMapRect;
    NSButton *_createPopupButton;
    NSButton *_playPopupButton;
    NSButton *_sharePopupButton;
    NSButton *_nearbyPhotosToggleButton;
    BOOL _shouldUsePlacesNavigationDestination;
    BOOL _dataSourceIsLoaded;
    BOOL _didFinishInitialPipelineExecution;
    BOOL _didSetupChildViewControllersAndPipelines;
    BOOL _didShowVersionDetails;
    BOOL _initiallyAllVisible;
    IPXObjectsController *_specificObjectsController;
    NSString *_displayName;
    IPXViewControllerToolbarMultiplexer *_toolbarMultiplexer;
    IPXBrowserControllerSummaryHelper *_summaryHelper;
    IPXBrowserControllerBarsHelper *_barsHelper;
    long long _contentViewType;
}

+ (unsigned long long)defaultMapType;
+ (id)contentTypeSegmentedControlWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)placesAlbumForDatabase:(id)arg1;
@property(nonatomic) long long contentViewType; // @synthesize contentViewType=_contentViewType;
@property(readonly, nonatomic) IPXBrowserControllerBarsHelper *barsHelper; // @synthesize barsHelper=_barsHelper;
@property(readonly, nonatomic) IPXBrowserControllerSummaryHelper *summaryHelper; // @synthesize summaryHelper=_summaryHelper;
@property(readonly, nonatomic) IPXViewControllerToolbarMultiplexer *toolbarMultiplexer; // @synthesize toolbarMultiplexer=_toolbarMultiplexer;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL initiallyAllVisible; // @synthesize initiallyAllVisible=_initiallyAllVisible;
@property(readonly, nonatomic) IPXObjectsController *specificObjectsController; // @synthesize specificObjectsController=_specificObjectsController;
- (void).cxx_destruct;
- (id)makeTouchBar;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)imageForTransitionItem:(id)arg1;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (id)preferredTabBarItemSegmentForNavigationDestination:(id)arg1;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationDestination;
- (id)navigationIdentifier;
- (void)nearbyPhotosChanged:(id)arg1;
- (void)mapController:(id)arg1 didFinishExecutingPipelines:(id)arg2;
- (void)mapController:(id)arg1 didStartExecutingPipelines:(id)arg2;
- (void)mapViewDidFinishRendering:(id)arg1;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (void)dataSourceDidChange:(id)arg1;
- (void)mapRegionDidChange:(id)arg1;
- (id)selectionProviderCurrentSelection;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (long long)mapViewController:(id)arg1 updateOptionsForNewVersionAnnotations:(id)arg2;
- (void)mapViewController:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)toggleCurrentPipeline;
- (unsigned long long)mapTypeFromContentViewType:(long long)arg1;
- (void)_showVersionsInDetailBrowser:(id)arg1;
- (void)stopObservingObjectsController;
- (void)startObservingObjectsController;
- (void)viewFailedTransitionOutWithContext:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewFailedTransitionInWithContext:(id)arg1;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForTransitionToSelectedTabBarItemSegmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateToolbar;
- (void)setupMainToolbarButtons;
- (void)didBecomeInactive;
- (id)preferredFirstResponder;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_updateVisibleVersions;
- (void)_extractGridBrowser;
- (void)_embedGridBrowser;
- (void)_setupChildViewControllersAndPipelinesIfNeeded;
- (void)_updateNearbyPhotosToggleButton;
- (id)initWithLibrary:(id)arg1;
- (id)initWithLibrary:(id)arg1 specificObjectsController:(id)arg2 initiallyVisibleMapRect:(CDStruct_02837cd9)arg3 initiallyAllVisible:(BOOL)arg4 displayName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;

@end

