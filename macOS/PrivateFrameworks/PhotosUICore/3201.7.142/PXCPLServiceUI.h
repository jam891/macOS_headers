//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLServiceUIStatus-Protocol.h>

@class NSString;
@protocol PXCPLService, PXCPLServiceUIDelegate, PXCPLServiceUIStatus;

@interface PXCPLServiceUI : NSObject <PXCPLServiceUIStatus>
{
    id <PXCPLService> _cplService;
    long long _serviceAction;
    struct {
        char progressDidChange;
        char performAction;
    } _delegateRespondsTo;
    BOOL _paused;
    id <PXCPLServiceUIDelegate> _delegate;
    NSString *_stateDescription;
    NSString *_failureDescription;
    double _progress;
    CDUnknownBlockType _action;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertSubtitle;
    NSString *_actionConfirmationAlertButtonTitle;
}

@property(retain, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertSubtitle; // @synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSString *failureDescription; // @synthesize failureDescription=_failureDescription;
@property(retain, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(nonatomic) __weak id <PXCPLServiceUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleServiceStatus:(struct PXCPLServiceStatus)arg1;
- (void)_statusDidChange:(BOOL)arg1;
- (id)_statusDescription;
- (void)_performAction:(long long)arg1;
@property(readonly, nonatomic) id <PXCPLServiceUIStatus> serviceUIStatus;
@property(readonly, nonatomic) struct PXCPLServiceStatus serviceStatus;
- (void)dealloc;
- (id)initWithCPLService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

