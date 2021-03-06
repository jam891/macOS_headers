//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSArray;
@protocol TMAMediaBrowserOutlineViewDataSource, TMAMediaBrowserOutlineViewDelegate;

@interface TMAMediaBrowserOutlineView : NSOutlineView
{
    NSArray *_previouslySelectedItemIdentifiers;
    unsigned long long _previouslySelectedItemSiblingIndex;
    long long _previouslySelectedRow;
    struct CGPoint _rowOffset;
}

@property(nonatomic) struct CGPoint rowOffset; // @synthesize rowOffset=_rowOffset;
- (void)restoreSelectionAfterReload;
- (void)reloadData;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property __weak id <TMAMediaBrowserOutlineViewDataSource> dataSource; // @dynamic dataSource;
@property __weak id <TMAMediaBrowserOutlineViewDelegate> delegate; // @dynamic delegate;

@end

