//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class NSArray, NSString, NSWindow;

@interface SPTClientWindowDelegate : NSObject <NSWindowDelegate>
{
    NSWindow *window_;
    BOOL _shouldHideAfterExitingFullscreen;
    NSArray *_dummyArrayForWindowAnimation;
    BOOL _moving_window_buttons;
}

+ (BOOL)inlineWindowButtons;
- (void)cleanup:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)fixTrackingAreaInWindow:(id)arg1;
- (void)positionButton:(id)arg1 inWindow:(id)arg2 offset:(double)arg3 newGLUEHeaders:(BOOL)arg4;
- (void)positionButtonsInWindow:(id)arg1;
- (void)positionButtonsNotification:(id)arg1;
- (void)alwaysPositionButton:(id)arg1;
- (void)onLoginStateChanged:(BOOL)arg1;
- (void)alwaysPositionButtonsInWindow:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)applicationDidUnhide:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)updateMenu;
- (void)notifyConsoleMessage:(id)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

