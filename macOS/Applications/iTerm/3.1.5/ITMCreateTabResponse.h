//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ITMCreateTabResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) BOOL hasStatus; // @dynamic hasStatus;
@property(nonatomic) BOOL hasTabId; // @dynamic hasTabId;
@property(nonatomic) BOOL hasWindowId; // @dynamic hasWindowId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int tabId; // @dynamic tabId;
@property(copy, nonatomic) NSString *windowId; // @dynamic windowId;

@end

