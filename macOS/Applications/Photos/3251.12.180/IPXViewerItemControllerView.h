//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@protocol IPXViewerItemControllerViewDelegate;

@interface IPXViewerItemControllerView : UXView
{
    id <IPXViewerItemControllerViewDelegate> _itemControllerViewDelegate;
}

@property(nonatomic) __weak id <IPXViewerItemControllerViewDelegate> itemControllerViewDelegate; // @synthesize itemControllerViewDelegate=_itemControllerViewDelegate;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;

@end

