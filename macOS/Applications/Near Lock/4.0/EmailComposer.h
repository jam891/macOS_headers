//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EmailComposer : NSObject
{
}

+ (id)mobileDeviceBody;
+ (id)newLines:(long long)arg1;
+ (id)getEmailBodySignature;
+ (void)sendEmailWithMail:(id)arg1 Address:(id)arg2 Subject:(id)arg3 Body:(id)arg4;
+ (void)sendFeedbackEmail;
+ (void)sendSupportEmail;

@end

