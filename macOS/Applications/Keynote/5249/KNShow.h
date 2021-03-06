//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"

@class KNRecording, KNSlideTree, KNSoundtrack, KNTheme, KNUIState, TSSStylesheet;

@interface KNShow : TSPObject <TSDKeyValueProxyVending, GSSPAutoEncodable>
{
    KNUIState *_uiState;
    KNTheme *_theme;
    KNSlideTree *_slideTree;
    TSSStylesheet *_stylesheet;
    KNRecording *_recording;
    struct CGSize _size;
    double _autoplayTransitionDelay;
    double _autoplayBuildDelay;
    double _idleTimerDelay;
    long long _mode;
    BOOL _loopPresentation;
    BOOL _idleTimerActive;
    BOOL _automaticallyPlaysUponOpen;
    BOOL _needsToUpdateThumbnails;
    BOOL _wasImportedAsPreUFF;
    BOOL _localizeDocument;
    KNSoundtrack *_soundtrack;
}

+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumHeight;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)minimumWidth;
+ (id)showWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(nonatomic) BOOL localizeDocument; // @synthesize localizeDocument=_localizeDocument;
@property(readonly, nonatomic) BOOL wasImportedAsPreUFF; // @synthesize wasImportedAsPreUFF=_wasImportedAsPreUFF;
@property(readonly, nonatomic) BOOL needsToUpdateThumbnails; // @synthesize needsToUpdateThumbnails=_needsToUpdateThumbnails;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) KNTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
- (id)slideNodesAtIndexes:(id)arg1;
- (id)slideNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (void)willModify;
- (struct CGPoint)center;
- (id)initWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(readonly, nonatomic) BOOL slideNumbersVisible;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
@property(retain, nonatomic) KNRecording *recording;
@property(retain, nonatomic) KNSoundtrack *soundtrack;
@property(nonatomic) BOOL automaticallyPlaysUponOpen;
@property(nonatomic) BOOL idleTimerActive;
@property(nonatomic) BOOL loopPresentation;
@property(nonatomic) long long mode;
@property(nonatomic) double idleTimerDelay;
@property(nonatomic) double autoplayBuildDelay;
@property(nonatomic) double autoplayTransitionDelay;
@property(retain, nonatomic) KNSlideTree *slideTree;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShowArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive *)arg1 unarchiver:(id)arg2;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)populateGSSPShow:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

