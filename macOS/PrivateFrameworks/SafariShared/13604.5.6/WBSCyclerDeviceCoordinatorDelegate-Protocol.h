//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSData, NSError, NSString, WBSCyclerDeviceCoordinator;

@protocol WBSCyclerDeviceCoordinatorDelegate <NSObject>

@optional
- (void)deviceCoordinator:(WBSCyclerDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)deviceCoordinator:(WBSCyclerDeviceCoordinator *)arg1 didReceiveData:(NSData *)arg2 reply:(void (^)(NSData *))arg3;
- (void)deviceCoordinatorDidEstablishConnectionsToAllDevices:(WBSCyclerDeviceCoordinator *)arg1;
- (void)deviceCoordinator:(WBSCyclerDeviceCoordinator *)arg1 didBeginPrimaryDeviceCoordinationWithAddress:(NSString *)arg2;
@end

