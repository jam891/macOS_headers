//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString, SiriUISiriView;

@protocol SiriUISiriViewDelegate <NSObject>
- (void)siriView:(SiriUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (BOOL)siriView:(SiriUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewDidReceiveCloseAction:(SiriUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(SiriUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(SiriUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(SiriUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(SiriUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(SiriUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewClickedAction:(SiriUISiriView *)arg1;
- (float)audioRecordingPowerLevelForSiriView:(SiriUISiriView *)arg1;
@end

