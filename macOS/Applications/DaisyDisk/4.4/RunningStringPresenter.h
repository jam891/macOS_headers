//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, NSAttributedString, NSString, NSTimer, RunningStringPresenterStyles;

@interface RunningStringPresenter : NSObject <CALayerDelegate>
{
    CALayer *_rootLayer;
    CALayer *_clipLayer;
    CALayer *_movingLayer;
    NSTimer *_delayTimer;
    BOOL _isAnimating;
    RunningStringPresenterStyles *_styles;
    NSAttributedString *_text;
    struct CGSize _textSize;
}

@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic) RunningStringPresenterStyles *styles; // @synthesize styles=_styles;
- (void)resetZoomToFrame;
- (void)zoomToFrame:(struct CGRect)arg1 duration:(double)arg2;
@property(nonatomic, setter=setHidden:) BOOL isHidden;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawClipMaskInBounds:(struct CGRect)arg1;
- (void)drawTextInBounds:(struct CGRect)arg1;
- (void)delayTimerDidFire;
- (void)stopAnimation;
- (void)startAnimationAfterDelay:(BOOL)arg1;
- (void)startAnimation;
- (void)refreshClipLayer;
- (void)redrawText;
- (void)resetDelayTimer;
@property(nonatomic) struct CGRect frame;
- (void)removeFromSuperlayer;
- (void)addToSuperlayer:(id)arg1;
- (void)rebuildTextLayers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

