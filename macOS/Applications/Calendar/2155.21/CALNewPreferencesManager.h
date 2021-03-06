//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALPreferencesPanesController;

@interface CALNewPreferencesManager : NSObject
{
    CALPreferencesPanesController *_panesController;
    id generalPaneController;
    id backupPaneController;
    id _advancedPaneController;
    id _accountsPaneController;
    id _alertsPaneController;
    id formatter;
    BOOL _nibLoaded;
    BOOL _canDisableBirthdaysCalendar;
    int _observingDisabledCount;
    int _cacheNumberOfHours;
    double _cacheStartShownMinute;
    int _cacheHeatMapInYearView;
    int _cacheShowWeekNumbers;
    int _cacheShowMultiDayEventsAsAllDayEvents;
    int _cacheTimeZoneSupportEnabled;
}

+ (void)setSuggestedEventCalendarEnabled:(BOOL)arg1 inWindow:(id)arg2;
+ (id)defaultManager;
+ (void)initialize;
+ (id)getPrefix;
+ (id)getAppName;
+ (id)presencePortName;
- (void).cxx_destruct;
- (void)setString:(id)arg1 forPref:(id)arg2;
- (void)setBool:(BOOL)arg1 forPref:(id)arg2;
- (void)setFloat:(double)arg1 forPref:(id)arg2;
- (void)setInteger:(long long)arg1 forPref:(id)arg2;
- (void)setObject:(id)arg1 forPref:(id)arg2;
- (id)stringForPref:(id)arg1;
- (BOOL)boolForPref:(id)arg1;
- (double)floatForPref:(id)arg1;
- (long long)integerForPref:(id)arg1;
- (id)objectForPref:(id)arg1;
- (void)setNoValueForPref:(id)arg1;
- (BOOL)canChooseFirstDayOfWeek;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)postPreferencesChangedNotificationOnMainThread:(id)arg1;
- (BOOL)isCachedPref:(id)arg1;
- (void)flushCachedPrefs;
- (BOOL)showMultiDayEventsAsAllDayEvents;
- (BOOL)showWeekNumbers;
- (BOOL)timezoneSupportEnabled;
- (BOOL)showHeatMapInYearView;
- (double)startShownMinute;
- (long long)numberOfHoursDisplayed;
- (BOOL)showPrefsForPrincipal:(id)arg1;
- (void)showPrefs:(id)arg1;
- (void)enableObserving;
- (void)disableObserving;
- (id)init;
- (id)panesController;
- (void)updateDisableBirthdaysCalendar;
- (void)setCanDisableBirthdaysCalendar:(BOOL)arg1;
- (BOOL)canDisableBirthdaysCalendar;

@end

