//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol iTermInstantReplayDelegate <NSObject>
- (long long)instantReplayLastTimestamp;
- (long long)instantReplayFirstTimestamp;
- (long long)instantReplayCurrentTimestamp;
- (void)instantReplayStep:(int)arg1;
- (void)instantReplaySeekTo:(float)arg1;
- (void)replaceSyntheticActiveSessionWithLiveSessionIfNeeded;
@end

