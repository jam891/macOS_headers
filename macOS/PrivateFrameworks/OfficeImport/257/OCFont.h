//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject
{
    BOOL _bold;
    BOOL _italic;
    OCFontSubfamily *_subfamily;
}

+ (id)fontWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3;
@property(nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(nonatomic) BOOL bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) OCFontSubfamily *subfamily; // @synthesize subfamily=_subfamily;
- (void)dealloc;
- (id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3;

@end

