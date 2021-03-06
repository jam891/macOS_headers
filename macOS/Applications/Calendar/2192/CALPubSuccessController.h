//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSPanel, NSString, NSTextField, NSURL, NSView;

@interface CALPubSuccessController : NSObject
{
    NSTextField *_bigText;
    NSTextField *_labelText;
    NSPanel *_currentDialog;
    NSButton *_viewWebButton;
    NSButton *_okButton;
    NSView *_viewWebButtonSuperview;
    NSTextField *_viewWebBigText;
    NSTextField *_viewWebLabelText;
    NSURL *_subscribeURL;
    NSURL *_htmlURL;
    NSString *_calendarName;
    NSString *_publishName;
}

- (void).cxx_destruct;
- (void)visitPage:(id)arg1;
- (void)sendMail:(id)arg1;
- (void)ok:(id)arg1;
- (long long)_runDialogWithText:(id)arg1;
- (long long)runShareDialog;
- (long long)runDialog;
- (void)displayViewWebButton:(BOOL)arg1 totalDelta:(double *)arg2;
- (void)correctHeightForField:(id)arg1 totalDelta:(double *)arg2;
- (id)initWithHtmlURL:(id)arg1 withSubscribeURL:(id)arg2 withName:(id)arg3 withPublishName:(id)arg4;

@end

