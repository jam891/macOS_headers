//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSMutableArray, NSTextField, NSView;

@interface CNAutocompleteHeaderView : NSTableCellView
{
    NSTextField *_label;
    NSView *_dividerLine;
    NSMutableArray *_headerConstraints;
}

@property(retain) NSMutableArray *headerConstraints; // @synthesize headerConstraints=_headerConstraints;
@property(retain) NSView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setLabelString:(id)arg1;
- (void)showDividerLine:(BOOL)arg1;
- (void)updateHeaderConstraints;
- (id)init;
- (id)initWithLabelString:(id)arg1 showsDividerLine:(BOOL)arg2;

@end

