//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ANSEvent.h"

@class NSString;

@interface ANSLifecycleEvent : ANSEvent
{
    NSString *_name;
}

+ (id)nameFromNotification:(id)arg1;
+ (id)notificationNameMap;
+ (id)appLaunchedEvent;
+ (id)installEvent;
+ (id)eventWithNotification:(id)arg1;
- (void).cxx_destruct;
- (BOOL)triggersFlush;
- (id)dictionaryRepresentation;
- (id)name;
- (id)initWithName:(id)arg1;
- (id)initWithNotification:(id)arg1;

@end

