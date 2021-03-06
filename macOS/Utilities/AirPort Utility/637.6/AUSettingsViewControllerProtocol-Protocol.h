//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol AUModelProtocol;

@protocol AUSettingsViewControllerProtocol <NSObject>
@property(retain, nonatomic) id <AUModelProtocol> dataModel;
@property(readonly, nonatomic) NSString *title;
- (NSArray *)settingsErrors;
- (BOOL)settingsValid;
- (void)saveSettings;

@optional
- (BOOL)checkSettingsValidityChangingFocusIfNeeded;
- (void)cleanUpObservers;
@end

