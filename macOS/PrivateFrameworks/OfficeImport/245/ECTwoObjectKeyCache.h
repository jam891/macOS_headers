//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECTwoObjectKeyCache : NSObject
{
    NSMutableDictionary *mCache;
}

- (void)setObject:(id)arg1 forKey1:(id)arg2 key2:(id)arg3;
- (id)objectForKey1:(id)arg1 key2:(id)arg2;
- (void)dealloc;
- (id)init;

@end

