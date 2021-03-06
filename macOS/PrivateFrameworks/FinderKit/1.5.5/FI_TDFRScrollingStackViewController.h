//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class NSStackView;

__attribute__((visibility("hidden")))
@interface FI_TDFRScrollingStackViewController : FI_TViewController
{
    struct TFENodeVector _targetNodes;
    struct TNSRef<NSStackView *, void> _stackView;
    function_f9feaa7d _viewWillAppearCallback;
    function_f9feaa7d _viewWillDisappearCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)reload;
- (void)loadView;
@property(readonly, retain, nonatomic) NSStackView *stackView;
- (void)setViewWillDisappearCallback:(const function_f9feaa7d *)arg1;
- (function_f9feaa7d)viewWillDisppearCallback;
- (void)setViewWillAppearCallback:(const function_f9feaa7d *)arg1;
- (function_f9feaa7d)viewWillAppearCallback;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)targetNodes;

@end

