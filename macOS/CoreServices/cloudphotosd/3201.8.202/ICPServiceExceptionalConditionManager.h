//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface ICPServiceExceptionalConditionManager : NSObject
{
    NSMutableSet *_conditions;
}

@property(retain) NSMutableSet *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
- (id)conditionsAffectingService:(id)arg1;
- (BOOL)hasExceptionalConditions;
- (void)removeConditionOfType:(id)arg1;
- (id)conditionOfType:(id)arg1;
- (void)addCondition:(id)arg1;
- (id)init;

@end

