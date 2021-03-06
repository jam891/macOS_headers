//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ITMCreateTabRequest, ITMGetBufferRequest, ITMGetPromptRequest, ITMListSessionsRequest, ITMNotificationRequest, ITMRegisterToolRequest, ITMSendTextRequest, ITMSetProfilePropertyRequest, ITMSplitPaneRequest, NSDictionary;

@protocol iTermAPIServerDelegate <NSObject>
- (void)apiServerSplitPane:(ITMSplitPaneRequest *)arg1 handler:(void (^)(ITMSplitPaneResponse *))arg2;
- (void)apiServerCreateTab:(ITMCreateTabRequest *)arg1 handler:(void (^)(ITMCreateTabResponse *))arg2;
- (void)apiServerSendText:(ITMSendTextRequest *)arg1 handler:(void (^)(ITMSendTextResponse *))arg2;
- (void)apiServerListSessions:(ITMListSessionsRequest *)arg1 handler:(void (^)(ITMListSessionsResponse *))arg2;
- (void)apiServerSetProfileProperty:(ITMSetProfilePropertyRequest *)arg1 handler:(void (^)(ITMSetProfilePropertyResponse *))arg2;
- (void)apiServerRegisterTool:(ITMRegisterToolRequest *)arg1 peerIdentity:(NSDictionary *)arg2 handler:(void (^)(ITMRegisterToolResponse *))arg3;
- (void)apiServerRemoveSubscriptionsForConnection:(id)arg1;
- (void)apiServerNotification:(ITMNotificationRequest *)arg1 connection:(id)arg2 handler:(void (^)(ITMNotificationResponse *))arg3;
- (void)apiServerGetPrompt:(ITMGetPromptRequest *)arg1 handler:(void (^)(ITMGetPromptResponse *))arg2;
- (void)apiServerGetBuffer:(ITMGetBufferRequest *)arg1 handler:(void (^)(ITMGetBufferResponse *))arg2;
- (NSDictionary *)apiServerAuthorizeProcess:(int)arg1;
@end

