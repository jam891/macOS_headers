//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (iTerm)
+ (id)dataWithBase64EncodedString:(id)arg1;
- (id)stringWithEncoding:(unsigned long long)arg1;
- (BOOL)appendToFile:(id)arg1 addLineBreakIfNeeded:(BOOL)arg2;
@property(readonly, nonatomic) NSString *uniformTypeIdentifierForImageData;
- (BOOL)hasPrefixOfBytes:(char *)arg1 length:(int)arg2;
- (BOOL)containsAsciiCharacterInSet:(id)arg1;
- (id)stringWithBase64EncodingWithLineBreak:(id)arg1;
@end

