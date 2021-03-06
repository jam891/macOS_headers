//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSUUID, TNChartFormulaStorage;

@interface TNCommandChartMediatorSetSeriesOrder : TSCHChartCommand <GSSPAutoEncodable>
{
    NSUUID *mSeriesID;
    NSUUID *mPrecedingSeriesID;
    TNChartFormulaStorage *mOldFormulaStorage;
    unsigned long long mUndoCurrentIndex;
    unsigned long long mUndoNewIndex;
    NSUUID *mInversePrecedingSeriesID;
    NSUUID *mInverseSeriesID;
}

+ (BOOL)supportsCollaboration;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)p_updatePropertyName;
- (BOOL)isValidForCommit;
- (id)makeInversePrimitive;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (void)p_commitWithCurrentIndex:(unsigned long long)arg1 newIndex:(unsigned long long)arg2;
- (id)actionString;
- (id)mediator;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 seriesID:(id)arg2 precedingSeriesID:(id)arg3;
- (void)populateGSSPCmdChartMediatorSetSeriesOrder:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

