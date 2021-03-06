//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSTabView, NSTabViewItem, PreferencesTabViewController;

@interface PreferencesWindowController : NSWindowController
{
    PreferencesTabViewController *_tabViewController;
    NSTabView *_tabView;
    NSTabViewItem *_generalTabViewItem;
    NSTabViewItem *_accountsTabViewItem;
    NSTabViewItem *_cameraTabViewItem;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)delayedLaunchComplete:(id)arg1;
+ (void)finishStateRestoration;
+ (id)sharedPreferencesWindowControllerForceCreate:(BOOL)arg1;
@property(retain) NSTabViewItem *cameraTabViewItem; // @synthesize cameraTabViewItem=_cameraTabViewItem;
@property(retain) NSTabViewItem *accountsTabViewItem; // @synthesize accountsTabViewItem=_accountsTabViewItem;
@property(retain) NSTabViewItem *generalTabViewItem; // @synthesize generalTabViewItem=_generalTabViewItem;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain) PreferencesTabViewController *tabViewController; // @synthesize tabViewController=_tabViewController;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)_accountActivationDidChange:(id)arg1;
- (void)_setupCameraPreferencesPaneIfNeeded;
- (id)showPreferencesPanelWithIdentifier:(id)arg1;

@end

