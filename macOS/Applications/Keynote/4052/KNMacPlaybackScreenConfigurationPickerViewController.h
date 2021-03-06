//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class KNMacPresenterDisplayConfigurationPickerViewController, KNMacPresenterDisplayConfigurationSetController, NSView;

@interface KNMacPlaybackScreenConfigurationPickerViewController : NSViewController
{
    BOOL _forFullscreenConfiguration;
    KNMacPresenterDisplayConfigurationPickerViewController *_pickerViewController;
    KNMacPresenterDisplayConfigurationSetController *_configurationSetController;
    NSView *_layoutHeaderView;
    NSView *_configureFooterView;
}

@property(retain, nonatomic) NSView *configureFooterView; // @synthesize configureFooterView=_configureFooterView;
@property(retain, nonatomic) NSView *layoutHeaderView; // @synthesize layoutHeaderView=_layoutHeaderView;
@property(retain, nonatomic) KNMacPresenterDisplayConfigurationSetController *configurationSetController; // @synthesize configurationSetController=_configurationSetController;
@property(retain, nonatomic) KNMacPresenterDisplayConfigurationPickerViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
@property(nonatomic) BOOL forFullscreenConfiguration; // @synthesize forFullscreenConfiguration=_forFullscreenConfiguration;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfigurationSetController:(id)arg1 forFullscreen:(BOOL)arg2;

@end

