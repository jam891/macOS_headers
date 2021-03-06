//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ChatDetailedBaseCollectionViewItem.h"

#import "SearchResultsHighlighting-Protocol.h"

@class EnhancedImageView, NSArray, NSButton, NSImage, NSString, NSURL, QLPreviewPanel, SKMediaDocument, SKMediaDocumentDownloadTask, _TtC5Skype26ChatTextSelectionTextField;

@interface SearchCloudFileTransferCollectionViewItem : ChatDetailedBaseCollectionViewItem <SearchResultsHighlighting>
{
    BOOL _openInQuickLookButtonHidden;
    BOOL _revealInFinderButtonHidden;
    BOOL _openInQuickLookPending;
    BOOL _revealInFinderPending;
    BOOL _observingSelf;
    NSArray *_highlightRanges;
    NSImage *_fileIconImage;
    _TtC5Skype26ChatTextSelectionTextField *_fileNameView;
    NSButton *_quickLookButton;
    NSButton *_revealButton;
    EnhancedImageView *_iconView;
    QLPreviewPanel *_previewPanel;
    SKMediaDocument *_mediaDocument;
    SKMediaDocumentDownloadTask *_originalDownloadTask;
}

+ (id)keyPathsForValuesAffectingFileName;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)originalFileProfileForMediaDocument:(id)arg1;
+ (struct CGSize)viewSizeForMessage:(id)arg1 inBounds:(struct CGRect)arg2 style:(id)arg3;
+ (BOOL)shouldHideIconForMessage:(id)arg1 style:(id)arg2 compact:(BOOL)arg3;
+ (BOOL)shouldHideTimestampForMessage:(id)arg1 style:(id)arg2 compact:(BOOL)arg3;
+ (BOOL)shouldRemoveTitleForMessage:(id)arg1 style:(id)arg2;
@property(nonatomic, getter=isObservingSelf) BOOL observingSelf; // @synthesize observingSelf=_observingSelf;
@property(nonatomic, getter=isRevealInFinderPending) BOOL revealInFinderPending; // @synthesize revealInFinderPending=_revealInFinderPending;
@property(nonatomic, getter=isOpenInQuickLookPending) BOOL openInQuickLookPending; // @synthesize openInQuickLookPending=_openInQuickLookPending;
@property(retain, nonatomic) SKMediaDocumentDownloadTask *originalDownloadTask; // @synthesize originalDownloadTask=_originalDownloadTask;
@property(retain, nonatomic) SKMediaDocument *mediaDocument; // @synthesize mediaDocument=_mediaDocument;
@property(readonly, nonatomic, getter=isRevealInFinderButtonHidden) BOOL revealInFinderButtonHidden; // @synthesize revealInFinderButtonHidden=_revealInFinderButtonHidden;
@property(readonly, nonatomic, getter=isOpenInQuickLookButtonHidden) BOOL openInQuickLookButtonHidden; // @synthesize openInQuickLookButtonHidden=_openInQuickLookButtonHidden;
@property(retain, nonatomic) QLPreviewPanel *previewPanel; // @synthesize previewPanel=_previewPanel;
@property(retain, nonatomic) EnhancedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSButton *revealButton; // @synthesize revealButton=_revealButton;
@property(retain, nonatomic) NSButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
@property(retain, nonatomic) _TtC5Skype26ChatTextSelectionTextField *fileNameView; // @synthesize fileNameView=_fileNameView;
@property(readonly, nonatomic) NSImage *fileIconImage; // @synthesize fileIconImage=_fileIconImage;
@property(copy, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
- (void).cxx_destruct;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *previewItemTitle;
- (void)quickLookWithEvent:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)closeQuickLookPanel;
- (void)revealInFinderAction:(id)arg1;
- (void)openInQuickLook:(id)arg1;
@property(readonly, nonatomic) NSString *fileName;
- (id)iconImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingSelf;
- (void)_startObservingSelf;
- (void)updateHighlightInAllItems;
- (void)updateBackgroundColor;
- (id)textSelectionTextFields;
- (void)setRepresentedObject:(id)arg1;
- (void)updateLayout;
- (void)loadView;
- (void)dealloc;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

