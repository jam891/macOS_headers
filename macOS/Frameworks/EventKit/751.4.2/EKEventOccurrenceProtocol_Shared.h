//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKEventOccurrenceProtocol_Shared : NSObject
{
}

+ (long long)statusFromString:(id)arg1;
+ (BOOL)event:(id)arg1 shouldBeIncluded:(long long)arg2;
+ (BOOL)event:(id)arg1 intersectsRange:(id)arg2 exclusionOptions:(long long)arg3;
+ (BOOL)event:(id)arg1 shouldBeIncludedIfIntersectsRange:(id)arg2 exclusionOptions:(long long)arg3;
+ (long long)availability:(id)arg1;
+ (BOOL)allowsParticipantStatusModifications:(id)arg1;
+ (BOOL)allowsAvailabilityModifications:(id)arg1;

@end

