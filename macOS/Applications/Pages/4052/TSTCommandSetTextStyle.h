//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSTCommandWrapping-Protocol.h"

@class TSTCellDiffMap;

@interface TSTCommandSetTextStyle : TSTTableCommand <GSSPAutoEncodable, TSTCommandWrapping>
{
    TSTCellDiffMap *_cellDiffMap;
    TSTCellDiffMap *_inverseCellDiffMap;
}

@property(retain, nonatomic) TSTCellDiffMap *inverseCellDiffMap; // @synthesize inverseCellDiffMap=_inverseCellDiffMap;
@property(retain, nonatomic) TSTCellDiffMap *cellDiffMap; // @synthesize cellDiffMap=_cellDiffMap;
- (id)affectedArrayOfTableInfoForGSTCommandWrapper;
- (id)affectedArrayOfCellUIDListForGSTCommandWrapper;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)p_formatAndValueByApplyingStyle:(id)arg1 toRichTextCell:(id)arg2;
- (void)p_registerChangesForCellDiffMap:(id)arg1;
- (id)makeInverse;
- (void)rollback;
- (BOOL)isValidForCommit;
- (BOOL)supportsCollaboration;
- (void)undoWork;
- (void)redoWork;
- (void)commitWork;
- (id)actionString;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 cellDiffMap:(id)arg2;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 style:(id)arg3;
- (void)populateGSSPCmdTableSetTextStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

