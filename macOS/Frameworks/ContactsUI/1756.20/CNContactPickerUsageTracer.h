//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNContactPickerUsageTracer : NSObject
{
    unsigned long long _countOfContactsExpanded;
    unsigned long long _countOfGroupsViewed;
    unsigned long long _countOfLocalSearchesPerformed;
    unsigned long long _countOfServerSearchesPerformed;
}

- (void)setValue:(unsigned long long)arg1 forTracedKey:(id)arg2 dictionary:(id)arg3;
- (void)sendTrace;
- (void)setCountOfServerSearchesPerformed:(unsigned long long)arg1;
- (void)setCountOfLocalSearchesPerformed:(unsigned long long)arg1;
- (void)setCountOfGroupsViewed:(unsigned long long)arg1;
- (void)setCountOfContactsExpanded:(unsigned long long)arg1;

@end

