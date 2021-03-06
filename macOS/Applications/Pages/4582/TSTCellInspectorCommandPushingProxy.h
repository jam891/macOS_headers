//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDChangeSourceCommandPushingProxy.h"

#import "TSKAnchorValueResolvable-Protocol.h"

@class TSTMacTableEditor;

@interface TSTCellInspectorCommandPushingProxy : TSDChangeSourceCommandPushingProxy <TSKAnchorValueResolvable>
{
    TSTMacTableEditor *mTableEditor;
}

+ (id)autoDecPlacesString;
- (void)teardown;
- (void)p_dynamicSelectionChanged:(id)arg1;
- (void)targetDidChangeValues;
- (id)anchorValueForKeyPath:(id)arg1;
- (BOOL)enqueueCommandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (void)willSetValue:(id)arg1 forKeyPath:(id)arg2;
- (id)selectedValuesForKey:(id)arg1;
- (id)keyPathsToInvalidateForChangeRecords:(id)arg1;
- (id)initWithTarget:(id)arg1 changeSource:(id)arg2 documentRoot:(id)arg3 tableEditor:(id)arg4;

@end

