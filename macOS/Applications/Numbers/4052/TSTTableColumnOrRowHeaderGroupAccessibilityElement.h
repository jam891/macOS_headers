//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDCanvasHostedAccessibilityElement.h"

#import "TSTTableChildAccessibilityElement-Protocol.h"

@class NSString, TSTTableRepAccessibility;

@interface TSTTableColumnOrRowHeaderGroupAccessibilityElement : TSDCanvasHostedAccessibilityElement <TSTTableChildAccessibilityElement>
{
    TSTTableRepAccessibility *_tableRep;
    long long _direction;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) TSTTableRepAccessibility *tableRep; // @synthesize tableRep=_tableRep;
- (struct CGRect)frameInUnscaledCanvas;
- (id)parentCanvas;
- (id)tsaxChildren;
- (id)tsaxRole;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

