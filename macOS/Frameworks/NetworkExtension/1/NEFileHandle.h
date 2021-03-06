//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject
{
    BOOL _launchOwnerWhenReadable;
    NSFileHandle *_handle;
}

+ (id)fileHandleFromDictionary:(id)arg1;
@property(readonly) NSFileHandle *handle; // @synthesize handle=_handle;
@property(readonly) BOOL launchOwnerWhenReadable; // @synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable;
- (void).cxx_destruct;
@property(readonly) unsigned long long type;
@property(readonly) NSObject<OS_xpc_object> *dictionary;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2;
- (id)initFromDictionary:(id)arg1;

@end

