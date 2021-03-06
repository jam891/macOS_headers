//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCRCIndexMap;

__attribute__((visibility("hidden")))
@interface SCREventDispatcher : NSObject
{
    NSMutableDictionary *_activatorTargets;
    NSMutableDictionary *_activatorEndingTargets;
    SCRCIndexMap *_guideTargets;
    SCRCIndexMap *_taggedKeyTargets;
}

- (void)dispatchEvent:(id)arg1 withInfo:(void *)arg2 guideTarget:(id)arg3;
- (BOOL)someoneHandlesEndingEvent:(id)arg1;
- (void)lock;
- (void)removeTagEvent:(int)arg1;
- (void)setTagEventTarget:(id)arg1 selector:(SEL)arg2 tag:(int)arg3 forCommand:(id)arg4;
- (void)setTagEventTarget:(id)arg1 selector:(SEL)arg2 tag:(int)arg3;
- (void)setGuideEventTarget:(id)arg1 selector:(SEL)arg2 guideTag:(int)arg3;
- (void)setActivatorEventTarget:(id)arg1 selector:(SEL)arg2 forCommand:(id)arg3;
- (void)setActivatorEventTarget:(id)arg1 selector:(SEL)arg2 forCommand:(id)arg3 forEndingEvent:(BOOL)arg4;
- (void)dealloc;
- (id)init;

@end

