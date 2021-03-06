//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAGeneralPreferencesPaneController.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface KNMacGeneralPreferencesPaneController : TMAGeneralPreferencesPaneController
{
    NSPopUpButton *mOutlineViewFontPopUp;
    NSButton *mMovieOptimizeCheckbox;
    NSButton *mMediaCopyCheckbox;
    NSTextField *_editingLabel;
    NSButton *_scalePlacedImagesCheckbox;
}

@property(nonatomic) NSButton *scalePlacedImagesCheckbox; // @synthesize scalePlacedImagesCheckbox=_scalePlacedImagesCheckbox;
@property(nonatomic) NSTextField *editingLabel; // @synthesize editingLabel=_editingLabel;
@property(nonatomic) NSButton *mediaCopyCheckbox; // @synthesize mediaCopyCheckbox=mMediaCopyCheckbox;
@property(nonatomic) NSButton *movieOptimizeCheckbox; // @synthesize movieOptimizeCheckbox=mMovieOptimizeCheckbox;
@property(nonatomic) NSPopUpButton *outlineViewFontPopUp; // @synthesize outlineViewFontPopUp=mOutlineViewFontPopUp;
- (void)copyMediaIntoDocumentToggle:(id)arg1;
- (void)changeOutlineViewFont:(id)arg1;
- (id)label;
- (id)toolbarIconName;
- (id)identifier;
- (id)nibName;
- (void)p_updateUserDefaultsBasedOnCopyMediaState;
- (void)paneWillAppear;
- (void)p_addConstraints;
- (Class)templatePreferencesViewControllerClass;

@end

