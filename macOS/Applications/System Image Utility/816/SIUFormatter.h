//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface SIUFormatter : NSFormatter
{
    long long _maxLength;
    NSCharacterSet *_characterSet;
    BOOL _hasCharacterSet;
}

+ (id)unixNameFormatter;
+ (id)computerNameFormatter;
+ (id)maxLengthFormatter:(long long)arg1;
@property(retain, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(long long)arg2;
- (id)initWithMaxLength:(long long)arg1;

@end

