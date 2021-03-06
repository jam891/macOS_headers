//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMATrimControlCellAccessibility_super.h"

@class TMATrimControlCellAccessibilityDragHandle;
@protocol TMATrimControlCellAccessibilityDataSource;

@interface TMATrimControlCellAccessibility : __TMATrimControlCellAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxEndHandleCreatingIfNeeded;
- (id)_tsaxStartHandleCreatingIfNeeded;
- (id)_tsaxControlView;
- (void)_tsaxSetEndLimit:(double)arg1;
- (void)_tsaxSetStartLimit:(double)arg1;
- (void)_tsaxSetValue:(double)arg1 forHandle:(long long)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)tsaxDecrementValueForHandle:(long long)arg1;
- (void)tsaxIncrementValueForHandle:(long long)arg1;
- (id)tsaxValueDescriptionForHandle:(long long)arg1;
- (double)tsaxValueForHandle:(long long)arg1;
- (struct CGRect)tsaxFrameForHandle:(long long)arg1;
@property(nonatomic, setter=tsaxSetDataSource:) id <TMATrimControlCellAccessibilityDataSource> tsaxDataSource;
- (void)tsaxSetParentView:(id)arg1;
- (id)tsaxParentView;
@property(retain, nonatomic, setter=_tsaxSetEndHandle:) TMATrimControlCellAccessibilityDragHandle *_tsaxEndHandle;
@property(retain, nonatomic, setter=_tsaxSetStartHandle:) TMATrimControlCellAccessibilityDragHandle *_tsaxStartHandle;

@end

