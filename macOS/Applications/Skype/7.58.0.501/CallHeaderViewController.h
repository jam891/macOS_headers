//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseConversationViewController.h"

@class BadgedGlyphButton, GlyphButton, NSLayoutConstraint, NSString, SKAccessibleTextField;

@interface CallHeaderViewController : BaseConversationViewController
{
    BOOL _isFullScreen;
    BOOL _isObservingSelf;
    BOOL _chatViewCollapsed;
    BOOL _sidebarCollapsed;
    double _buttonAccessibilityYOffset;
    GlyphButton *_fullScreenButton;
    GlyphButton *_zoomVideoButton;
    GlyphButton *_callLayoutModeButton;
    BadgedGlyphButton *_chatButton;
    BadgedGlyphButton *_sidebarButton;
    SKAccessibleTextField *_nameLabel;
    SKAccessibleTextField *_timeLabel;
    NSLayoutConstraint *_nameUpperConstraint;
    unsigned long long _controlSize;
}

+ (id)keyPathsForValuesAffectingTimeLabelToolTip;
+ (id)keyPathsForValuesAffectingAccessibleTimeLabelValue;
+ (id)keyPathsForValuesAffectingTimeLabelValue;
+ (id)keyPathsForValuesAffectingSidebarButtonGlyph;
+ (id)keyPathsForValuesAffectingFullScreenButtonTitle;
+ (id)keyPathsForValuesAffectingIsCallLayoutButtonHidden;
+ (id)keyPathsForValuesAffectingCallLayoutModeButtonTitle;
+ (id)keyPathsForValuesAffectingCallTitle;
@property unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property(retain) NSLayoutConstraint *nameUpperConstraint; // @synthesize nameUpperConstraint=_nameUpperConstraint;
@property __weak SKAccessibleTextField *timeLabel; // @synthesize timeLabel=_timeLabel;
@property __weak SKAccessibleTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property __weak BadgedGlyphButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property __weak BadgedGlyphButton *chatButton; // @synthesize chatButton=_chatButton;
@property __weak GlyphButton *callLayoutModeButton; // @synthesize callLayoutModeButton=_callLayoutModeButton;
@property __weak GlyphButton *zoomVideoButton; // @synthesize zoomVideoButton=_zoomVideoButton;
@property __weak GlyphButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property BOOL sidebarCollapsed; // @synthesize sidebarCollapsed=_sidebarCollapsed;
@property BOOL chatViewCollapsed; // @synthesize chatViewCollapsed=_chatViewCollapsed;
@property BOOL isObservingSelf; // @synthesize isObservingSelf=_isObservingSelf;
@property BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property double buttonAccessibilityYOffset; // @synthesize buttonAccessibilityYOffset=_buttonAccessibilityYOffset;
- (void).cxx_destruct;
- (void)toggleChatAction:(id)arg1;
- (BOOL)shouldAnimateToggleChatTransition;
- (void)toggleSidebarAction:(id)arg1;
- (void)callLayoutModeChange:(id)arg1;
- (void)toggleVideoZoom:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (id)timeLabelToolTip;
@property(readonly) NSString *accessibleTimeLabelValue;
@property(readonly) NSString *timeLabelValue;
- (void)updateButtonLabels;
- (void)updateSidebarButtonGlyph;
- (void)updateChatButtonGlyph;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateBackgroundColor;
- (id)buttons;
- (void)removeConversationObservers;
- (void)addConversationObservers;
- (void)stopObservingSelf;
- (void)startObservingSelf;
- (id)keyPathsForValuesAffectingButtonLabels;
@property(readonly) BOOL isCallLayoutButtonHidden;
@property(readonly) NSString *callLayoutModeButtonTitle;
@property(readonly) NSString *zoomVideoButtonTitle;
- (id)keyPathsForValuesAffectingSidebarButtonGlyph;
- (id)keyPathsForValuesAffectingChatButtonGlyph;
- (id)conversationManager;
@property(readonly) NSString *callTitle;
@property(readonly) NSString *fullScreenButtonTitle;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

