//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PKStrokeData : NSObject
{
    unsigned long long _pointsCount;
    unsigned long long _pointsMaxCount;
    char *_points;
    BOOL _pointsOwned;
}

- (void)dealloc;
- (id)initWithPoints:(struct PKCompressedStrokePoint *)arg1 count:(unsigned long long)arg2 copy:(BOOL)arg3;
- (id)init;

@end

