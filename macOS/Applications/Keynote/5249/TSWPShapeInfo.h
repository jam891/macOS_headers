//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDContainerInfo-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSDSelectionStatisticsContributor-Protocol.h"
#import "TSWPStorageParent-Protocol.h"

@class NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment, TSWPFlowInfo;

@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, GSSPAutoEncodable, TSDKeyValueProxyVending, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_containedStorage;
    BOOL _isTextBox;
    TSPObject<TSWPFlowInfo> *_textFlow;
}

+ (id)p_newEmptyStorageWithContext:(id)arg1 paragraphStyle:(id)arg2;
+ (id)defaultPlaceholderTextForLocale:(id)arg1;
+ (void)setDefaultInstructionalText:(id)arg1;
+ (unsigned long long)numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(struct _NSRange)arg3 incomingStorage:(id)arg4 incomingRange:(struct _NSRange)arg5 maxDifferencesBeforeReturning:(unsigned long long)arg6;
+ (BOOL)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (BOOL)stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (id)textPropertiesAffectingTextMorph;
+ (id)textPropertiesNotAffectingVisualStyle;
+ (id)textPropertiesAffectingVisualStyleExceptSize;
+ (id)textPropertiesAffectingVisualStyle;
+ (id)textPropertiesAffectingObjectMatch;
+ (id)textPropertiesNeedingCharacterAnimation;
@property(nonatomic) __weak TSPObject<TSWPFlowInfo> *textFlow; // @synthesize textFlow=_textFlow;
@property(readonly, nonatomic) BOOL isTextBox; // @synthesize isTextBox=_isTextBox;
- (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (BOOL)p_isNonTopicParagraphBreakAtParagraphIndex:(unsigned long long)arg1;
- (unsigned long long)p_nonTopicParagraphBreakCount;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (unsigned long long)p_chunkCountForByBullet;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 tailLineEndInfo:(int)arg3;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)stylesForCopyStyle;
- (id)styleIdentifierTemplateForNewPreset;
- (id)propertyMapForNewPreset;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)fixPositionOfImportedAutosizedShape;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *instructionalText;
- (void)setIsTextBoxForPersistence:(BOOL)arg1;
@property(readonly, nonatomic) BOOL displaysInstructionalText;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)dealloc;
- (Class)styleClass;
- (Class)editorClass;
- (Class)drawableSelectionTransformerClass;
@property(nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property(retain, nonatomic) TSWPPadding *padding;
@property(retain, nonatomic) TSWPColumns *columns;
@property(readonly, nonatomic) int columnDirection;
@property(nonatomic) int verticalAlignment;
@property(nonatomic) BOOL textIsVertical;
- (BOOL)textIsLinked;
@property(nonatomic) BOOL shrinkTextToFit;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (BOOL)canAnchor;
- (BOOL)isLocked;
@property(readonly, nonatomic) BOOL isLinkable;
@property(readonly, nonatomic) BOOL isLinked;
- (id)i_ownedTextStorage;
- (void)i_setOwnedTextStorage:(id)arg1;
- (void)p_setOwnedTextStorage:(id)arg1;
- (id)textStorageForHeadOfTextFlow;
@property(readonly, nonatomic) TSWPStorage *containedStorage;
@property(readonly, nonatomic) TSWPStorage *textStorage;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)shouldHideEmptyBullets;
- (id)p_chunkTitleByRemovingAdditionalLinesFromTitle:(id)arg1;
- (id)p_containedTextForRange:(struct _NSRange)arg1;
- (id)p_containedText;
- (id)kn_containedTextForDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2;
- (id)p_displayableBuildOrderNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)kn_typeName;
- (id)kn_defaultDescriptiveName;
- (BOOL)kn_isPlaceholderWithNonCanvasVisibleText;
- (id)kn_displayableContainedText;
- (BOOL)kn_isAutoresizingTextBox;
- (BOOL)kn_isTextElement;
- (id)kn_thumbnailImageInSmallSize:(BOOL)arg1 lightTint:(BOOL)arg2;
- (BOOL)kn_pathIsValidForRendering;
- (BOOL)kn_renderThumbnail;
- (void)importAutoSizeVertical:(BOOL)arg1 horizontal:(BOOL)arg2;
- (void)p_upgradePathForArrows;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 qdShape:(id)arg3 state:(id)arg4;
- (void)saveToArchive:(struct ShapeInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)upgradeOwnedStorageWithFileFormatVersion:(unsigned long long)arg1;
- (void)fixupAutosizingTextboxes;
- (void)upgradeWithNewOwnedStorage;
- (BOOL)isLineStyle;
- (void)populateGSSPShapeInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

