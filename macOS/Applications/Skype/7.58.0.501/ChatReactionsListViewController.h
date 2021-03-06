//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "EnhancedImageViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArrayController, NSBox, NSLayoutConstraint, NSString, ReactionTableView, SKLinkButton, _TtC5Skype8Reaction;

@interface ChatReactionsListViewController : NSViewController <NSTableViewDelegate, EnhancedImageViewDelegate>
{
    BOOL _showsLearnMore;
    _TtC5Skype8Reaction *_reaction;
    ReactionTableView *_reactionListTableView;
    NSArrayController *_arrayController;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_topConstraint;
    SKLinkButton *_learnMoreButton;
    NSBox *_line;
    NSString *_telemetryAction;
}

@property(retain) NSString *telemetryAction; // @synthesize telemetryAction=_telemetryAction;
@property __weak NSBox *line; // @synthesize line=_line;
@property __weak SKLinkButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property __weak ReactionTableView *reactionListTableView; // @synthesize reactionListTableView=_reactionListTableView;
@property(nonatomic, getter=isShowingLearnMore) BOOL showsLearnMore; // @synthesize showsLearnMore=_showsLearnMore;
@property(retain) _TtC5Skype8Reaction *reaction; // @synthesize reaction=_reaction;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (id)preferredFirstResponder;
- (void)learnMore:(id)arg1;
- (void)avatarImageViewAction:(id)arg1;
- (void)updateViews;
- (void)viewDidLoad;
- (id)initWithReaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

