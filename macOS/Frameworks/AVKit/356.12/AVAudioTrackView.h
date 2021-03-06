//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVTrackView.h>

#import <AVKit/CALayerDelegate-Protocol.h>

@class AVAudioAmplitudeExtractionSession, AVDataPool, AVPlayerController, CALayer, CATiledLayer, NSString;

__attribute__((visibility("hidden")))
@interface AVAudioTrackView : AVTrackView <CALayerDelegate>
{
    AVPlayerController *_playerController;
    AVAudioAmplitudeExtractionSession *_audioAmplitudeExtractionSession;
    CATiledLayer *_waveformLayer;
    CALayer *_centerLineLayer;
    struct CGSize _lastPreviewLayerBoundsSize;
    AVDataPool *_rectListPool;
    struct CGRect _pendingDirtyRect;
}

+ (void)drawAudioWaveformLayer:(id)arg1 inContext:(struct CGContext *)arg2 withAudioAmplitudeExtractionSession:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 rectListPool:(id)arg5;
- (void).cxx_destruct;
- (void)audioAmplitudeSamplesDidBecomeAvailable:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)viewDidEndLiveResize;
- (void)setAudioAmplitudeExtractionSession:(id)arg1;
- (id)audioAmplitudeExtractionSession;
- (void)setPlayerController:(id)arg1;
- (id)playerController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

