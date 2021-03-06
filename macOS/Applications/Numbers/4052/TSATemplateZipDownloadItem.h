//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSUDownloadItem-Protocol.h"

@class NSString, NSURL;

@interface TSATemplateZipDownloadItem : NSObject <TSUDownloadItem>
{
    NSString *_templateName;
}

+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (BOOL)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id *)arg4;
+ (BOOL)canHandleDownloadTask:(id)arg1;
+ (id)downloadItemForTemplateName:(id)arg1;
@property(readonly, nonatomic) BOOL needsDownload;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;
- (id)initWithTemplateName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

