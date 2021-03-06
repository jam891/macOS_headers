//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPointerArray;

__attribute__((visibility("hidden")))
@interface _NSCGSTransaction : NSObject
{
    NSPointerArray *_preCommitActions[3];
    NSPointerArray *_postCommitActions;
    NSMutableDictionary *_objects;
    const void *_disableUpdatesToken;
}

+ (BOOL)isActive;
+ (id)currentTransaction;
+ (void)setSynchronous:(BOOL)arg1;
+ (void)initialize;
- (void)disableUpdates;
- (void)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)addPostCommitAction:(CDUnknownBlockType)arg1;
- (void)addActionWithOrder:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

