//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>
{
    NSSet *_capabilities;
}

@property(readonly) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end

