//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface ItemDeserializer : NSObject
{
    NSData *_data;
    unsigned long long _currIndex;
}

- (void).cxx_destruct;
- (void)assertBufferEnd;
- (void)readCStringToBuffer:(char *)arg1 cStringLength:(unsigned long long)arg2;
- (unsigned long long)readCStringLength;
- (unsigned long long)readUInt64;
- (unsigned char)readUInt8;
- (id)initWithData:(id)arg1;

@end

