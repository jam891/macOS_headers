//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class NSString;

@interface MFEWSDeleteMailboxTaskOperation : MFEWSPersistenceTaskOperation
{
    BOOL _didDelete;
    NSString *_folderIDString;
}

@property(readonly, copy, nonatomic) NSString *folderIDString; // @synthesize folderIDString=_folderIDString;
@property(nonatomic) BOOL didDelete; // @synthesize didDelete=_didDelete;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithFolderIDString:(id)arg1;

@end

