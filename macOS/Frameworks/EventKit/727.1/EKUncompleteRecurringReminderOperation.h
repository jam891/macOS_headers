//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKSaveOperation.h>

@class EKReminder;

@interface EKUncompleteRecurringReminderOperation : EKSaveOperation
{
    EKReminder *_previouslyCompletedRecurringReminder;
}

@property(retain) EKReminder *previouslyCompletedRecurringReminder; // @synthesize previouslyCompletedRecurringReminder=_previouslyCompletedRecurringReminder;
- (void).cxx_destruct;
- (Class)_inverseOperationClass;
- (id)_previouslyCompletedReminderForReminder:(id)arg1;
- (id)_objectsForInverse;
- (void)_storePreviousState;
- (BOOL)_execute:(id *)arg1;

@end

