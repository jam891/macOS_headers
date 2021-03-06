//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGAtomicCancelationToken, MGAudioAmplitudeExtractionSession, MGAudioExtractor;

@interface MGAudioAmplitudeExtractionSessionHelper : NSObject
{
    MGAudioAmplitudeExtractionSession *_owner;
    struct os_unfair_lock_s _ownerLock;
    MGAtomicCancelationToken *_cancelationToken;
    MGAudioExtractor *_uncompressedAudioExtractor;
    unsigned long long _numberOfChannels;
    id *_amplitudeSampleDataArray;
    unsigned long long _numberOfAmplitudeSamplesPerSecond;
    int _numberOfExtractedAmplitudeSamples;
    float _maximumExtractedAmplitude;
    struct os_unfair_lock_s _maximumExtractedAmplitudeLock;
    int _isExtractionFinished;
}

@property(readonly, nonatomic) unsigned long long numberOfAmplitudeSamplesPerSecond; // @synthesize numberOfAmplitudeSamplesPerSecond=_numberOfAmplitudeSamplesPerSecond;
@property(readonly, nonatomic) MGAudioExtractor *uncompressedAudioExtractor; // @synthesize uncompressedAudioExtractor=_uncompressedAudioExtractor;
- (void).cxx_destruct;
- (float)maximumExtractedAmplitude;
- (id)amplitudeSamplesInRange:(struct _NSRange)arg1;
- (BOOL)isExtractionFinished;
- (id)availableAmplitudeSampleIndexes;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)initWithOwner:(id)arg1 uncompressedAudioExtractor:(id)arg2 numberOfAmplitudeSamplesPerSecond:(unsigned long long)arg3;

@end

