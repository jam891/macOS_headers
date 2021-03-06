//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord
{
    short _sequenceHashIndex;
    NSData *_sequence;
    NSString *_plainSequence;
}

+ (id)recordWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7;
+ (id)entityName;
@property(copy, nonatomic) NSString *plainSequence; // @synthesize plainSequence=_plainSequence;
@property(nonatomic) short sequenceHashIndex; // @synthesize sequenceHashIndex=_sequenceHashIndex;
@property(retain, nonatomic) NSData *sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (id)jsonString;
- (id)description;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;

@end

