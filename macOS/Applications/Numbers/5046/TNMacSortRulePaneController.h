//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSButton, NSMenu, NSPopUpButton, NSTextField, TNMacSortInspectorPaneController, TNMacSortRulePaneView, TSTTableSortRule;

@interface TNMacSortRulePaneController : TMAInspectorPaneController
{
    TNMacSortInspectorPaneController *mSortController;
    TSTTableSortRule *mRule;
    unsigned long long mIndex;
    NSMenu *mUnderlyingColumnMenu;
    NSPopUpButton *mColumnMenu;
    NSPopUpButton *mDirectionMenu;
    NSButton *mDeleteButton;
    NSTextField *mTitleField;
}

+ (id)nibName;
+ (id)paneWithSortController:(id)arg1 rule:(id)arg2 atIndex:(unsigned long long)arg3;
@property NSTextField *titleField; // @synthesize titleField=mTitleField;
@property NSButton *deleteButton; // @synthesize deleteButton=mDeleteButton;
@property NSPopUpButton *directionMenu; // @synthesize directionMenu=mDirectionMenu;
@property NSPopUpButton *columnMenu; // @synthesize columnMenu=mColumnMenu;
@property(nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property(readonly, nonatomic) TSTTableSortRule *rule; // @synthesize rule=mRule;
- (void)deleteRule:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setColumn:(id)arg1;
- (void)p_updateFromRule;
- (void)p_updateColumnMenuWithItems:(id)arg1;
- (void)p_updateTitle;
- (void)updateWithRule:(id)arg1;
- (void)updateWithColumnMenuItems:(id)arg1;
@property(readonly, nonatomic) TNMacSortRulePaneView *rulePaneView;
- (void)loadView;
- (void)dealloc;
- (id)initWithSortController:(id)arg1 rule:(id)arg2 atIndex:(unsigned long long)arg3;

@end

