//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol VSServiceConnectionHandlerDelegate;

__attribute__((visibility("hidden")))
@interface VSServiceConnectionHandler : NSObject
{
    NSXPCConnection *_connection;
    id <VSServiceConnectionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <VSServiceConnectionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_didFinish;

@end

