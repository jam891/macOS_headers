//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICSearchIndexableNoteContext.h>

@class NSManagedObjectContext;

@interface ICLegacySearchIndexableNoteContext : ICSearchIndexableNoteContext
{
    BOOL _isMainContext;
    struct NSManagedObjectContext *_noteContext;
}

@property(nonatomic) BOOL isMainContext; // @synthesize isMainContext=_isMainContext;
@property(nonatomic) __weak NSManagedObjectContext *noteContext; // @synthesize noteContext=_noteContext;
- (void).cxx_destruct;
- (id)contextIdentifier;
- (id)initWithNoteContext:(struct NSManagedObjectContext *)arg1 isMainContext:(BOOL)arg2;

@end

