//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLIOAccelDevice, MTLIOAccelResource, NSString;
@protocol MTLDevice;

@interface MTLIOAccelHeap : NSObject
{
    MTLIOAccelResource *_resource;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLRangeAllocator _allocator;
    struct _opaque_pthread_mutex_t _mutex;
    unsigned int _size;
    NSString *_label;
}

@property(copy) NSString *label; // @synthesize label=_label;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)deallocHeapSubResource;
- (void)unpinMemoryAtOffset:(unsigned int)arg1 withLength:(unsigned int)arg2;
- (id)newSubResourceWithLength:(unsigned int)arg1 alignment:(unsigned int)arg2 options:(unsigned long long)arg3 offset:(unsigned int *)arg4;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 size:(unsigned int)arg2 options:(unsigned long long)arg3 args:(struct IOAccelNewResourceArgs *)arg4 argsSize:(unsigned int)arg5;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly) unsigned long long usedSize;
@property(readonly) unsigned long long size;
@property(readonly) id <MTLDevice> device;

@end

