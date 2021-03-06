//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Calculations)
+ (id)laterDateOf:(id)arg1 andDate:(id)arg2;
+ (id)earlierDateOf:(id)arg1 andDate:(id)arg2;
+ (long long)midnightsBetweenDate:(id)arg1 andDate:(id)arg2;
+ (long long)minutesBetweenDates:(id)arg1 andDate:(id)arg2;
+ (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)dateFromDay:(long long)arg1 andMonth:(long long)arg2 andYear:(long long)arg3;
+ (long long)oneBasedWeekday:(long long)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isEndOfDay;
- (BOOL)isStartOfDay;
- (BOOL)isBetween:(id)arg1 andDate:(id)arg2;
- (long long)getTime:(int)arg1;
- (BOOL)isSameDayAs:(id)arg1;
- (BOOL)isSameMonthAs:(id)arg1;
- (BOOL)isSameYearAs:(id)arg1;
- (BOOL)isToday;
- (long long)numberOfDaysInMonth;
- (id)dateWithMinute:(long long)arg1;
- (id)dateWithHour:(long long)arg1;
- (id)dateWithHour:(long long)arg1 andMinuten:(long long)arg2;
- (id)getNextMonth;
- (id)getPreviousMonth;
- (id)getYearWithOffset:(long long)arg1;
- (id)getMonthWithOffset:(long long)arg1;
- (id)getWeekWithOffset:(long long)arg1;
- (id)getDayWithOffset:(long long)arg1;
- (id)getMinuteWithOffset:(long long)arg1;
- (id)getHourWithOffset:(long long)arg1;
- (id)findMondayOfCurrentWeek;
- (id)setMonth:(long long)arg1;
- (id)setDayOfMonth:(long long)arg1;
- (id)endOfDay;
- (id)startOfYear;
- (id)startOfMonth;
- (id)startOfDay;
- (long long)getMinute;
- (long long)getTotalMintesInDay;
- (long long)oneBasedWeekday;
- (long long)getWeekday;
- (long long)getHour;
- (long long)getYear;
- (long long)getMonth;
- (long long)getDay;
- (id)getYesterday;
- (id)getTomorrow;
- (id)dateWithWeekDay:(long long)arg1;
- (BOOL)isTodayInWeekWithStart:(long long)arg1 andMonth:(long long)arg2 andYear:(long long)arg3;
@end

