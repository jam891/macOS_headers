//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCXWriteState.h"

@class CXNamespace, ECFormulaProcessor, EDWorkbook, EXOAVWriteState, NSMutableArray;

@interface EXWriteState : OCXWriteState
{
    EXOAVWriteState *mVmlState;
    NSMutableArray *mSheets;
    ECFormulaProcessor *mFormulaProcessor;
    CXNamespace *mEXSpreadsheetMLNamespace;
    CXNamespace *mEXSpreadsheetDrawingNamespace;
    CXNamespace *mEXSpreadsheetRelationsNamespace;
}

@property(readonly, nonatomic) ECFormulaProcessor *formulaProcessor; // @synthesize formulaProcessor=mFormulaProcessor;
@property(readonly, nonatomic) NSMutableArray *sheets; // @synthesize sheets=mSheets;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetRelationsNamespace; // @synthesize EXSpreadsheetRelationsNamespace=mEXSpreadsheetRelationsNamespace;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetDrawingNamespace; // @synthesize EXSpreadsheetDrawingNamespace=mEXSpreadsheetDrawingNamespace;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetMLNamespace; // @synthesize EXSpreadsheetMLNamespace=mEXSpreadsheetMLNamespace;
- (id)contentDir;
- (Class)writerClass;
@property(readonly, retain, nonatomic) EDWorkbook *workbook;
- (id)vmlState;
- (void)dealloc;
- (id)initWithStream:(id)arg1 workbook:(id)arg2 cancelDelegate:(id)arg3;

@end

