//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGSDock : NSObject
{
    struct CGRect _frame;
    unsigned int _orientation;
    unsigned long long _orientationSeed;
}

+ (id)currentDockForDisplays:(id)arg1;
@property(readonly) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(unsigned int)arg2 orientationSeed:(unsigned long long)arg3;
- (id)updatedDockForDisplays:(id)arg1;

@end

