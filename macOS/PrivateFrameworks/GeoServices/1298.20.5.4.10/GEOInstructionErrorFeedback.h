//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOInstructionErrorFeedback : PBCodable <NSCopying>
{
    NSMutableArray *_clientInstructions;
    int _instructionStage;
    int _maneuverType;
    NSMutableArray *_serverInstructions;
    BOOL _isSpoken;
    struct {
        unsigned int instructionStage:1;
        unsigned int maneuverType:1;
        unsigned int isSpoken:1;
    } _has;
}

+ (Class)serverInstructionType;
+ (Class)clientInstructionType;
@property(retain, nonatomic) NSMutableArray *serverInstructions; // @synthesize serverInstructions=_serverInstructions;
@property(retain, nonatomic) NSMutableArray *clientInstructions; // @synthesize clientInstructions=_clientInstructions;
@property(nonatomic) BOOL isSpoken; // @synthesize isSpoken=_isSpoken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serverInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)serverInstructionsCount;
- (void)addServerInstruction:(id)arg1;
- (void)clearServerInstructions;
- (id)clientInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientInstructionsCount;
- (void)addClientInstruction:(id)arg1;
- (void)clearClientInstructions;
@property(nonatomic) BOOL hasIsSpoken;
- (int)StringAsInstructionStage:(id)arg1;
- (id)instructionStageAsString:(int)arg1;
@property(nonatomic) BOOL hasInstructionStage;
@property(nonatomic) int instructionStage; // @synthesize instructionStage=_instructionStage;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;

@end

