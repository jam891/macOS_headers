//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ScDragStaffPoint.h"

@interface ScDragStaffHyst : ScDragStaffPoint
{
    BOOL m_checkPageGlobal;
    struct ScDragState m_dragState1;
}

- (void)scoreDragEntered:(struct U_VARS *)arg1;
- (void)doCheckForPageGlobals:(struct ScDragValidPoint *)arg1 contX:(long long)arg2 contY:(long long)arg3 dragResol:(struct ScResolution)arg4 u:(struct U_VARS *)arg5;
- (BOOL)isValidGlobalPoint:(struct ScLocatorGlobalRes *)arg1 contX:(long long)arg2 contY:(long long)arg3 dragResol:(struct ScResolution)arg4 u:(struct U_VARS *)arg5;
- (BOOL)validPointWasFound:(struct ScDragValidPoint *)arg1 contX:(long long)arg2 contY:(long long)arg3 dragResol:(struct ScResolution)arg4 u:(struct U_VARS *)arg5;
- (BOOL)validPointWasFound_priv:(struct ScDragValidPoint *)arg1 contX:(long long)arg2 contY:(long long)arg3 dragResol:(struct ScResolution)arg4 u:(struct U_VARS *)arg5;
- (void)dealloc;
- (id)initDragLayer:(id)arg1 viewState:(struct ScViewState *)arg2 scpbElem:(const struct ScpbElem *)arg3 song:(struct CSong *)arg4 dragLayerType:(int)arg5;

@end

