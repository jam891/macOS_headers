//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAdjustmentBrickTitledController.h"

#import "PADescriptionEditReceiver-Protocol.h"
#import "PAImageAssetClientDelegate-Protocol.h"

@class IPXLevelsHistogramView, NSButton, NSString, NSTextField, PAImageAssetClient, PAImageAssetType, PAImageItemController, _IPXAdjustmentsVibrantButton;

@interface IPXLevelsBrickController : IPXAdjustmentBrickTitledController <PAImageAssetClientDelegate, PADescriptionEditReceiver>
{
    NSString *_uniqueDefaultsKey;
    PAImageItemController *_imageItemController;
    PAImageAssetClient *_assetClient;
    PAImageAssetType *_assetType;
    _IPXAdjustmentsVibrantButton *_popoutButton;
    NSButton *_quadTonesButton;
    IPXLevelsHistogramView *_histogramView;
    NSTextField *_blackField;
    NSTextField *_quarterField;
    NSTextField *_grayField;
    NSTextField *_threeQuarterField;
    NSTextField *_whiteField;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)prepareForRemoval;
- (void)performAuto;
- (BOOL)hasAuto;
- (void)updateControlsWithOperation:(id)arg1;
- (void)loadControlsForOperation:(id)arg1;
- (void)initializeToDefaults;
- (void)_updateHistogramWithData:(id)arg1;
- (id)imageItemController;
- (void)didUpdateHistogram:(id)arg1 client:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_adaptToEditor;
- (void)_adaptViewToDarkLook:(id)arg1;
- (void)setUniqueDefaultsKey:(id)arg1;
- (void)setOperationUUID:(id)arg1;
- (void)histogramEndTracking:(id)arg1;
- (void)histogram:(id)arg1 parameterChangedValue:(id)arg2 forChannel:(int)arg3;
- (void)histogramBeginTracking:(id)arg1;
- (void)setInputUseAutoCalculatedValues:(BOOL)arg1;
- (void)setAutoEnabled:(BOOL)arg1 forOperation:(id)arg2;
- (BOOL)inputUseAutoCalculatedValues;
- (void)setInputAutoRGB:(BOOL)arg1;
- (void)setInputAutoLuminance:(BOOL)arg1;
- (void)changeWhiteField:(id)arg1;
- (void)changeHilightField:(id)arg1;
- (void)changeMidField:(id)arg1;
- (void)changeShadowField:(id)arg1;
- (void)changeBlackField:(id)arg1;
- (void)changeQuadtoneDisplay:(id)arg1;
- (void)changeActiveChannel:(id)arg1;
- (void)a_selectNewChannel:(id)arg1;
- (void)_performPerChannelAutoLevelsForHistogram:(id)arg1 operation:(id)arg2;
- (void)_performCombinedAutoLevelsForHistogram:(id)arg1 operation:(id)arg2;
- (void)_updateTextFields;
- (void)_updateTextFieldForHistogramKey:(id)arg1;
- (void)_textFieldChangedValue:(id)arg1 forKey:(id)arg2;
- (void)_endInteractiveChange;
- (void)_beginInteractiveChange;
- (int)_activeChannel;
- (id)_levelsOperation;
- (void)_updateHistogramValues;
- (void)_unregisterAssetClient;
- (id)_newAssetClient:(id)arg1 imageItemController:(id)arg2;
- (id)_newAssetType;
- (void)_registerAssetClient;
- (int)_histogramChannelForOperationKey:(id)arg1;
- (id)_histogramKeyForOperationKey:(id)arg1;
- (id)_operationKeyForHistogramKey:(id)arg1 channel:(int)arg2;
- (id)_showQuadTonesKey;
- (id)_activeChannelKey;
- (id)uniqueDefaultsKey;
- (void)loadView;
- (void)a_showPopoutMenu:(id)arg1;
- (void)addPopOutMenuItemsToMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)rightTitleButton;
- (BOOL)shouldAddExpanded;
- (BOOL)isExpandable;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 operationUUID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

