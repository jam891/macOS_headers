//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "StylesBase.h"

@class NSColor, ShadowStyles, TextStyles;

@interface LinkLabelStyles : StylesBase
{
    NSColor *_hotColor;
    NSColor *_pressedColor;
}

@property(retain, nonatomic) NSColor *pressedColor; // @synthesize pressedColor=_pressedColor;
@property(retain, nonatomic) NSColor *hotColor; // @synthesize hotColor=_hotColor;

// Remaining properties
@property(copy, nonatomic) ShadowStyles *shadow; // @dynamic shadow;
@property(copy, nonatomic) TextStyles *text; // @dynamic text;

@end

