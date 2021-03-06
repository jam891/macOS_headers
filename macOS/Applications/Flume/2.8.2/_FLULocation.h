//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUManagedObject.h"

@class FLULocationID, NSDate, NSNumber, NSSet, NSString;

@interface _FLULocation : FLUManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)relatedMediaSet;
- (id)messagesSet;
- (id)mediaSet;
- (void)setPrimitiveSearchPositionValue:(unsigned long long)arg1;
- (unsigned long long)primitiveSearchPositionValue;
@property unsigned long long searchPositionValue;
- (void)setPrimitiveMediaCountValue:(unsigned long long)arg1;
- (unsigned long long)primitiveMediaCountValue;
@property unsigned long long mediaCountValue;
- (void)setPrimitiveLongitudeValue:(double)arg1;
- (double)primitiveLongitudeValue;
@property double longitudeValue;
- (void)setPrimitiveLatitudeValue:(double)arg1;
- (double)primitiveLatitudeValue;
@property double latitudeValue;
- (void)setPrimitiveIsFavoritedValue:(BOOL)arg1;
- (BOOL)primitiveIsFavoritedValue;
@property BOOL isFavoritedValue;
- (void)setPrimitiveFrequencyCountValue:(unsigned long long)arg1;
- (unsigned long long)primitiveFrequencyCountValue;
@property unsigned long long frequencyCountValue;
@property(readonly, nonatomic) FLULocationID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSString *externalID; // @dynamic externalID;
@property(retain, nonatomic) NSString *externalIDSource; // @dynamic externalIDSource;
@property(retain, nonatomic) NSDate *favouriteDate; // @dynamic favouriteDate;
@property(retain, nonatomic) NSNumber *frequencyCount; // @dynamic frequencyCount;
@property(retain, nonatomic) NSNumber *isFavorited; // @dynamic isFavorited;
@property(retain, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSSet *media; // @dynamic media;
@property(retain, nonatomic) NSNumber *mediaCount; // @dynamic mediaCount;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *relatedMedia; // @dynamic relatedMedia;
@property(retain, nonatomic) NSString *remoteID; // @dynamic remoteID;
@property(retain, nonatomic) NSNumber *searchPosition; // @dynamic searchPosition;

@end

