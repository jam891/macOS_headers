//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSArray, NSMutableArray, NSMutableIndexSet;

@interface TSKInducedCommandCollection : TSKCommand
{
    NSMutableArray *_inducedCommands;
    NSMutableIndexSet *_indexesOfProcessedInducedCommands;
    NSMutableArray *_outgoingCommandQueueItems;
    BOOL _shouldPrepareSerializationDuringCommit;
    BOOL _shouldPrepareInverseCommandDuringCommit;
    TSKCommand *_inducingCommand;
}

@property(readonly, nonatomic) TSKCommand *inducingCommand; // @synthesize inducingCommand=_inducingCommand;
- (void).cxx_destruct;
- (void)saveToArchive:(struct InducedCommandCollectionArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct InducedCommandCollectionArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)setCommandController:(id)arg1;
- (BOOL)isUndoable;
- (id)actionString;
- (void)i_resetShadowedByCommit;
- (void)shadowByCommit;
- (BOOL)isShadowedByCommit;
- (void)shadowByTransform;
- (BOOL)isShadowedByTransform;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (void)p_addSerializedCommittedCommand:(id)arg1;
- (id)i_makeOutgoingCommandQueueItems;
- (id)makeInverse;
- (BOOL)i_canMakeInverse;
- (void)rollback;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)i_commitAndPrepareSerialization:(BOOL)arg1 inverseCommand:(BOOL)arg2;
- (BOOL)process;
- (BOOL)supportsCollaboration;
@property(readonly, nonatomic) NSArray *inducedCommands;
- (id)description;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 inducingCommand:(id)arg2 initialInducedCommands:(id)arg3;

@end

