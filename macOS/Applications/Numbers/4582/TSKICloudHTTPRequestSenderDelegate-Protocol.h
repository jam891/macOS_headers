//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLResponse, TSKICloudHTTPRequestSender;

@protocol TSKICloudHTTPRequestSenderDelegate <NSObject>
- (void)iCloudHTTPRequestSender:(TSKICloudHTTPRequestSender *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)iCloudHTTPRequestSender:(TSKICloudHTTPRequestSender *)arg1 didReceiveData:(NSData *)arg2;
- (void)iCloudHTTPRequestSender:(TSKICloudHTTPRequestSender *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

