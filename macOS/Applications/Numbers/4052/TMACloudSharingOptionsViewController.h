//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBox, NSButton, NSLayoutConstraint, NSPopUpButton, NSTextField, NSView, TSKCollaborationState;
@protocol TMACloudSharingOptionsViewControllerDelegate;

@interface TMACloudSharingOptionsViewController : NSViewController
{
    struct {
        unsigned int isOwner:1;
        unsigned int isPrivate:1;
    } _flags;
    id <TMACloudSharingOptionsViewControllerDelegate> _delegate;
    TSKCollaborationState *_collaborationState;
    NSView *_topButtonContainerView;
    NSBox *_topDivider;
    NSButton *_topImageButton;
    NSButton *_topTextButton;
    NSLayoutConstraint *_topButtonContainerViewHeightConstraint;
    NSView *_shareOptionsContainerView;
    NSBox *_shareOptionsDivider;
    NSButton *_shareOptionsDisclosureButton;
    NSButton *_shareOptionsLabelButton;
    NSTextField *_shareOptionsDetailTextField;
    NSPopUpButton *_accessButton;
    NSTextField *_accessLabel;
    NSPopUpButton *_permissionButton;
    NSTextField *_permissionLabel;
    NSLayoutConstraint *_shareOptionsDetailTextFieldBottomConstraint;
    NSLayoutConstraint *_shareOptionsContainerViewHeightConstraint;
    NSView *_bottomButtonContainerView;
    NSBox *_bottomButtonDivider;
    NSButton *_buttonCopyLink;
    NSButton *_stopSharingButton;
    NSLayoutConstraint *_buttonCopyLinkTrailingToButtonConstraint;
    NSLayoutConstraint *_buttonCopyLinkTrailingToContainerConstraint;
    NSLayoutConstraint *_bottomButtonContainerViewHeightConstraint;
    NSBox *_sheetFooterDivider;
}

@property(nonatomic) NSBox *sheetFooterDivider; // @synthesize sheetFooterDivider=_sheetFooterDivider;
@property(nonatomic) NSLayoutConstraint *bottomButtonContainerViewHeightConstraint; // @synthesize bottomButtonContainerViewHeightConstraint=_bottomButtonContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonCopyLinkTrailingToContainerConstraint; // @synthesize buttonCopyLinkTrailingToContainerConstraint=_buttonCopyLinkTrailingToContainerConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonCopyLinkTrailingToButtonConstraint; // @synthesize buttonCopyLinkTrailingToButtonConstraint=_buttonCopyLinkTrailingToButtonConstraint;
@property(nonatomic) NSButton *stopSharingButton; // @synthesize stopSharingButton=_stopSharingButton;
@property(nonatomic) NSButton *buttonCopyLink; // @synthesize buttonCopyLink=_buttonCopyLink;
@property(nonatomic) NSBox *bottomButtonDivider; // @synthesize bottomButtonDivider=_bottomButtonDivider;
@property(nonatomic) NSView *bottomButtonContainerView; // @synthesize bottomButtonContainerView=_bottomButtonContainerView;
@property(retain, nonatomic) NSLayoutConstraint *shareOptionsContainerViewHeightConstraint; // @synthesize shareOptionsContainerViewHeightConstraint=_shareOptionsContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *shareOptionsDetailTextFieldBottomConstraint; // @synthesize shareOptionsDetailTextFieldBottomConstraint=_shareOptionsDetailTextFieldBottomConstraint;
@property(nonatomic) NSTextField *permissionLabel; // @synthesize permissionLabel=_permissionLabel;
@property(nonatomic) NSPopUpButton *permissionButton; // @synthesize permissionButton=_permissionButton;
@property(nonatomic) NSTextField *accessLabel; // @synthesize accessLabel=_accessLabel;
@property(nonatomic) NSPopUpButton *accessButton; // @synthesize accessButton=_accessButton;
@property(nonatomic) NSTextField *shareOptionsDetailTextField; // @synthesize shareOptionsDetailTextField=_shareOptionsDetailTextField;
@property(nonatomic) NSButton *shareOptionsLabelButton; // @synthesize shareOptionsLabelButton=_shareOptionsLabelButton;
@property(nonatomic) NSButton *shareOptionsDisclosureButton; // @synthesize shareOptionsDisclosureButton=_shareOptionsDisclosureButton;
@property(nonatomic) NSBox *shareOptionsDivider; // @synthesize shareOptionsDivider=_shareOptionsDivider;
@property(nonatomic) NSView *shareOptionsContainerView; // @synthesize shareOptionsContainerView=_shareOptionsContainerView;
@property(nonatomic) NSLayoutConstraint *topButtonContainerViewHeightConstraint; // @synthesize topButtonContainerViewHeightConstraint=_topButtonContainerViewHeightConstraint;
@property(nonatomic) NSButton *topTextButton; // @synthesize topTextButton=_topTextButton;
@property(nonatomic) NSButton *topImageButton; // @synthesize topImageButton=_topImageButton;
@property(nonatomic) NSBox *topDivider; // @synthesize topDivider=_topDivider;
@property(nonatomic) NSView *topButtonContainerView; // @synthesize topButtonContainerView=_topButtonContainerView;
@property(retain, nonatomic) TSKCollaborationState *collaborationState; // @synthesize collaborationState=_collaborationState;
@property(nonatomic) id <TMACloudSharingOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSheetClicked:(id)arg1;
- (void)didChangeAccess:(id)arg1;
- (void)didChangePermission:(id)arg1;
- (void)stopSharingClicked:(id)arg1;
- (void)copyLinkClicked:(id)arg1;
- (void)showInvitationUI:(id)arg1;
- (void)sheetTopTextButtonClicked:(id)arg1;
- (void)shareOptionsLabelButtonClicked:(id)arg1;
- (void)shareOptionsDisclosureButtonClicked:(id)arg1;
- (void)updateVisibilityAndConstraints;
- (void)populateButton:(id)arg1 menuItemStrings:(id)arg2 selectedIndex:(long long)arg3;
- (void)updateViewConfiguration;
- (double)totalConstraintHeight;
- (struct CGSize)preferredContentSize;
- (void)setTitleColorForButton:(id)arg1;
- (void)setColorForDivider:(id)arg1;
@property(nonatomic, getter=isTopDividerHidden) BOOL topDividerHidden;
- (BOOL)isSheet;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;

@end

