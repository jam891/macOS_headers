//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSWPNSAttributedStringAttachmentConversionDelegate-Protocol.h"

@class NSString;

@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate>
{
    BOOL mConvertHyperlinks;
    BOOL mConvertAttachments;
}

- (id)urlForHyperlinkField:(id)arg1;
- (id)attachmentStringForDrawableAttachment:(id)arg1;
- (id)init;
- (id)initWithConvertHyperlinks:(BOOL)arg1 convertGraphicalAttachments:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

