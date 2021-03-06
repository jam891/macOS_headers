//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "PHEditingRemoteViewControllerDelegate-Protocol.h"

@class IPXEditPluginSession, NSExtension, NSItemProvider, NSLayoutConstraint, NSString, NSView, PHEditingRemoteViewController;
@protocol IPXPluginHostViewControllerDelegate, NSCopying;

@interface IPXPluginHostViewController : IPXViewController <PHEditingRemoteViewControllerDelegate>
{
    PHEditingRemoteViewController *_remoteViewController;
    IPXEditPluginSession *_session;
    BOOL _unadjustedButUseOutput;
    NSLayoutConstraint *_topLayoutGuideConstraint;
    id <NSCopying> _requestIdentifier;
    NSItemProvider *_unadjustedItemProvider;
    NSItemProvider *_adjustedItemProvider;
    id <IPXPluginHostViewControllerDelegate> _delegate;
    NSView *_containerView;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_maximumWidthConstraint;
    NSLayoutConstraint *_maximumHeightConstraint;
    NSString *_mediaTypeString;
    double _pluginInitTime;
    double _pluginOpenTime;
    double _pluginSaveTime;
    NSString *_pluginFailureReason;
}

@property(copy) NSString *pluginFailureReason; // @synthesize pluginFailureReason=_pluginFailureReason;
@property double pluginSaveTime; // @synthesize pluginSaveTime=_pluginSaveTime;
@property double pluginOpenTime; // @synthesize pluginOpenTime=_pluginOpenTime;
@property double pluginInitTime; // @synthesize pluginInitTime=_pluginInitTime;
@property(copy) NSString *mediaTypeString; // @synthesize mediaTypeString=_mediaTypeString;
@property(retain, nonatomic) NSLayoutConstraint *maximumHeightConstraint; // @synthesize maximumHeightConstraint=_maximumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // @synthesize maximumWidthConstraint=_maximumWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <IPXPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL unadjustedButUseOutput; // @synthesize unadjustedButUseOutput=_unadjustedButUseOutput;
@property(readonly, nonatomic) NSItemProvider *adjustedItemProvider; // @synthesize adjustedItemProvider=_adjustedItemProvider;
@property(readonly, nonatomic) NSItemProvider *unadjustedItemProvider; // @synthesize unadjustedItemProvider=_unadjustedItemProvider;
@property(readonly, nonatomic) id <NSCopying> requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain) NSLayoutConstraint *topLayoutGuideConstraint; // @synthesize topLayoutGuideConstraint=_topLayoutGuideConstraint;
- (void).cxx_destruct;
- (id)_configureEditSession:(id)arg1 forVersion:(id)arg2;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)disconnect;
- (BOOL)shouldShowCancelConfirmation;
- (void)_cancelSession;
- (void)_saveSessionWithOutput:(id)arg1;
- (void)cancelChanges;
- (void)saveChanges;
- (id)_extensionVendorProxy;
- (id)_hostContext;
- (void)_prepareInitialPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setupRemoteViewController:(id)arg1;
- (void)loadRemoteViewControllerCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillLayout;
@property(readonly, nonatomic) NSExtension *extension;
- (id)initWithVersion:(id)arg1 extensionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

