//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBDateTimeRangeValue, _INPBLocationValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBTimestamp, _INPBUserActivity;

@interface _INPBRideStatus : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_additionalActionItems;
    _INPBRideCompletionStatus *_completionStatus;
    _INPBRideDriver *_driver;
    _INPBLocationValue *_dropOffLocation;
    _INPBTimestamp *_estimatedDropOffDate;
    _INPBTimestamp *_estimatedPickupDate;
    _INPBTimestamp *_estimatedPickupEndDate;
    int _phase;
    _INPBLocationValue *_pickupLocation;
    NSString *_rideIdentifier;
    _INPBRideOption *_rideOption;
    _INPBDateTimeRangeValue *_scheduledPickupTime;
    _INPBUserActivity *_userActivityForCancelingInApplication;
    _INPBRideVehicle *_vehicle;
    NSMutableArray *_waypoints;
    struct {
        unsigned int phase:1;
    } _has;
}

+ (Class)additionalActionItemsType;
+ (Class)waypointsType;
+ (id)options;
@property(retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime; // @synthesize scheduledPickupTime=_scheduledPickupTime;
@property(retain, nonatomic) NSMutableArray *additionalActionItems; // @synthesize additionalActionItems=_additionalActionItems;
@property(retain, nonatomic) _INPBRideCompletionStatus *completionStatus; // @synthesize completionStatus=_completionStatus;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate; // @synthesize estimatedPickupEndDate=_estimatedPickupEndDate;
@property(retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication; // @synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication;
@property(retain, nonatomic) _INPBRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(retain, nonatomic) _INPBLocationValue *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) _INPBLocationValue *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(retain, nonatomic) _INPBTimestamp *estimatedDropOffDate; // @synthesize estimatedDropOffDate=_estimatedDropOffDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(retain, nonatomic) _INPBRideDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) _INPBRideVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(retain, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasScheduledPickupTime;
- (id)additionalActionItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalActionItemsCount;
- (void)addAdditionalActionItems:(id)arg1;
- (void)clearAdditionalActionItems;
@property(readonly, nonatomic) BOOL hasCompletionStatus;
@property(readonly, nonatomic) BOOL hasEstimatedPickupEndDate;
@property(readonly, nonatomic) BOOL hasUserActivityForCancelingInApplication;
@property(readonly, nonatomic) BOOL hasRideOption;
@property(readonly, nonatomic) BOOL hasDropOffLocation;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;
@property(readonly, nonatomic) BOOL hasPickupLocation;
@property(readonly, nonatomic) BOOL hasEstimatedDropOffDate;
@property(readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property(readonly, nonatomic) BOOL hasDriver;
@property(readonly, nonatomic) BOOL hasVehicle;
- (int)StringAsPhase:(id)arg1;
- (id)phaseAsString:(int)arg1;
@property(nonatomic) BOOL hasPhase;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) BOOL hasRideIdentifier;

@end

