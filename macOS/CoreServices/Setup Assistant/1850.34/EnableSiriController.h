//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyViewController.h"

@class ServicesManager;

@interface EnableSiriController : MacBuddyViewController
{
    BOOL _enableSiri;
    ServicesManager *_servicesManager;
}

@property(retain) ServicesManager *servicesManager; // @synthesize servicesManager=_servicesManager;
@property BOOL enableSiri; // @synthesize enableSiri=_enableSiri;
- (void).cxx_destruct;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldSkipPane;
- (id)nextViewIdentifier;
- (void)didBecomeVisible;
- (id)manager;
- (void)linkPressed:(id)arg1;
- (id)init;

@end

