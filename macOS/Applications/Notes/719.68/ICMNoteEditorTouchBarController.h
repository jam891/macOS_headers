//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMAppTouchBarController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class ICMNoteEditorController, NSButton, NSCandidateListTouchBarItem, NSCustomTouchBarItem, NSPopoverTouchBarItem, NSSet, NSStackView, NSString, NSTouchBar, NSView, NSWindowController;

@interface ICMNoteEditorTouchBarController : ICMAppTouchBarController <NSTouchBarDelegate>
{
    NSSet *_textViewProvidedIdentifiers;
    ICMNoteEditorController *_editorController;
    NSButton *_indentButton;
    NSButton *_outdentButton;
    NSButton *_titleButton;
    NSButton *_headingButton;
    NSButton *_bodyButton;
    NSButton *_bulletedListButton;
    NSButton *_dashListButton;
    NSButton *_numberedListButton;
    NSStackView *_indentStackView;
    NSCustomTouchBarItem *_addNoteBarItem;
    NSPopoverTouchBarItem *_stylesBarItem;
    NSCustomTouchBarItem *_checklistBarItem;
    NSCustomTouchBarItem *_indentTextBarItem;
    NSCandidateListTouchBarItem *_candidateBarItem;
    NSTouchBar *_editingTouchBar;
    NSView *_textViewBIUButton;
}

@property(retain, nonatomic) NSView *textViewBIUButton; // @synthesize textViewBIUButton=_textViewBIUButton;
@property(retain, nonatomic) NSTouchBar *editingTouchBar; // @synthesize editingTouchBar=_editingTouchBar;
@property(retain, nonatomic) NSCandidateListTouchBarItem *candidateBarItem; // @synthesize candidateBarItem=_candidateBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *indentTextBarItem; // @synthesize indentTextBarItem=_indentTextBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *checklistBarItem; // @synthesize checklistBarItem=_checklistBarItem;
@property(retain, nonatomic) NSPopoverTouchBarItem *stylesBarItem; // @synthesize stylesBarItem=_stylesBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *addNoteBarItem; // @synthesize addNoteBarItem=_addNoteBarItem;
@property(retain, nonatomic) NSStackView *indentStackView; // @synthesize indentStackView=_indentStackView;
@property(retain, nonatomic) NSButton *numberedListButton; // @synthesize numberedListButton=_numberedListButton;
@property(retain, nonatomic) NSButton *dashListButton; // @synthesize dashListButton=_dashListButton;
@property(retain, nonatomic) NSButton *bulletedListButton; // @synthesize bulletedListButton=_bulletedListButton;
@property(retain, nonatomic) NSButton *bodyButton; // @synthesize bodyButton=_bodyButton;
@property(retain, nonatomic) NSButton *headingButton; // @synthesize headingButton=_headingButton;
@property(retain, nonatomic) NSButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) NSButton *outdentButton; // @synthesize outdentButton=_outdentButton;
@property(retain, nonatomic) NSButton *indentButton; // @synthesize indentButton=_indentButton;
@property(nonatomic) __weak ICMNoteEditorController *editorController; // @synthesize editorController=_editorController;
@property(readonly, nonatomic) NSSet *textViewProvidedIdentifiers; // @synthesize textViewProvidedIdentifiers=_textViewProvidedIdentifiers;
- (void).cxx_destruct;
- (id)singleSelectedTextAttachment;
- (BOOL)isSingleSmallSizeCapableAttachmentSelected;
- (void)updateChecklistButtonAccessibilityValue;
- (void)dismissStylePopoverIfNecessary;
- (void)updateTextTouchBarItems;
- (void)updateStyleButtons;
- (void)styleCollapsedButtonPressed:(id)arg1;
- (void)styleButtonPressed:(id)arg1;
- (void)thumbnailViewEnabledButtonPressed:(id)arg1;
- (void)addNoteButtonPressed:(id)arg1;
- (void)checklistButtonPressed:(id)arg1;
- (void)outdentButtonPressed:(id)arg1;
- (void)indentButtonPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBar;
- (id)textViewProvidedItemIdentifiers;
@property(readonly, nonatomic) NSWindowController *windowController;
@property(readonly, nonatomic) BOOL isRTL;
@property(readonly, nonatomic) BOOL isInMainWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithEditorController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

