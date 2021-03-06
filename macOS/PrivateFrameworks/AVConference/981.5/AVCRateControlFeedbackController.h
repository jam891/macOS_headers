//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
}

@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (BOOL)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_a561fd19 *)arg2;
- (CDStruct_a561fd19)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (CDStruct_a561fd19)translateRateControlFeedbackMessageFromData:(id)arg1;
- (id)getRateControlDataWithStatistics:(id)arg1;
- (BOOL)processRateControlProbingMessage:(CDStruct_0004415b)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)processRateControlFeedbackMessage:(CDStruct_a561fd19)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (BOOL)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (BOOL)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (void)dealloc;

@end

