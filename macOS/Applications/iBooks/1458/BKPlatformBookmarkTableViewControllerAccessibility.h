//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__BKPlatformBookmarkTableViewControllerAccessibility_super.h"

#import "BKAccessibilityTableViewDelegate-Protocol.h"

@class NSString;

@interface BKPlatformBookmarkTableViewControllerAccessibility : __BKPlatformBookmarkTableViewControllerAccessibility_super <BKAccessibilityTableViewDelegate>
{
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
- (BOOL)bkaxCellIsSelected:(id)arg1;
- (void)bkaxPressActionForCell:(id)arg1;
- (BOOL)p_isMouseInsideView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)bkaxLoadAccessibilityInformation;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

