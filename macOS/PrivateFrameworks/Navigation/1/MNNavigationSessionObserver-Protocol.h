//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, GEOComposedWaypoint, GEOETARoute, GEONavigationGuidanceState, GEOStep, MNActiveRouteDetails, MNLocation, MNNavigationSession, MNTrafficIncidentAlert, NSArray, NSString;

@protocol MNNavigationSessionObserver <NSObject>

@optional
- (void)navigationSession:(MNNavigationSession *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(BOOL))arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSessionHideSecondaryStep:(MNNavigationSession *)arg1;
- (void)navigationSession:(MNNavigationSession *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(MNNavigationSession *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationSession:(MNNavigationSession *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateDestination:(GEOComposedWaypoint *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteDetails *)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didReroute:(MNActiveRouteDetails *)arg2 withLocation:(MNLocation *)arg3;
- (void)navigationSessionDidCancelReroute:(MNNavigationSession *)arg1;
- (void)navigationSessionWillReroute:(MNNavigationSession *)arg1;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateTrafficForETARoute:(GEOETARoute *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionWillResumeFromPause:(MNNavigationSession *)arg1;
- (void)navigationSessionWillPause:(MNNavigationSession *)arg1;
- (void)navigationSessionDidArrive:(MNNavigationSession *)arg1;
- (void)navigationSession:(MNNavigationSession *)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didChangeGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didChangeNavigationState:(int)arg2;
@end

