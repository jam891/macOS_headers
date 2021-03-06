//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ConversationViewController, MailStackViewController, MessageSelection, MessageViewController, NSArray, NSView, NoSelectionPlaceholderViewController, ViewingPaneView;

@interface ViewingPaneViewController : NSViewController
{
    MailStackViewController *_stackViewController;
    BOOL _disableSnapshots;
    BOOL _vibrant;
    BOOL _showMailboxNames;
    NoSelectionPlaceholderViewController *_placeholderViewController;
    ConversationViewController *_conversationViewController;
    NSView *_snapshotView;
}

@property BOOL showMailboxNames; // @synthesize showMailboxNames=_showMailboxNames;
@property(nonatomic) BOOL vibrant; // @synthesize vibrant=_vibrant;
@property(retain, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) ConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(retain, nonatomic) NoSelectionPlaceholderViewController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property BOOL disableSnapshots; // @synthesize disableSnapshots=_disableSnapshots;
- (void).cxx_destruct;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)currentlyReadMessage;
- (void)_snapshotTimeout;
- (void)_viewControllerDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) __weak NSView *accessibilityLinkTarget;
- (void)setVertical:(BOOL)arg1;
- (void)_presentSnapshotForPendingView:(id)arg1 loadingOption:(long long)arg2 titlebarAligned:(BOOL)arg3;
- (void)_displayStackView;
- (void)_displayConversationView;
- (void)_displayNoSelectionPlaceholder;
@property(readonly, nonatomic) MessageViewController *actionViewController;
@property(readonly, copy, nonatomic) NSArray *actionConversationMembers;
- (id)actionMessagesIncludingDuplicates:(BOOL)arg1;
@property(readonly, nonatomic) MessageSelection *currentMessageSelection;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(retain, nonatomic) MailStackViewController *stackViewController;
@property(retain) MessageSelection *representedObject;
@property(retain) ViewingPaneView *view;
- (void)loadView;
- (void)dealloc;
- (void)_viewingPaneViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

