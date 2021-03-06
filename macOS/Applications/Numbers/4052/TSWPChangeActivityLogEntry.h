//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStorageBasedActivityLogEntry.h"

#import "TSDAnnotationActivityLogEntry-Protocol.h"

@class NSString, TSWPChangeDetails;

@interface TSWPChangeActivityLogEntry : TSWPStorageBasedActivityLogEntry <TSDAnnotationActivityLogEntry>
{
    TSWPChangeDetails *_changeDetails;
}

@property(retain, nonatomic) TSWPChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
- (id)annotation;
@property(readonly) unsigned long long hash;
- (id)selectionPathForCanvasEditor:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (id)attributedText;
- (id)p_stringWithEntryTextAttributes:(id)arg1;
- (id)p_regularCommentFont;
- (id)p_boldCommentFont;
- (id)author;
- (id)timestamp;
- (id)object;
- (id)text;
- (void)dealloc;
- (id)initWithChangeDetails:(id)arg1 searchReference:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

