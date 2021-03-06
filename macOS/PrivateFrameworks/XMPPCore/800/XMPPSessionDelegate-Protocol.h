//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FZMessage, NSDictionary, NSString, XMPPConnection, XMPPSession;

@protocol XMPPSessionDelegate
- (void)session:(XMPPSession *)arg1 invitationReceived:(FZMessage *)arg2 forChatRoom:(NSString *)arg3;
- (void)session:(XMPPSession *)arg1 messageReceived:(FZMessage *)arg2 forChatRoom:(NSString *)arg3;
- (void)session:(XMPPSession *)arg1 messageReceived:(FZMessage *)arg2;
- (void)session:(XMPPSession *)arg1 messageError:(FZMessage *)arg2 forChatRoom:(NSString *)arg3;
- (void)session:(XMPPSession *)arg1 messageError:(NSString *)arg2 forJID:(NSString *)arg3;
- (BOOL)session:(XMPPSession *)arg1 capabilities:(unsigned long long)arg2 areBetterThanCaps:(unsigned long long)arg3;
- (void)session:(XMPPSession *)arg1 propertiesChanged:(NSDictionary *)arg2 forJID:(NSString *)arg3;
- (void)session:(XMPPSession *)arg1 stateChanged:(int)arg2 withConnection:(XMPPConnection *)arg3;
- (void)session:(XMPPSession *)arg1 autoConnectDidFailForConnection:(XMPPConnection *)arg2;
- (void)session:(XMPPSession *)arg1 didUpdateSupportsInvisible:(BOOL)arg2;
- (void)session:(XMPPSession *)arg1 tlsNegotiationFinished:(BOOL)arg2;
- (void)session:(XMPPSession *)arg1 connectedToHost:(NSString *)arg2 port:(unsigned short)arg3 usingSSL:(BOOL)arg4;

@optional
- (void)session:(XMPPSession *)arg1 willNeedGoogleOAuth2Username:(id *)arg2 andToken:(id *)arg3;
@end

