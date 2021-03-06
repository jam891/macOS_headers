//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSArray, NSButton, NSPathControl, NSProgressIndicator, NSTextField, NSView;

@interface FBProgressCell : NSActionCell
{
    NSView *backgroundView;
    NSTextField *titleField;
    NSTextField *taskField;
    NSPathControl *pathControl;
    NSProgressIndicator *progressIndicator;
    NSButton *abortButton;
    NSArray *_topLevelObjects;
    BOOL abortRequested;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)cellSize;
- (id)progressIndicator;
- (id)taskField;
- (id)titleField;
- (BOOL)abortRequested;
- (id)description;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)isIndeterminate;
- (void)setDoubleValue:(double)arg1;
- (void)updateDoubleValue:(double)arg1;
@property double maxValue;
- (void)updateURL:(id)arg1;
- (void)updateWithURL:(id)arg1;
- (void)updateWithText:(id)arg1;
- (void)updateText:(id)arg1;
- (void)abort:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)stopUsing;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

