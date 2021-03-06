//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUTableCellView.h"

#import "NSMenuDelegate-Protocol.h"

@class FLUAvatarButton, FLUHoverButton, FLUImageView, FLULabel, FLUUser, FLUView, NSString;
@protocol FLUMediaProfileUserTableCellViewDelegate;

@interface FLUMediaProfileUserTableCellView : FLUTableCellView <NSMenuDelegate>
{
    BOOL _firstRow;
    BOOL _lastRow;
    BOOL _disableBackgroundUnderlay;
    BOOL _disableAddButton;
    BOOL _unseenPosts;
    BOOL _onState;
    FLUUser *_user;
    id <FLUMediaProfileUserTableCellViewDelegate> _delegate;
    unsigned long long _viewMode;
    FLUAvatarButton *_avatarButton;
    FLULabel *_usernameLabel;
    FLULabel *_nameLabel;
    FLUImageView *_verifiedImageView;
    FLUHoverButton *_acceptButton;
    FLUHoverButton *_ignoreButton;
    FLUHoverButton *_statusButton;
    FLUHoverButton *_favouriteButton;
    FLUHoverButton *_toggleButton;
    FLULabel *_requestedLabel;
    FLUView *_selectionOverlayView;
    FLUView *_indicatorView;
}

+ (double)viewHeight;
@property(nonatomic) BOOL onState; // @synthesize onState=_onState;
@property(nonatomic) BOOL unseenPosts; // @synthesize unseenPosts=_unseenPosts;
@property(retain, nonatomic) FLUView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) FLUView *selectionOverlayView; // @synthesize selectionOverlayView=_selectionOverlayView;
@property(retain, nonatomic) FLULabel *requestedLabel; // @synthesize requestedLabel=_requestedLabel;
@property(retain, nonatomic) FLUHoverButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) FLUHoverButton *favouriteButton; // @synthesize favouriteButton=_favouriteButton;
@property(retain, nonatomic) FLUHoverButton *statusButton; // @synthesize statusButton=_statusButton;
@property(retain, nonatomic) FLUHoverButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) FLUHoverButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) FLUImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) FLULabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) FLULabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) FLUAvatarButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(nonatomic) BOOL disableAddButton; // @synthesize disableAddButton=_disableAddButton;
@property(nonatomic) BOOL disableBackgroundUnderlay; // @synthesize disableBackgroundUnderlay=_disableBackgroundUnderlay;
@property(nonatomic) BOOL lastRow; // @synthesize lastRow=_lastRow;
@property(nonatomic) BOOL firstRow; // @synthesize firstRow=_firstRow;
@property(nonatomic) unsigned long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) __weak id <FLUMediaProfileUserTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FLUUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)nameAttributes;
- (id)usernameAttributes;
- (void)refreshView;
- (void)drawRect:(struct CGRect)arg1;
- (void)didPressToggleButton:(id)arg1;
- (void)didPressFavouriteButton:(id)arg1;
- (void)didPressStatusButton:(id)arg1;
- (void)didPressIgnoreButton:(id)arg1;
- (void)didPressAcceptButton:(id)arg1;
- (void)didPressAvatarButton:(id)arg1;
- (void)setOnState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUser:(id)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)copy:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)prepareForReuse;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

