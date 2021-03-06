//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

@interface IPXBrowserController : IPXNavigationParticipatingViewController
{
    BOOL _isRegisteredForCaptionNotifications;
}

- (void)_captionEditingEnded;
- (void)_captionEditingStarted;
- (void)_unregisterForCaptionNotifications;
- (void)_registerForCaptionNotifications;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (BOOL)performsCaptionEditing;
- (BOOL)supportsInspector;
- (void)updateFirstResponder;
- (id)secondaryToolbarViewController;
- (void)updateToolbar;
- (BOOL)allowUserInterfaceItem:(id)arg1;
- (BOOL)isModal;
- (void)postSelectionChangedNotificationForCause:(id)arg1;
- (id)library;
- (id)currentProject;
- (void)chooseController:(id)arg1 relinquishingOwnership:(BOOL)arg2 selectedVersions:(id)arg3 primarySelection:(id)arg4 withEditorControllerOptions:(id)arg5;
- (BOOL)_requiresWindowForTransitionPreparation;
- (void)viewDidLoad;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;

@end

