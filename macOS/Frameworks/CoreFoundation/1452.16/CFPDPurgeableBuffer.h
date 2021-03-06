//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer : CFPDDataBuffer
{
    struct __CFData *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void)dealloc;
- (BOOL)purgable;
- (void)endAccessing;
- (BOOL)beginAccessing;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithPropertyList:(void *)arg1;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;

@end

