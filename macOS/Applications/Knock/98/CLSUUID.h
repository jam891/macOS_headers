//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CLSUUID : NSObject
{
    NSData *_data;
}

+ (id)generateWithSegmentData:(id)arg1;
@property(readonly) NSData *data; // @synthesize data=_data;
- (BOOL)_populateLastComponent:(char *)arg1 segmentBuffer:(const char *)arg2;
- (BOOL)_populatePID:(char *)arg1;
- (BOOL)_populateSequenceNumber:(char *)arg1;
- (BOOL)_populateTime:(char *)arg1;
- (id)description;
- (id)stringValue;
- (void)dealloc;
- (id)initWithSegmentData:(id)arg1;

@end

