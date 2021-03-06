//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface RoundContent : NSView
{
    NSColor *border;
    NSColor *contentFill;
    BOOL waitingToInvalidateShadow;
    BOOL blurWindow;
    double blurAmount;
}

+ (void)initialize;
@property BOOL waitingToInvalidateShadow; // @synthesize waitingToInvalidateShadow;
@property(retain) NSColor *contentFill; // @synthesize contentFill;
@property(retain) NSColor *border; // @synthesize border;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGPath *)createContentPath:(struct CGRect)arg1;
- (void)invalidateWindowShadow:(id)arg1;
@property double blurAmount; // @dynamic blurAmount;
@property BOOL blurWindow; // @dynamic blurWindow;
- (void)dealloc;

@end

