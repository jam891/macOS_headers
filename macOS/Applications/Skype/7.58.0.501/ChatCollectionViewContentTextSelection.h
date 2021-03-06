//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ChatCollectionViewContentTextSelection : NSObject
{
    NSMutableSet *_fullySelectedMessageKeys;
    NSMutableDictionary *_textSelectionDictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *textSelectionDictionary; // @synthesize textSelectionDictionary=_textSelectionDictionary;
@property(readonly, nonatomic) NSMutableSet *fullySelectedMessageKeys; // @synthesize fullySelectedMessageKeys=_fullySelectedMessageKeys;
- (void).cxx_destruct;
- (void)selectAllInMessage:(id)arg1;
- (void)deselectAllInMessage:(id)arg1;
- (void)setSelectionRange:(struct _NSRange)arg1 forTextFieldWithTag:(long long)arg2 inMessage:(id)arg3;
- (struct _NSRange)selectionRangeForTextFieldWithTag:(long long)arg1 inMessage:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfMessagesWithSelectedText;
- (BOOL)hasSelectedTextInMessage:(id)arg1;
@property(readonly, nonatomic) BOOL hasSelectedText;
- (id)init;

@end

