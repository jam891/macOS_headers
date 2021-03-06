//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSSearchFieldDelegate-Protocol.h"

@class IPXSearchField, NSArray;

@protocol IPXSearchFieldDelegate <NSSearchFieldDelegate>

@optional
- (NSArray *)accessibilitySharedFocusElementsForSearchFieldCell;
- (void)searchFieldIsInactive:(IPXSearchField *)arg1;
- (void)searchFieldIsActive:(IPXSearchField *)arg1;
- (BOOL)searchFieldAllowEmptySelection:(IPXSearchField *)arg1;
- (BOOL)searchFieldCancelSearch:(IPXSearchField *)arg1;
- (BOOL)searchFieldSelectCurrentResult:(IPXSearchField *)arg1;
- (void)searchFieldSelectPreviousResult:(IPXSearchField *)arg1;
- (void)searchFieldSelectNextResult:(IPXSearchField *)arg1;
- (void)searchFieldStringHasChanged:(IPXSearchField *)arg1;
@end

