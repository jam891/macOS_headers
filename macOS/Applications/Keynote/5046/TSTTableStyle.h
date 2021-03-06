//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStyle.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSTTableStrokeProviding-Protocol.h"

@class NSString, TSDStroke;

@interface TSTTableStyle : TSSStyle <GSSPAutoEncodable, TSTTableStrokeProviding, TSDMixing>
{
}

+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3;
+ (id)styleIDForPreset:(unsigned long long)arg1;
+ (unsigned long long)presetIDForStyleID:(id)arg1;
+ (id)nonEmphasisTableProperties;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property(readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property(readonly, nonatomic) TSDStroke *bodyRowStroke;
@property(readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)validate;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)populateGSSPTableStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

