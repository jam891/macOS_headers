//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CWChannel : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_info;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *info; // @synthesize info=_info;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToChannel:(id)arg1;
@property(readonly) long long channelBand; // @dynamic channelBand;
@property(readonly) long long channelWidth; // @dynamic channelWidth;
@property(readonly) long long channelNumber; // @dynamic channelNumber;
@property(readonly) unsigned long long channelProperties; // @dynamic channelProperties;
@property(readonly) unsigned long long flags; // @dynamic flags;
- (id)initWithChannel:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (void)dealloc;

@end

