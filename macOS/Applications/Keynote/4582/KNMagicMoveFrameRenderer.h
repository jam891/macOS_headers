//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNFrameRenderer.h"

@class NSMapTable, NSMutableArray, NSOperationQueue, NSTimer, TSDFPSCounter;

@interface KNMagicMoveFrameRenderer : KNFrameRenderer
{
    NSMutableArray *mMatches;
    NSMutableArray *mMorphMatches;
    double mLastMorphTime;
    NSMapTable *mLayerToOldHiddenMap;
    TSDFPSCounter *mMorphFPSCounter;
    double mMorphFrameDurationAverage;
    NSTimer *mMorphUpdateTimer;
    double mNextMorphAnimationTime;
    BOOL mIsDone;
    NSOperationQueue *mMorphOperationQueue;
    struct _CGLContextObject *mMorphGLContext;
    double mAnimationStartTime;
}

- (void)p_updateMorphAnimationsForTime:(double)arg1;
- (void)drawFrameAtLayerTime:(double)arg1;
- (void)p_restoreLayerHierarchyIsExitingShow:(BOOL)arg1;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)releaseTextures;
- (void)p_generateMagicMoveMatches;
- (void)generateTexturesIfNecessary;
- (void)setupPluginContext;
- (void)teardownTransitionIsExitingShow:(BOOL)arg1;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;

@end

