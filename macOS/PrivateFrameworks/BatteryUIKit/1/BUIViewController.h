//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImageView, NSTextField;

@interface BUIViewController : NSObject
{
    BOOL powerChimeView;
    NSImageView *_batteryImageView;
    NSTextField *_batteryImageLabel;
    double _redStateTriggerLevel;
}

@property double redStateTriggerLevel; // @synthesize redStateTriggerLevel=_redStateTriggerLevel;
@property(retain) NSTextField *batteryImageLabel; // @synthesize batteryImageLabel=_batteryImageLabel;
@property(retain) NSImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
@property BOOL powerChimeView; // @synthesize powerChimeView;
- (void).cxx_destruct;
@property(getter=isHidden) BOOL hidden; // @dynamic hidden;
- (void)updateWithParametersWithPercentCharged:(double)arg1 useRed:(BOOL)arg2;
- (void)updateWithParametersWithPercentCharged:(double)arg1;
- (void)updateWithParameters:(id)arg1;
- (id)initPowerChimeView;
- (id)init;

@end

