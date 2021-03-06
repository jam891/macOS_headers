//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OCXRelationships : NSObject
{
    NSString *mPath;
    NSMutableArray *mRelationships;
    NSMutableDictionary *mRelationshipMap;
    unsigned long long mNextId;
}

- (void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2;
- (id)targetForKey:(id)arg1;
- (id)idForKey:(id)arg1;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;
- (BOOL)isEmpty;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

