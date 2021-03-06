//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTabViewItem.h>

@class NSArray, NSColor;

@interface NSWindowTabViewItem : NSTabViewItem
{
    BOOL _pinned;
    NSArray *_accessoryViews;
    NSColor *_themeColor;
}

@property(readonly) NSColor *themeColor; // @synthesize themeColor=_themeColor;
@property(getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(readonly, copy) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
- (void).cxx_destruct;
- (void)removeAccessoryView:(id)arg1;
- (void)insertAccessoryView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAccessoryView:(id)arg1;
- (id)_keysToObserve;
- (id)_copy;
- (void)_assignPropertiesTo:(id)arg1;

@end

