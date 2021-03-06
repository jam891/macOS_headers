//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPPersistableObject.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPAbstractSlide, GSSPImageData, NSString;

@interface GSSPSlideNode : GSSPPersistableObject <GSSPAutoDecodable>
{
    NSString *mSlideId;
    GSSPAbstractSlide *mSlide;
    GSSPImageData *mThumbnailImageData;
    int mDepth;
    BOOL mIsHidden;
    BOOL mHasTransition;
    BOOL mHasNote;
    BOOL mIsCollapsed;
    BOOL mSlideNumberVisible;
    vector_a093891c mSlideSpecificHyperlinkSlideNodeUUIDs;
    vector_a093891c mSlideSpecificHyperlinkObjectUUIDs;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (void)setSlideSpecificHyperlinkObjectUUIDs:(const vector_a093891c *)arg1;
- (vector_a093891c *)slideSpecificHyperlinkObjectUUIDs;
- (void)setSlideSpecificHyperlinkSlideNodeUUIDs:(const vector_a093891c *)arg1;
- (vector_a093891c *)slideSpecificHyperlinkSlideNodeUUIDs;
- (void)setSlideNumberVisible:(BOOL)arg1;
- (BOOL)slideNumberVisible;
- (void)setIsCollapsed:(BOOL)arg1;
- (BOOL)isCollapsed;
- (void)setHasNote:(BOOL)arg1;
- (BOOL)hasNote;
- (void)setHasTransition:(BOOL)arg1;
- (BOOL)hasTransition;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setDepth:(int)arg1;
- (int)depth;
- (void)setThumbnailImageData:(id)arg1;
- (id)thumbnailImageData;
- (void)setSlide:(id)arg1;
- (id)slide;
- (void)setSlideId:(id)arg1;
- (id)slideId;

@end

