//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Spotlight/PRSResult.h>

@class NSString;

@interface PRSDictionaryResult : PRSResult
{
    NSString *_dictionaryId;
    NSString *_query;
}

@property(retain) NSString *query; // @synthesize query=_query;
@property(retain) NSString *dictionaryId; // @synthesize dictionaryId=_dictionaryId;
- (void).cxx_destruct;
- (id)type;
- (id)groupName;
- (id)category;
- (unsigned long long)resultOpenOptions;
- (id)iconImage;
- (id)iconImageForApplication;
- (id)URL;
- (id)initWithDisplayName:(id)arg1 dictionaryId:(id)arg2 query:(id)arg3;

@end

