//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MBSecondPartyHostViewController.h"

#import "CNAvatarEditorDelegate-Protocol.h"

@class CNLikenessEditorBuddyController, NSString;

@interface AvatarCreationViewController : MBSecondPartyHostViewController <CNAvatarEditorDelegate>
{
    CNLikenessEditorBuddyController *_avatarViewController;
}

@property(retain) CNLikenessEditorBuddyController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (void).cxx_destruct;
- (void)editorDidFinish:(id)arg1 cancelled:(BOOL)arg2;
- (BOOL)requiresExpandedContainerView;
- (id)nextViewIdentifier;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

