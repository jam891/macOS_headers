//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class SFSpeechRecognitionResult, SFSpeechRecognitionTask, SFTranscription;

@protocol SFSpeechRecognitionTaskDelegate <NSObject>

@optional
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTaskWasCancelled:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTaskFinishedReadingAudio:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishRecognition:(SFSpeechRecognitionResult *)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionDidDetectSpeech:(SFSpeechRecognitionTask *)arg1;
@end

