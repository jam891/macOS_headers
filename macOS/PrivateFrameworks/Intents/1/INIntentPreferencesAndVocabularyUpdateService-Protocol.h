//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INVocabularyUpdateService-Protocol.h>

@protocol INIntentPreferencesAndVocabularyUpdateService <INVocabularyUpdateService>
- (void)fetchCurrentSiriLanguageCode:(void (^)(NSString *))arg1;
- (void)requestSiriAuthorization:(void (^)(long long))arg1;
- (void)fetchSiriAuthorization:(void (^)(long long))arg1;
@end

