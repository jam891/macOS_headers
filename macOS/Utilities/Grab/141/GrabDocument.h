//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import "NSPasteboardItemDataProvider-Protocol.h"
#import "NSServicesMenuRequestor-Protocol.h"

@class NSBitmapImageRep, NSString;
@protocol NSPasteboardWriting;

@interface GrabDocument : NSDocument <NSServicesMenuRequestor, NSPasteboardItemDataProvider>
{
    NSBitmapImageRep *_imageRep;
    long long _captureType;
    struct CGRect _captureRect;
}

+ (BOOL)autosavesInPlace;
@property struct CGRect captureRect; // @synthesize captureRect=_captureRect;
@property long long captureType; // @synthesize captureType=_captureType;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)copy:(id)arg1;
- (id)supportedPasteboardTypes;
- (id)supportedImagePasteboardTypes;
- (void)changeFileType:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)showWindowsCentered;
- (void)showWindowsRelativeToSourceRect;
- (void)makeWindowControllers;
@property(copy) NSBitmapImageRep *imageRep;
- (void)dealloc;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
@property(readonly) id <NSPasteboardWriting> pasteboardWriter;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

