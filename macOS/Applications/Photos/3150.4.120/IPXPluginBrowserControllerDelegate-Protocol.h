//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXPluginBrowserController, RDVersion;

@protocol IPXPluginBrowserControllerDelegate <NSObject>
- (void)pluginBrowser:(IPXPluginBrowserController *)arg1 willExitWithVersion:(RDVersion *)arg2 didSaveChanges:(BOOL)arg3 completion:(void (^)(void))arg4;
@end

