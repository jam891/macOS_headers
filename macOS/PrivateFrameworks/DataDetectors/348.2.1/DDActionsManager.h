//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol DDActionsManagerDelegateProtocol;

@interface DDActionsManager : NSObject
{
    NSMutableDictionary *_actionsDictionary;
    NSMutableSet *_uiElementsInUse;
    BOOL _forceWindowAnimationsFromRight;
    BOOL _containsAnchoredElement;
    long long _requestCount;
    id _delegate;
}

+ (void)actionUIClosed;
+ (void)actionUIOpenedWithContext:(id)arg1;
+ (void)didUseActions;
+ (BOOL)shouldUseActionsWithContext:(id)arg1;
+ (BOOL)hitWindowIsPopover;
+ (id)sharedManager;
@property id <DDActionsManagerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property BOOL forceWindowAnimationsFromRight; // @synthesize forceWindowAnimationsFromRight=_forceWindowAnimationsFromRight;
- (id)_allowedClassNames;
- (void)_loadAllPlugins;
- (void)_listActionsInPlugin:(id)arg1;
- (void)_load;
- (void)runActionForDictionary:(id)arg1;
- (void)requestBubbleClosureUnanchorOnFailure:(BOOL)arg1;
- (void)unanchorBubbles;
- (BOOL)hasUIElementInUse;
- (void)serviceAnswered;
- (void)serviceStopped;
- (void)serviceRequested;
- (id)UIElements;
- (void)setUIElement:(id)arg1 isInUse:(BOOL)arg2;
- (id)defaultActionForType:(id)arg1;
- (id)actionsForType:(id)arg1;
- (id)actionsForType:(id)arg1 actionContext:(id)arg2;
- (BOOL)hasActionsForResult:(struct __DDResult *)arg1 actionContext:(id)arg2;
- (id)actionsForResult:(struct __DDResult *)arg1;
- (id)menuItemsForRootType:(id)arg1 result:(struct __DDResult *)arg2 textCheckingResult:(id)arg3 URL:(id)arg4 context:(id)arg5;
- (id)menuItemsForTextCheckingResult:(id)arg1 string:(id)arg2 context:(id)arg3 screenLocation:(struct CGPoint)arg4;
- (BOOL)runActionFromRect:(struct CGRect)arg1 forTextCheckingResult:(id)arg2 context:(id)arg3;
- (id)menuItemsForTextCheckingResult:(id)arg1 actionContext:(id)arg2;
- (id)actionTypeForTextCheckingResult:(id)arg1 actionContext:(id)arg2;
- (id)menuItemsForTargetURL:(id)arg1 actionContext:(id)arg2;
- (id)menuItemsForResult:(struct __DDResult *)arg1 actionContext:(id)arg2;
- (id)menuItemsForValue:(id)arg1 type:(struct __CFString *)arg2 service:(id)arg3 context:(id)arg4;
- (id)menuItemsForResult:(struct __DDResult *)arg1 context:(id)arg2 screenLocation:(struct CGPoint)arg3;
- (id)menuItemsForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (void)notifyClientActionWillStart;
- (void)notifyClientActionDidEnd;
- (void)_someWindowDidClose:(id)arg1;
- (void)dealloc;
- (id)init;

@end

