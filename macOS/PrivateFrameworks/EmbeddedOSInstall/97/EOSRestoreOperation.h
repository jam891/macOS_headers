//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmbeddedOSInstall/EOSOperation.h>

@class EOSDevice, EOSDeviceMonitor;

@interface EOSRestoreOperation : EOSOperation
{
    EOSDevice *_device;
    EOSDeviceMonitor *_deviceMonitor;
}

@property(retain) EOSDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(retain) EOSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)deviceConnected:(id)arg1;
- (BOOL)deviceConnectionTimeoutIsFatal;
- (id)deviceConnectionTimeoutErrorDescription;
- (BOOL)waitForDeviceDisconnected;
- (double)deviceDisconnectionTimeout;
- (double)deviceConnectionTimeout;
- (long long)expectedDeviceMode;
- (long long)matchDeviceModes;
- (void)errorDidOccur;
- (void)postOperation;
- (BOOL)preOperation;
- (BOOL)ensureRecoveryOptionsExist;
- (void)main;
- (id)initWithRestoreRequest:(id)arg1;

@end

