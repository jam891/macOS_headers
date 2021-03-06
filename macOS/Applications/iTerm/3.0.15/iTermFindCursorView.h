//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTimer;
@protocol iTermFindCursorViewDelegate;

@interface iTermFindCursorView : NSView
{
    NSTimer *_findCursorTeardownTimer;
    BOOL _autohide;
    BOOL _stopping;
    id <iTermFindCursorViewDelegate> _delegate;
    struct CGPoint _cursorPosition;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL stopping; // @synthesize stopping=_stopping;
@property(nonatomic) BOOL autohide; // @synthesize autohide=_autohide;
@property(nonatomic) struct CGPoint cursorPosition; // @synthesize cursorPosition=_cursorPosition;
@property(nonatomic) id <iTermFindCursorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startCloseFindCursorWindow:(id)arg1;
- (void)stopTearDownTimer;
- (void)startTearDownTimer;

@end

