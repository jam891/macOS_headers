//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TDrawRectView.h>

#import <FinderKit/NSStackViewDelegate-Protocol.h>

@class FI_TButton, FI_TPopUpButton, FI_TScopeBarRadioGroupView, FI_TTextField, NSLayoutConstraint, NSStackView, NSString;
@protocol TSearchScopeSliceControllerDelegate;

__attribute__((visibility("hidden")))
@interface FI_TSearchScopeSlice : FI_TDrawRectView <NSStackViewDelegate>
{
    NSStackView *_stackView;
    FI_TTextField *_searchTextField;
    FI_TScopeBarRadioGroupView *_axScopeRadioGroupView;
    FI_TButton *_saveButton;
    FI_TButton *_plusMinusButton;
    FI_TPopUpButton *_scopeDropdown;
    NSLayoutConstraint *_scopeDropdownMaxWidthConstraint;
    NSLayoutConstraint *_scopeDropdownMinWidthConstraint;
    FI_TButton *_genericRadioButton;
    struct TNSRef<FI_TButton *, void> _genericRadioButtonRetainer;
    id <TSearchScopeSliceControllerDelegate> _delegate;
}

@property(nonatomic) id <TSearchScopeSliceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)selectedButtonTitle;
- (id)selectedButton;
- (unsigned long long)selectedButtonIndex;
- (void)selectButtonAtIndex:(unsigned long long)arg1;
- (void)setPlusMinusButtonEnabled:(_Bool)arg1;
- (void)setPlusMinusButtonTitle:(_Bool)arg1;
- (void)setSaveButtonEnabled:(_Bool)arg1;
- (void)setButtonTitles:(const vector_e0f53d80 *)arg1 andToolTips:(const vector_e0f53d80 *)arg2;
- (id)newRadioButtonForTitle:(const struct TString *)arg1 tooltip:(const struct TString *)arg2;
- (void)plusMinusButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)scopeDropdownChanged:(id)arg1;
- (void)scopeButtonPressed:(id)arg1;
- (void)chooseScopeButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

