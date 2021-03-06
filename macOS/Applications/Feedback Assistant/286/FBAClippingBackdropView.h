//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface FBAClippingBackdropView : NSView
{
    BOOL _shouldDrawInverted;
    NSImage *_crosshairImage;
    struct CGPoint _cursorLocation;
    struct CGRect _selectedRegion;
}

@property BOOL shouldDrawInverted; // @synthesize shouldDrawInverted=_shouldDrawInverted;
@property(retain) NSImage *crosshairImage; // @synthesize crosshairImage=_crosshairImage;
@property(nonatomic) struct CGPoint cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(nonatomic) struct CGRect selectedRegion; // @synthesize selectedRegion=_selectedRegion;
- (void).cxx_destruct;
- (struct CGRect)_crosshairRectForCursorLocation:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

