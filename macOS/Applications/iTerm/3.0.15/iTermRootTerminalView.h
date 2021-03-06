//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SolidColorView.h"

#import "iTermDragHandleViewDelegate-Protocol.h"
#import "iTermTabBarControlViewDelegate-Protocol.h"

@class NSString, PTYTabView, iTermDragHandleView, iTermTabBarControlView, iTermToolbeltView;
@protocol iTermRootTerminalViewDelegate;

@interface iTermRootTerminalView : SolidColorView <iTermTabBarControlViewDelegate, iTermDragHandleViewDelegate>
{
    BOOL _tabViewFrameReduced;
    BOOL _shouldShowToolbelt;
    id <iTermRootTerminalViewDelegate> _delegate;
    PTYTabView *_tabView;
    iTermTabBarControlView *_tabBarControl;
    SolidColorView *_divisionView;
    iTermToolbeltView *_toolbelt;
    double _toolbeltWidth;
    double _leftTabBarWidth;
    iTermDragHandleView *_leftTabBarDragHandle;
}

@property(retain, nonatomic) iTermDragHandleView *leftTabBarDragHandle; // @synthesize leftTabBarDragHandle=_leftTabBarDragHandle;
@property(readonly, nonatomic) double leftTabBarWidth; // @synthesize leftTabBarWidth=_leftTabBarWidth;
@property(nonatomic) double toolbeltWidth; // @synthesize toolbeltWidth=_toolbeltWidth;
@property(nonatomic) BOOL shouldShowToolbelt; // @synthesize shouldShowToolbelt=_shouldShowToolbelt;
@property(retain, nonatomic) iTermToolbeltView *toolbelt; // @synthesize toolbelt=_toolbelt;
@property(retain, nonatomic) SolidColorView *divisionView; // @synthesize divisionView=_divisionView;
@property(retain, nonatomic) iTermTabBarControlView *tabBarControl; // @synthesize tabBarControl=_tabBarControl;
@property(retain, nonatomic) PTYTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) id <iTermRootTerminalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dragHandleViewDidFinishMoving:(id)arg1;
- (double)dragHandleView:(id)arg1 didMoveBy:(double)arg2;
- (void)iTermTabBarDidFinishFlash;
- (void)iTermTabBarWillBeginFlash;
- (BOOL)iTermTabBarShouldFlashAutomatically;
- (void)constrainLeftTabBarWidth;
- (void)layoutSubviews;
- (void)removeLeftTabBarDragHandle;
@property(readonly, nonatomic) double tabviewWidth;
- (BOOL)tabBarShouldBeVisibleWithAdditionalTabs:(int)arg1;
@property(readonly, nonatomic) BOOL tabBarShouldBeVisible;
@property(readonly, nonatomic) BOOL scrollbarShouldBeVisible;
- (void)shutdown;
- (void)updateToolbeltFrame;
@property(readonly, nonatomic) struct CGRect toolbeltFrame;
- (void)constrainToolbeltWidth;
- (void)updateToolbelt;
- (void)updateDivisionView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 tabBarDelegate:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

