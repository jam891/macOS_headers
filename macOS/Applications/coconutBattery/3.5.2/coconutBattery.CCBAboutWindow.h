//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSString, NSTextField, _TtC14coconutBattery17CCBSystemAnalyzer;

@interface coconutBattery.CCBAboutWindow : NSWindowController
{
    // Error parsing type: , name: versionTextField
    // Error parsing type: , name: DonateButton
    // Error parsing type: , name: DonateLabel
    // Error parsing type: , name: ApplicationLabel
    // Error parsing type: , name: analyzerButton
    // Error parsing type: , name: sysAnalyzer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)test:(id)arg1;
- (void)closeWindowWithSender:(id)arg1;
- (void)donateWithSender:(id)arg1;
- (void)setProStdSetting;
@property(nonatomic, readonly) NSString *windowNibName;
- (void)startAnalyze:(id)arg1;
@property(nonatomic, retain) _TtC14coconutBattery17CCBSystemAnalyzer *sysAnalyzer; // @synthesize sysAnalyzer;
- (void)flagsChanged:(id)arg1;
@property(nonatomic) __weak NSButton *analyzerButton; // @synthesize analyzerButton;
- (void)windowDidLoad;
@property(nonatomic) __weak NSTextField *ApplicationLabel; // @synthesize ApplicationLabel;
@property(nonatomic) __weak NSTextField *DonateLabel; // @synthesize DonateLabel;
@property(nonatomic) __weak NSButton *DonateButton; // @synthesize DonateButton;
@property(nonatomic) __weak NSTextField *versionTextField; // @synthesize versionTextField;

@end

