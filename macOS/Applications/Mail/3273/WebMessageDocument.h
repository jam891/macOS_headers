//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_NSReaderDelegate-Protocol.h"

@class MCParsedMessage, NSArray, NSDictionary, NSMutableDictionary, NSURL;

@interface WebMessageDocument : NSObject <_NSReaderDelegate>
{
    NSMutableDictionary *_attachmentsByURL;
    NSMutableDictionary *_headerAttachmentsByURL;
    BOOL _containsRemoteContent;
    BOOL _messageIsFromMicrosoft;
    BOOL _collapseQuotedBlocks;
    BOOL _shouldDownloadRemoteURLs;
    int _uniqueIdentifier;
    NSURL *_baseURL;
    MCParsedMessage *_parsedMessage;
}

+ (void)documentWillClose:(id)arg1;
+ (id)documentWithUniqueIdentifier:(int)arg1;
+ (void)document:(id *)arg1 attachment:(id *)arg2 forURL:(id)arg3;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 forURL:(id)arg3;
+ (id)openDocuments;
+ (void)initialize;
@property(nonatomic) BOOL containsRemoteContent; // @synthesize containsRemoteContent=_containsRemoteContent;
@property(readonly, nonatomic) MCParsedMessage *parsedMessage; // @synthesize parsedMessage=_parsedMessage;
@property(readonly, nonatomic) int uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) BOOL shouldDownloadRemoteURLs; // @synthesize shouldDownloadRemoteURLs=_shouldDownloadRemoteURLs;
@property(nonatomic) BOOL collapseQuotedBlocks; // @synthesize collapseQuotedBlocks=_collapseQuotedBlocks;
@property(nonatomic) BOOL messageIsFromMicrosoft; // @synthesize messageIsFromMicrosoft=_messageIsFromMicrosoft;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (void)removeNonHeaderAttachmentForURL:(id)arg1;
- (void)removeAttachmentsForURLs:(id)arg1;
- (void)clearAttachmentsByURL;
@property(readonly, copy, nonatomic) NSDictionary *attachmentsByURL;
@property(readonly, copy, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) BOOL hasAttachments;
- (id)userAttachments;
- (BOOL)hasAttachmentViewController:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachmentForURL:(id)arg1;
- (void)addAttachments:(id)arg1;
- (void)addAttachment:(id)arg1 forURLString:(id)arg2;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
- (void)addAttachment:(id)arg1 forURL:(id)arg2 inHeaderView:(BOOL)arg3;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentForURL:(id)arg1 inHeaderView:(BOOL)arg2;
- (id)init;
- (id)initForDisplay:(BOOL)arg1;
- (id)initWithParsedMessage:(id)arg1 forDisplay:(BOOL)arg2;
- (id)fileWrapperForURL:(id)arg1;

@end

