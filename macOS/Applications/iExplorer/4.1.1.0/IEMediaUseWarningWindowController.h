//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class IEDevicePathFSI, NSButton;

__attribute__((visibility("hidden")))
@interface IEMediaUseWarningWindowController : NSWindowController
{
    NSButton *btn_continue;
    NSButton *btn_docs;
    NSButton *btn_awesomeFiles;
    IEDevicePathFSI *pathFSI;
}

+ (void)showModalIfNeededForFolder:(id)arg1;
- (void).cxx_destruct;
- (void)close;
- (void)awesomeFilesClicked:(id)arg1;
- (void)docsClicked:(id)arg1;
- (void)continueClicked:(id)arg1;
- (void)selectFSIOnMain:(id)arg1;
- (void)windowDidLoad;
- (void)setPathFSI:(id)arg1;
- (BOOL)isAFInstalled;

@end

