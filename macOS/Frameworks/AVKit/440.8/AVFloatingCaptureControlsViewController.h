//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVCaptureControlsRecordingViewController.h>

@class NSView;

@interface AVFloatingCaptureControlsViewController : AVCaptureControlsRecordingViewController
{
    NSView *_initialFirstResponder;
    CDUnknownBlockType _nextKeyViewSetupBlock;
}

+ (id)keyPathsForValuesAffectingMovableControlsContentView;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (BOOL)movableControlsContentView;
- (CDStruct_83cd8af5)controlsContentViewMargin;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)recordButtonStopImage;
- (id)recordButtonRecordImage;
- (id)recordButtonPauseImage;
- (void)setupNextKeyView;
- (void)loadView;

@end

