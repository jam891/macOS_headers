//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import "NSAnimationDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class NSString, NSViewAnimation;

@interface NSPrefSearchField : NSSearchField <NSTextFieldDelegate, NSAnimationDelegate>
{
    NSViewAnimation *mAnimation;
    BOOL mWillLikelyAnimate;
}

- (void).cxx_destruct;
- (id)accessibilitySharedFocusElements;
@property(readonly) BOOL isAnimating; // @dynamic isAnimating;
- (void)animationDidEnd:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (BOOL)becomeFirstResponder;
- (void)_delayedShowSearchWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

