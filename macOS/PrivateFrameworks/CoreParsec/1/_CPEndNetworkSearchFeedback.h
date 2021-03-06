//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>
#import <CoreParsec/SFEndNetworkSearchFeedback-Protocol.h>

@class NSDictionary, NSString, _CPNetworkTimingData;

@interface _CPEndNetworkSearchFeedback : PBCodable <SFEndNetworkSearchFeedback, NSCopying>
{
    long long _responseSize;
    unsigned long long _timestamp;
    _CPNetworkTimingData *_networkTiming;
    int _statusCode;
    NSString *_uuid;
    struct {
        unsigned int responseSize:1;
        unsigned int statusCode:1;
    } _has;
}

@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _CPNetworkTimingData *networkTiming; // @synthesize networkTiming=_networkTiming;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasUuid;
@property(readonly, nonatomic) BOOL hasNetworkTiming;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) BOOL hasResponseSize;
@property(copy, nonatomic) NSDictionary *networkTimingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

