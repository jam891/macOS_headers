//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DM_SUAppcast, DM_SUAppcastItem, DM_SUUpdater, NSAlert, NSArray, NSError, NSInvocation, NSMutableURLRequest, NSString;
@protocol DM_SUVersionComparison, DM_SUVersionDisplay;

@protocol DM_SUUpdaterDelegate <NSObject>

@optional
- (NSString *)pathToRelaunchForUpdater:(DM_SUUpdater *)arg1;
- (id <DM_SUVersionDisplay>)versionDisplayerForUpdater:(DM_SUUpdater *)arg1;
- (id <DM_SUVersionComparison>)versionComparatorForUpdater:(DM_SUUpdater *)arg1;
- (void)updater:(DM_SUUpdater *)arg1 willDownloadUpdate:(DM_SUAppcastItem *)arg2 withRequest:(NSMutableURLRequest *)arg3;
- (DM_SUAppcastItem *)bestValidUpdateInAppcast:(DM_SUAppcast *)arg1 forUpdater:(DM_SUUpdater *)arg2;
- (void)updater:(DM_SUUpdater *)arg1 didFinishLoadingAppcast:(DM_SUAppcast *)arg2;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(DM_SUUpdater *)arg1;
- (NSString *)feedURLStringForUpdater:(DM_SUUpdater *)arg1;
- (NSArray *)feedParametersForUpdater:(DM_SUUpdater *)arg1 sendingSystemProfile:(BOOL)arg2;
- (BOOL)updaterMayCheckForUpdates:(DM_SUUpdater *)arg1;
- (void)updater:(DM_SUUpdater *)arg1 didAbortWithError:(NSError *)arg2;
- (void)updater:(DM_SUUpdater *)arg1 didCancelInstallUpdateOnQuit:(DM_SUAppcastItem *)arg2;
- (void)updater:(DM_SUUpdater *)arg1 willInstallUpdateOnQuit:(DM_SUAppcastItem *)arg2 immediateInstallationInvocation:(NSInvocation *)arg3;
- (void)updaterDidShowModalAlert:(DM_SUUpdater *)arg1;
- (void)updaterWillShowModalAlert:(DM_SUUpdater *)arg1;
- (BOOL)updater:(DM_SUUpdater *)arg1 mayShowModalAlert:(NSAlert *)arg2;
- (void)updaterWillRelaunchApplication:(DM_SUUpdater *)arg1;
- (BOOL)updaterShouldRelaunchApplication:(DM_SUUpdater *)arg1;
- (BOOL)updater:(DM_SUUpdater *)arg1 shouldPostponeRelaunchForUpdate:(DM_SUAppcastItem *)arg2 untilInvoking:(NSInvocation *)arg3;
- (void)updater:(DM_SUUpdater *)arg1 willInstallUpdate:(DM_SUAppcastItem *)arg2;
- (void)userDidCancelDownload:(DM_SUUpdater *)arg1;
- (void)updater:(DM_SUUpdater *)arg1 failedToDownloadUpdate:(DM_SUAppcastItem *)arg2 error:(NSError *)arg3;
- (void)updaterDidNotFindUpdate:(DM_SUUpdater *)arg1;
- (void)updater:(DM_SUUpdater *)arg1 didFindValidUpdate:(DM_SUAppcastItem *)arg2;
@end

