//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class CNContact, NSDictionary, NSString;

@protocol CHPhoneBookManagerProtocol <NSObject>
+ (id)get;
- (BOOL)isABContactASuggestion;
- (NSString *)getLocalizedCallerIdLabelForContact:(CNContact *)arg1 forCallerId:(NSString *)arg2 withCallerIdIsEmail:(BOOL)arg3;
- (NSString *)getPersonsNameForContact:(CNContact *)arg1;
- (NSDictionary *)getRecordId:(NSString *)arg1 isEmail:(BOOL)arg2;
@end

