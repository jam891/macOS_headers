//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ISCViewController;

@protocol ISCViewControllerDelegate <NSObject>
- (int)ISCViewControllerDirectionOfSwipe:(ISCViewController *)arg1;
- (BOOL)ISCViewControllerShouldPopulate:(ISCViewController *)arg1;
- (BOOL)ISCViewControllerAllowDeferral:(ISCViewController *)arg1;

@optional
- (void)ISCViewControllerDidPopulateFirstTime:(ISCViewController *)arg1;
@end

