//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage;

@interface PSMRolloverButton : NSButton
{
    NSImage *_rolloverImage;
    NSImage *_usualImage;
    long long _myTrackingRectTag;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetCursorRects;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)removeTrackingRect;
- (void)addTrackingRect;
- (id)rolloverImage;
- (void)setRolloverImage:(id)arg1;
- (id)usualImage;
- (void)setUsualImage:(id)arg1;
- (void)dealloc;

@end

