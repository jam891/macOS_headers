//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject
{
    BOOL _shouldUpdateRepresentative;
    NSArray *_objects;
    unsigned long long _clusterId;
    unsigned long long _totalObjectCount;
    NSArray *_suggestedIdsForRepresentative;
    NSDictionary *_representativenessById;
}

@property(retain, nonatomic) NSDictionary *representativenessById; // @synthesize representativenessById=_representativenessById;
@property(retain, nonatomic) NSArray *suggestedIdsForRepresentative; // @synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative;
@property(nonatomic) BOOL shouldUpdateRepresentative; // @synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative;
@property(nonatomic) unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property(nonatomic) unsigned long long clusterId; // @synthesize clusterId=_clusterId;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

