//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKSaveOperation.h>

@interface EKUnsliceOperation : EKSaveOperation
{
}

- (id)originalObjects;
- (id)_handleSignificantlyDetachedEventChangesForCurrentEvent:(id)arg1 detachedEvents:(id)arg2;
- (id)_inverseForUndoSliceOutcome:(id)arg1;
- (id)_objectsForInverse;
- (Class)_inverseOperationClass;
- (BOOL)_execute:(id *)arg1;

@end

