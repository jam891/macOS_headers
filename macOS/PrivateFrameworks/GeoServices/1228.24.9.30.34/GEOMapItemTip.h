//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDTip, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapItemTip : NSObject
{
    GEOPDTip *_geoTip;
}

@property(retain, nonatomic) GEOPDTip *geoTip; // @synthesize geoTip=_geoTip;
@property(readonly, nonatomic) NSString *tipId;
@property(readonly, nonatomic) BOOL hasTipId;
@property(readonly, nonatomic) NSString *bestImageURL;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double tipTime;
@property(readonly, nonatomic) BOOL hasTipTime;
@property(readonly, nonatomic) NSString *localizedSnippet;
- (void)dealloc;
- (id)initWithGEOPDTip:(id)arg1;

@end

