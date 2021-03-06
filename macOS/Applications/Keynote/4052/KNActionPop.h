//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNActionEffectBuildAnimator-Protocol.h"

@class NSString;

@interface KNActionPop : KNAnimationEffect <KNActionEffectBuildAnimator>
{
}

+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)actionEffectStyle;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (BOOL)isEmphasisBuildAnimation;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)p_addAnimationsToLayer:(id)arg1 maxScale:(double)arg2 duration:(double)arg3 result:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

