//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSMutableCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, UNNotificationSound;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSString *_darwinNotificationName;
    NSString *_darwinSnoozedNotificationName;
    NSString *_defaultActionTitle;
    BOOL _fromSnooze;
    BOOL _hasDefautAction;
    NSString *_launchImageName;
    NSArray *_peopleIdentifiers;
    BOOL _shouldAddToNotificationsList;
    BOOL _shouldAlwaysAlertWhileAppIsForeground;
    BOOL _shouldLockDevice;
    BOOL _shouldPauseMedia;
    BOOL _snoozeable;
    UNNotificationSound *_sound;
    NSString *_subtitle;
    NSString *_threadIdentifier;
    NSString *_title;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy) UNNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy) NSString *body; // @synthesize body=_body;
@property(readonly, copy) NSNumber *badge; // @synthesize badge=_badge;
@property(readonly, copy) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy) NSString *subtitle;
@property(readonly, getter=isSnoozeable) BOOL snoozeable; // @synthesize snoozeable=_snoozeable;
@property(readonly) BOOL shouldPauseMedia; // @synthesize shouldPauseMedia=_shouldPauseMedia;
@property(readonly) BOOL shouldLockDevice; // @synthesize shouldLockDevice=_shouldLockDevice;
@property(readonly) BOOL shouldAlwaysAlertWhileAppIsForeground; // @synthesize shouldAlwaysAlertWhileAppIsForeground=_shouldAlwaysAlertWhileAppIsForeground;
@property(readonly) BOOL shouldAddToNotificationsList; // @synthesize shouldAddToNotificationsList=_shouldAddToNotificationsList;
@property(readonly, copy) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, copy) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(readonly) BOOL hasDefaultAction; // @synthesize hasDefaultAction=_hasDefautAction;
@property(readonly, getter=isFromSnooze) BOOL fromSnooze; // @synthesize fromSnooze=_fromSnooze;
@property(readonly, copy) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(readonly, copy) NSString *darwinSnoozedNotificationName; // @synthesize darwinSnoozedNotificationName=_darwinSnoozedNotificationName;
@property(readonly, copy) NSString *darwinNotificationName; // @synthesize darwinNotificationName=_darwinNotificationName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 darwinNotificationName:(id)arg5 darwinSnoozedNotificationName:(id)arg6 fromSnooze:(BOOL)arg7 hasDefaultAction:(BOOL)arg8 defaultActionTitle:(id)arg9 launchImageName:(id)arg10 peopleIdentifiers:(id)arg11 shouldAddToNotificationsList:(BOOL)arg12 shouldAlwaysAlertWhileAppIsForeground:(BOOL)arg13 shouldLockDevice:(BOOL)arg14 shouldPauseMedia:(BOOL)arg15 snoozeable:(BOOL)arg16 sound:(id)arg17 subtitle:(id)arg18 threadIdentifier:(id)arg19 title:(id)arg20 userInfo:(id)arg21;

@end

