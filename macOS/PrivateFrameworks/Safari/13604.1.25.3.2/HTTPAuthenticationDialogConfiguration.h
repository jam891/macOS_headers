//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/TabDialogConfiguration-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HTTPAuthenticationDialogConfiguration : NSObject <TabDialogConfiguration>
{
    BOOL _shouldHideTabContent;
    BOOL _shouldOfferToRemember;
    long long _dialogType;
    NSString *_proposedUserName;
    NSString *_securityLabel;
    NSString *_title;
    NSString *_host;
}

+ (id)authenticationDialogConfigurationWithChallenge:(const struct AuthenticationChallenge *)arg1 currentURL:(id)arg2 shouldOfferToRemember:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldOfferToRemember; // @synthesize shouldOfferToRemember=_shouldOfferToRemember;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *securityLabel; // @synthesize securityLabel=_securityLabel;
@property(readonly, copy, nonatomic) NSString *proposedUserName; // @synthesize proposedUserName=_proposedUserName;
@property(readonly, nonatomic) BOOL shouldHideTabContent; // @synthesize shouldHideTabContent=_shouldHideTabContent;
@property(readonly, nonatomic) long long dialogType; // @synthesize dialogType=_dialogType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHost:(id)arg1 title:(id)arg2 securityLabel:(id)arg3 shouldHideTabContent:(BOOL)arg4 shouldOfferToRemember:(BOOL)arg5 proposedUserName:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

