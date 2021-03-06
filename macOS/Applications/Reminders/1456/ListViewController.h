//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/GroupedTableViewController.h>

#import "CalUICalendarInfoViewDelegate-Protocol.h"

@class ListTableView, NSString, ReminderListShareViewController, RemindersScrollView, RemindersWindowController;

@interface ListViewController : GroupedTableViewController <CalUICalendarInfoViewDelegate>
{
    BOOL _inLiveRefresh;
    BOOL _shareViewIsClosing;
    RemindersWindowController *_windowController;
    RemindersScrollView *_view;
    ListTableView *_tableView;
    ReminderListShareViewController *_listShareViewController;
    double _greatestMinimumListCellWidth;
}

@property double greatestMinimumListCellWidth; // @synthesize greatestMinimumListCellWidth=_greatestMinimumListCellWidth;
@property BOOL shareViewIsClosing; // @synthesize shareViewIsClosing=_shareViewIsClosing;
@property(retain) ReminderListShareViewController *listShareViewController; // @synthesize listShareViewController=_listShareViewController;
@property(retain) ListTableView *tableView; // @synthesize tableView=_tableView;
@property BOOL inLiveRefresh; // @synthesize inLiveRefresh=_inLiveRefresh;
@property(retain) RemindersScrollView *view; // @synthesize view=_view;
@property __weak RemindersWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (void)didEndEditing;
- (void)didBeginEditing;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (BOOL)listIsSelected:(id)arg1;
- (id)selectedLists;
- (void)reorderItems:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3;
- (void)unlockTableForAnimation;
- (void)lockTableForAnimation;
- (void)refreshTable;
- (id)pasteboardTypeForReordering;
- (void)cleanupAfterReordering;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)pasteIntoList:(id)arg1;
- (void)paste:(id)arg1;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)selectLists:(id)arg1;
- (void)deselectAllLists;
- (void)newWindowWithSelectedLists:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)inSwipeToDelete;
- (id)newWindowMenuTitleWithNumberOfSelectedLists:(unsigned long long)arg1;
- (id)fallbackListToSelectNearRow:(long long)arg1;
- (void)updateReminderCompletionInLists:(id)arg1 complete:(BOOL)arg2;
- (void)changeLists:(id)arg1 toSymbolicColor:(id)arg2;
- (void)uncompleteLists:(id)arg1;
- (void)completeLists:(id)arg1;
- (void)deleteListsWithoutAlert:(id)arg1;
- (void)deleteLists:(id)arg1;
- (void)deleteSelectedLists;
- (void)editTitleOfList:(id)arg1;
- (void)renameSelectedList:(id)arg1;
- (void)revertListTitle:(id)arg1;
- (void)renameList:(id)arg1 withEditingContext:(id)arg2 title:(id)arg3;
- (void)saveSelectedListsWithEditingContext:(id)arg1;
- (id)newListCellViewInAccount:(id)arg1;
- (void)calendarInfoViewControllerDidClosePopover:(id)arg1;
- (void)calendarInfoViewControllerWillClosePopover:(id)arg1;
- (BOOL)shareViewIsOpen;
- (void)showShareViewForListCellView:(id)arg1;
- (void)showList:(id)arg1;
- (void)refreshLists;
- (void)refreshListsWithNotification:(id)arg1;
- (void)updateShareButtonVisibility;
- (void)hideTransientShareButton;
- (void)dealloc;
- (id)calendarForRow:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 windowController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

