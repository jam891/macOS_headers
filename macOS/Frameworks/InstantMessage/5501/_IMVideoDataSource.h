//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IMVideoDataSource : NSObject
{
}

- (BOOL)fillBuffer:(struct __CVBuffer *)arg1;
- (BOOL)_copyOpenGLBuffer:(struct __CVBuffer *)arg1 screen:(int)arg2 toPixelBuffer:(struct __CVBuffer *)arg3;
- (unsigned long long)frameUpdateMechanism;
- (unsigned int)pbPixelFormat;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;

@end

