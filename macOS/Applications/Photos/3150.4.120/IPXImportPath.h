//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXImportSource.h"

@class NSArray, NSString, NSURL;

@interface IPXImportPath : IPXImportSource
{
    NSArray *_URLs;
    NSString *_name;
    NSURL *_primaryURL;
}

@property(retain) NSURL *primaryURL; // @synthesize primaryURL=_primaryURL;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSArray *URLs; // @synthesize URLs=_URLs;
- (void).cxx_destruct;
- (BOOL)loadIfNecessary:(id)arg1;
- (id)importAssets:(id)arg1 intoLibrary:(id)arg2 deleteAfterImport:(BOOL)arg3 statusReceiver:(id)arg4 atEnd:(CDUnknownBlockType)arg5;
- (BOOL)hasVolumeMountPoint;
- (BOOL)canClose;
- (id)iconWithSize:(struct CGSize)arg1;
- (id)displayName;
- (void)dealloc;
- (id)initWithURLs:(id)arg1 primaryURL:(id)arg2 name:(id)arg3;

@end

