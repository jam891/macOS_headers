//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNLikeness;
@protocol CNContactLikenessMutator;

@protocol CNContactLikenessMutatorFactory <NSObject>
- (id <CNContactLikenessMutator>)likenessMutatorForContact:(CNContact *)arg1 likeness:(CNLikeness *)arg2 mutationType:(long long)arg3;
@end

