//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject
{
    unsigned int _service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    struct IONotificationPort *_notificationPort;
    unsigned int _interestNotification;
}

+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPPortWithService:(unsigned int)arg1;
- (void)dealloc;
@property(readonly, nonatomic) long long portType; // @dynamic portType;
@property(readonly, nonatomic) long long portRole; // @dynamic portRole;
@property(readonly, nonatomic) unsigned short portNumber; // @dynamic portNumber;
- (void)serviceTerminated;
- (void)_registryPropertyChanged;
@property(readonly, nonatomic) unsigned int service;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (BOOL)_commonInitWithService:(unsigned int)arg1;
- (id)init;

@end

