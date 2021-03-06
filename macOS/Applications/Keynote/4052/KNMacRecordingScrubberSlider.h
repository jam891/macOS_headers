//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSlider.h>

@class KNMacRecordingScrubberSliderBarView, KNMacRecordingScrubberSliderMarkerView, KNRecordingScrubberSliderMarkerValueArray, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSView, TMAColorView;
@protocol KNMacScrubberSliderCellDelegate;

@interface KNMacRecordingScrubberSlider : NSSlider
{
    KNMacRecordingScrubberSliderBarView *mLeftBarView;
    KNMacRecordingScrubberSliderBarView *mRightBarView;
    NSView *mKnobBoundaryView;
    NSView *mKnobBoundaryFractionView;
    double mRate;
    double mRateAnimationAnchorValue;
    double mRateAnimationAnchorTime;
    NSString *mDisabledLabel;
    NSTextField *mDisabledLabelTextField;
    KNRecordingScrubberSliderMarkerValueArray *mMarkerValueArray;
    KNMacRecordingScrubberSliderMarkerView *mMarkerView;
    BOOL mAppearsInTouchBar;
    NSView *mKnobContainerView;
    NSImageView *mNormalKnobView;
    TMAColorView *mTouchBarKnobView;
    NSLayoutConstraint *mLeftBarViewLeftConstraint;
    NSLayoutConstraint *mLeftBarViewRightConstraint;
    NSLayoutConstraint *mLeftBarViewCenterYConstraint;
    NSLayoutConstraint *mRightBarViewLeftConstraint;
    NSLayoutConstraint *mRightBarViewRightConstraint;
    NSLayoutConstraint *mRightBarViewCenterYConstraint;
    NSLayoutConstraint *mMarkerViewLeftConstraint;
    NSLayoutConstraint *mMarkerViewRightConstraint;
    NSLayoutConstraint *mMarkerViewTopConstraint;
    NSLayoutConstraint *mMarkerViewBottomConstraint;
    NSLayoutConstraint *mKnobContainerViewCenterYConstraint;
    NSLayoutConstraint *mNormalKnobViewLeftConstraint;
    NSLayoutConstraint *mNormalKnobViewRightConstraint;
    NSLayoutConstraint *mNormalKnobViewTopConstraint;
    NSLayoutConstraint *mNormalKnobViewBottomConstraint;
    NSLayoutConstraint *mTouchBarKnobViewLeftConstraint;
    NSLayoutConstraint *mTouchBarKnobViewRightConstraint;
    NSLayoutConstraint *mTouchBarKnobViewTopConstraint;
    NSLayoutConstraint *mTouchBarKnobViewBottomConstraint;
    NSLayoutConstraint *mNormalKnobViewWidthConstraint;
    NSLayoutConstraint *mNormalKnobViewHeightConstraint;
    NSLayoutConstraint *mTouchBarKnobViewWidthConstraint;
    NSLayoutConstraint *mTouchBarKnobViewHeightConstraint;
    NSLayoutConstraint *mKnobBoundaryViewLeftConstraint;
    NSLayoutConstraint *mKnobBoundaryViewRightConstraint;
    NSLayoutConstraint *mKnobBoundaryViewTopConstraint;
    NSLayoutConstraint *mKnobBoundaryViewBottomConstraint;
    NSLayoutConstraint *mKnobBoundaryFractionViewLeftConstraint;
    NSLayoutConstraint *mKnobBoundaryFractionViewRightConstraint;
    NSLayoutConstraint *mKnobBoundaryFractionViewTopConstraint;
    NSLayoutConstraint *mKnobBoundaryFractionViewBottomConstraint;
    NSLayoutConstraint *mKnobBoundaryFractionViewWidthConstraint;
}

+ (Class)cellClass;
@property(copy, nonatomic) NSString *disabledLabel; // @synthesize disabledLabel=mDisabledLabel;
@property(nonatomic) double rate; // @synthesize rate=mRate;
@property(copy, nonatomic) KNRecordingScrubberSliderMarkerValueArray *slideMarkerValueArray; // @synthesize slideMarkerValueArray=mMarkerValueArray;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryFractionViewWidthConstraint; // @synthesize knobBoundaryFractionViewWidthConstraint=mKnobBoundaryFractionViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryFractionViewBottomConstraint; // @synthesize knobBoundaryFractionViewBottomConstraint=mKnobBoundaryFractionViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryFractionViewTopConstraint; // @synthesize knobBoundaryFractionViewTopConstraint=mKnobBoundaryFractionViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryFractionViewRightConstraint; // @synthesize knobBoundaryFractionViewRightConstraint=mKnobBoundaryFractionViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryFractionViewLeftConstraint; // @synthesize knobBoundaryFractionViewLeftConstraint=mKnobBoundaryFractionViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryViewBottomConstraint; // @synthesize knobBoundaryViewBottomConstraint=mKnobBoundaryViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryViewTopConstraint; // @synthesize knobBoundaryViewTopConstraint=mKnobBoundaryViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryViewRightConstraint; // @synthesize knobBoundaryViewRightConstraint=mKnobBoundaryViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobBoundaryViewLeftConstraint; // @synthesize knobBoundaryViewLeftConstraint=mKnobBoundaryViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewHeightConstraint; // @synthesize touchBarKnobViewHeightConstraint=mTouchBarKnobViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewWidthConstraint; // @synthesize touchBarKnobViewWidthConstraint=mTouchBarKnobViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewHeightConstraint; // @synthesize normalKnobViewHeightConstraint=mNormalKnobViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewWidthConstraint; // @synthesize normalKnobViewWidthConstraint=mNormalKnobViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewBottomConstraint; // @synthesize touchBarKnobViewBottomConstraint=mTouchBarKnobViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewTopConstraint; // @synthesize touchBarKnobViewTopConstraint=mTouchBarKnobViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewRightConstraint; // @synthesize touchBarKnobViewRightConstraint=mTouchBarKnobViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *touchBarKnobViewLeftConstraint; // @synthesize touchBarKnobViewLeftConstraint=mTouchBarKnobViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewBottomConstraint; // @synthesize normalKnobViewBottomConstraint=mNormalKnobViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewTopConstraint; // @synthesize normalKnobViewTopConstraint=mNormalKnobViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewRightConstraint; // @synthesize normalKnobViewRightConstraint=mNormalKnobViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *normalKnobViewLeftConstraint; // @synthesize normalKnobViewLeftConstraint=mNormalKnobViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *knobContainerViewCenterYConstraint; // @synthesize knobContainerViewCenterYConstraint=mKnobContainerViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *markerViewBottomConstraint; // @synthesize markerViewBottomConstraint=mMarkerViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *markerViewTopConstraint; // @synthesize markerViewTopConstraint=mMarkerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *markerViewRightConstraint; // @synthesize markerViewRightConstraint=mMarkerViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *markerViewLeftConstraint; // @synthesize markerViewLeftConstraint=mMarkerViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightBarViewCenterYConstraint; // @synthesize rightBarViewCenterYConstraint=mRightBarViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightBarViewRightConstraint; // @synthesize rightBarViewRightConstraint=mRightBarViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightBarViewLeftConstraint; // @synthesize rightBarViewLeftConstraint=mRightBarViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftBarViewCenterYConstraint; // @synthesize leftBarViewCenterYConstraint=mLeftBarViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftBarViewRightConstraint; // @synthesize leftBarViewRightConstraint=mLeftBarViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftBarViewLeftConstraint; // @synthesize leftBarViewLeftConstraint=mLeftBarViewLeftConstraint;
@property(retain, nonatomic) TMAColorView *touchBarKnobView; // @synthesize touchBarKnobView=mTouchBarKnobView;
@property(retain, nonatomic) NSImageView *normalKnobView; // @synthesize normalKnobView=mNormalKnobView;
@property(retain, nonatomic) NSView *knobContainerView; // @synthesize knobContainerView=mKnobContainerView;
@property(readonly, nonatomic) BOOL appearsInTouchBar; // @synthesize appearsInTouchBar=mAppearsInTouchBar;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)i_maxValueDidChange;
- (void)i_minValueDidChange;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)updateCell:(id)arg1;
@property(nonatomic) BOOL showsTrackingLabel;
@property(nonatomic) id <KNMacScrubberSliderCellDelegate> delegate;
- (void)p_updateMarkerViewValues;
@property(readonly, nonatomic) double trackingLabelVerticalOffset;
@property(readonly, nonatomic) double markerBottomMargin;
@property(readonly, nonatomic) double markerTopMargin;
@property(readonly, nonatomic) double disabledLabelHorizontalMargin;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) double intrinsicHeight;
@property(readonly, nonatomic) double capThickness;
- (double)knobThickness;
@property(readonly, nonatomic) double knobHeight;
- (void)p_updateDisabledLabelTextFieldValue;
@property(readonly, nonatomic) double visibleValue;
- (void)i_removeRateAnimation;
- (void)i_resetRateAnimationFromStartValue:(double)arg1;
- (void)setToolTip:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

