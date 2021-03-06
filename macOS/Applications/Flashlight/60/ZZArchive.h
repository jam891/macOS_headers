//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSURL;
@protocol ZZChannel;

__attribute__((visibility("hidden")))
@interface ZZArchive : NSObject
{
    id <ZZChannel> _channel;
    unsigned long long _encoding;
    NSData *_contents;
    NSArray *_entries;
}

+ (id)archiveWithData:(id)arg1 error:(out id *)arg2;
+ (id)archiveWithURL:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (BOOL)updateEntries:(id)arg1 error:(out id *)arg2;
- (BOOL)loadCanMiss:(BOOL)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithChannel:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(out id *)arg3;

@end

