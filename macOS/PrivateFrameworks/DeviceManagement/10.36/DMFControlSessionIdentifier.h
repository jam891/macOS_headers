//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/DMFControlGroupIdentifier.h>

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier
{
    unsigned int _leaderIP;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int leaderIP; // @synthesize leaderIP=_leaderIP;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToControlSessionIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
- (id)stringValue;

@end

