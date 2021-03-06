//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordAncestorsRequest : CKDURLRequest
{
    CDUnknownBlockType _ancestorFetchedBlock;
    CDUnknownBlockType _shareRecordFetchedBlock;
    NSArray *_recordIDs;
    NSMutableDictionary *_recordIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType shareRecordFetchedBlock; // @synthesize shareRecordFetchedBlock=_shareRecordFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType ancestorFetchedBlock; // @synthesize ancestorFetchedBlock=_ancestorFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordIDs:(id)arg1;

@end

