//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "PAImageActivityController-Protocol.h"
#import "PAImageAssetClientDelegate-Protocol.h"
#import "PASelectionManagerActivityReceiver-Protocol.h"

@class IPXHistogramView, NSPopUpButton, NSString, PAImageAssetClient, PAImageItemController, PAImageType, RDVersion;

@interface IPXHistogramController : IPXViewController <PAImageAssetClientDelegate, PAImageActivityController, PASelectionManagerActivityReceiver>
{
    IPXHistogramView *_histogramView;
    NSPopUpButton *channelTypePopup;
    id _histogramImageReadyNotification;
    PAImageType *_imageType;
    PAImageItemController *_itemController;
    PAImageAssetClient *_assetClient;
    BOOL _active;
    RDVersion *_version;
    long long _displayOptions;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)histogramDisplayPopupChanged:(long long)arg1;
- (BOOL)quickPreview;
- (id)bestImageType;
- (void)_updateImageType;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (id)init;
@property(retain) RDVersion *version;
- (void)_unregisterAsset;
- (void)_registerAsset;
- (void)_clearHistogram;
- (void)_updateHistogram:(id)arg1;
- (BOOL)willLoadPreview;
- (void)didUpdateHistogram:(id)arg1 client:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

