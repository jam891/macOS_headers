//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _deviceType;
    long long _device;
    long long _renderer;
}

+ (id)currentCapabilities;
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;
- (struct CGSize)maximumTextureSizeWithGLContext:(struct _CGLContextObject *)arg1;
@property(readonly, nonatomic) BOOL hasLightningPort;
@property(readonly, nonatomic) BOOL isRendererH5OrBelow;
@property(readonly, nonatomic) BOOL isRendererH4OrBelow;
@property(readonly, nonatomic) BOOL isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end

