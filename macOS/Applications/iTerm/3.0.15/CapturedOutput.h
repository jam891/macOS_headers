//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CaptureTrigger, NSArray, NSData, NSString, iTermCapturedOutputMark;

@interface CapturedOutput : NSObject
{
    BOOL _state;
    NSString *_line;
    NSArray *_values;
    CaptureTrigger *_trigger;
    iTermCapturedOutputMark *_mark;
    NSString *_markGuid;
    NSData *_triggerDigest;
}

+ (id)capturedOutputWithDictionary:(id)arg1;
@property(retain, nonatomic) NSData *triggerDigest; // @synthesize triggerDigest=_triggerDigest;
@property(copy, nonatomic) NSString *markGuid; // @synthesize markGuid=_markGuid;
@property(retain, nonatomic) iTermCapturedOutputMark *mark; // @synthesize mark=_mark;
@property(nonatomic) BOOL state; // @synthesize state=_state;
@property(retain, nonatomic) CaptureTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *line; // @synthesize line=_line;
- (id)dictionaryValue;
- (void)setKnownTriggers:(id)arg1;
- (void)dealloc;

@end

