//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <QTKit/QTImageConsumerVendor-Protocol.h>

@protocol QTImageConsumer;

__attribute__((visibility("hidden")))
@interface QTCGContextRendererView : NSView <QTImageConsumerVendor>
{
    id <QTImageConsumer> _imageConsumer;
}

- (id)imageConsumer;
- (void)scheduleRendererOnCurrentRunLoop:(id)arg1;
- (void)rendererNewImageDidBecomeAvailable:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

