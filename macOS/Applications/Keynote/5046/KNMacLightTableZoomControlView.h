//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSSlider;

@interface KNMacLightTableZoomControlView : NSView
{
    NSSlider *mSlider;
    NSButton *mMinButton;
    NSButton *mMaxButton;
}

@property(readonly, nonatomic) NSButton *maxButton; // @synthesize maxButton=mMaxButton;
@property(readonly, nonatomic) NSButton *minButton; // @synthesize minButton=mMinButton;
@property(readonly, nonatomic) NSSlider *slider; // @synthesize slider=mSlider;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

