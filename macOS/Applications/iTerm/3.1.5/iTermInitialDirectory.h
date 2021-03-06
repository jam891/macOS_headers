//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface iTermInitialDirectory : NSObject
{
    unsigned long long _mode;
    NSString *_customDirectory;
}

+ (id)initialDirectoryFromProfile:(id)arg1 objectType:(long long)arg2;
+ (unsigned long long)modeForString:(id)arg1 objectType:(long long)arg2 profile:(id)arg3 customDirectory:(id *)arg4;
@property(copy, nonatomic) NSString *customDirectory; // @synthesize customDirectory=_customDirectory;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)dealloc;
- (id)tmuxCommandByAddingCustomDirectoryWithArgs:(id)arg1 recyclingSupported:(BOOL)arg2;
- (id)tmuxCustomDirectoryParameterRecyclingSupported:(BOOL)arg1;
- (id)tmuxSplitWindowCommand:(int)arg1 vertically:(BOOL)arg2 recyclingSupported:(BOOL)arg3;
- (id)tmuxNewWindowCommandRecyclingSupported:(BOOL)arg1;
- (id)tmuxNewWindowCommandInSession:(id)arg1 recyclingSupported:(BOOL)arg2;

@end

