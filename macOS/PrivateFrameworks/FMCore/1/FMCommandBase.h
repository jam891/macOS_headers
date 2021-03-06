//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FMServerInteractionController, NSData, NSError, NSHTTPURLResponse, NSNumber, NSString, NSURLConnection, NSURLRequest, NSURLSessionDataTask;

@interface FMCommandBase : NSOperation
{
    BOOL _commandTaskComplete;
    NSError *_error;
    NSString *_scheme;
    NSString *_username;
    NSString *_password;
    NSString *_host;
    NSNumber *_port;
    double _timeout;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSData *_responseData;
    FMServerInteractionController *_serverInteractionController;
    NSURLSessionDataTask *_task;
    unsigned long long _redirectCount;
    NSString *_originalHostname;
    NSString *_redirectedHostname;
    NSURLConnection *_connection;
}

@property(nonatomic) BOOL commandTaskComplete; // @synthesize commandTaskComplete=_commandTaskComplete;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *redirectedHostname; // @synthesize redirectedHostname=_redirectedHostname;
@property(copy, nonatomic) NSString *originalHostname; // @synthesize originalHostname=_originalHostname;
@property(nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) __weak FMServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)authHeaders;
- (BOOL)isTransactionCompleteWithError:(id)arg1;
- (id)valueForResponseHTTPHeader:(id)arg1;
- (BOOL)wasSuccessful;
- (BOOL)wasRedirected;
- (id)body;
- (id)path;
- (id)headers;
- (id)method;
- (void)finishWithError:(id)arg1;
- (void)_dataTaskCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)generateFakeResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)sendRequest;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)start;
- (id)init;

@end

