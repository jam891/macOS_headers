//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSharedGridBrowserController.h"

@class IPXSharedBrowserModel;

@interface IPXSharedStreamsBrowserController : IPXSharedGridBrowserController
{
    IPXSharedBrowserModel *_model;
}

+ (id)rootViewControllerForNavigationDestination:(id)arg1 model:(id)arg2;
+ (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1 model:(id)arg2;
@property(readonly, nonatomic) IPXSharedBrowserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (id)navigationIdentifier;
- (id)initWithLibrary:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

