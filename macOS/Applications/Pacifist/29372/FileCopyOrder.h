//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ExtractionOrder.h"

@class NSURL;

@interface FileCopyOrder : ExtractionOrder
{
    NSURL *_sourceURL;
}

+ (id)orderWithSourceURL:(id)arg1 destinationURL:(id)arg2;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;

@end

