//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSKeywordAnalyzerNDAPIScoreDelegate-Protocol.h>
#import <CoreSpeech/CSKeywordAnalyzerQuasarScoreDelegate-Protocol.h>
#import <CoreSpeech/CSSpeakerDetectorNDAPIDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassDelegate-Protocol.h>

@class CSAsset, CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerQuasar, CSSpeakerDetectorNDAPI, CSSpeakerModel, CSSpeechManager, NSDictionary, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeakerDetectorNDAPIDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate, CSVoiceTriggerFirstPassDelegate>
{
    BOOL _useSAT;
    BOOL _hasPendingNearMiss;
    BOOL _isRunningRecognizer;
    BOOL _recognizerResultPending;
    float _keywordThreshold;
    float _keywordLoggingThreshold;
    float _lastScore;
    float _bestKeywordScore;
    float _recognizerScore;
    float _recognizerScoreScaleFactor;
    CSSpeechManager *_speechManager;
    id <CSVoiceTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzerNDAPI;
    CSKeywordAnalyzerQuasar *_keywordAnalyzerQuasar;
    CSSpeakerDetectorNDAPI *_speakerDetector;
    CSSpeakerModel *_speakerModel;
    unsigned long long _secondPassTimeout;
    unsigned long long _numAnalyzedSamples;
    unsigned long long _bestKeywordStart;
    unsigned long long _bestKeywordEnd;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _nearMissDelayTimeout;
    unsigned long long _nearMissCandidateDetectedSamples;
    NSDictionary *_lastAnalyzerResult;
    long long _numBypassSamples;
    unsigned long long _activeChannel;
}

@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) float recognizerScoreScaleFactor; // @synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor;
@property(nonatomic) BOOL recognizerResultPending; // @synthesize recognizerResultPending=_recognizerResultPending;
@property(nonatomic) BOOL isRunningRecognizer; // @synthesize isRunningRecognizer=_isRunningRecognizer;
@property(nonatomic) float recognizerScore; // @synthesize recognizerScore=_recognizerScore;
@property(nonatomic) long long numBypassSamples; // @synthesize numBypassSamples=_numBypassSamples;
@property(retain, nonatomic) NSDictionary *lastAnalyzerResult; // @synthesize lastAnalyzerResult=_lastAnalyzerResult;
@property(nonatomic) BOOL hasPendingNearMiss; // @synthesize hasPendingNearMiss=_hasPendingNearMiss;
@property(nonatomic) unsigned long long nearMissCandidateDetectedSamples; // @synthesize nearMissCandidateDetectedSamples=_nearMissCandidateDetectedSamples;
@property(nonatomic) unsigned long long nearMissDelayTimeout; // @synthesize nearMissDelayTimeout=_nearMissDelayTimeout;
@property(nonatomic) BOOL useSAT; // @synthesize useSAT=_useSAT;
@property(nonatomic) unsigned long long extraSamplesAtStart; // @synthesize extraSamplesAtStart=_extraSamplesAtStart;
@property(nonatomic) unsigned long long bestKeywordEnd; // @synthesize bestKeywordEnd=_bestKeywordEnd;
@property(nonatomic) unsigned long long bestKeywordStart; // @synthesize bestKeywordStart=_bestKeywordStart;
@property(nonatomic) float bestKeywordScore; // @synthesize bestKeywordScore=_bestKeywordScore;
@property(nonatomic) float lastScore; // @synthesize lastScore=_lastScore;
@property(nonatomic) float keywordLoggingThreshold; // @synthesize keywordLoggingThreshold=_keywordLoggingThreshold;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(nonatomic) unsigned long long numAnalyzedSamples; // @synthesize numAnalyzedSamples=_numAnalyzedSamples;
@property(nonatomic) unsigned long long secondPassTimeout; // @synthesize secondPassTimeout=_secondPassTimeout;
@property(retain, nonatomic) CSSpeakerModel *speakerModel; // @synthesize speakerModel=_speakerModel;
@property(retain, nonatomic) CSSpeakerDetectorNDAPI *speakerDetector; // @synthesize speakerDetector=_speakerDetector;
@property(retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzerQuasar; // @synthesize keywordAnalyzerQuasar=_keywordAnalyzerQuasar;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI; // @synthesize keywordAnalyzerNDAPI=_keywordAnalyzerNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
- (void).cxx_destruct;
- (void)speakerDetector:(id)arg1 didDetectSpeakerReject:(id)arg2;
- (void)speakerDetector:(id)arg1 didDetectSpeaker:(id)arg2;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_notifySecondPassReject;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)voiceTriggerFirstPass:(id)arg1 didDetectKeyword:(id)arg2;
- (void)setBypassForSeconds:(double)arg1;
- (void)reset;
- (id)initWithManager:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

