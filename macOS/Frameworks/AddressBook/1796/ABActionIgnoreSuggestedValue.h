//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABActionDelegate-Protocol.h>

@class ABCollectionViewItem, NSString;
@protocol ABCardCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface ABActionIgnoreSuggestedValue : NSObject <ABActionDelegate>
{
    NSString *_property;
    id _value;
    id <ABCardCollectionViewDelegate> _delegate;
    ABCollectionViewItem *_item;
}

- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
@property(readonly) NSString *actionProperty;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 delegate:(id)arg3 item:(id)arg4;

@end

