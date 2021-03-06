//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class NSLayoutConstraint, NSMutableArray, NSTextField, NSView, SiriUIKeyline, SiriUITintedImageView;
@protocol SiriUIAccessibilityDelegate;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell
{
    SiriUIKeyline *_keyline;
    SiriUITintedImageView *_chevronView;
    BOOL _hasSetUpSubviewConstraints;
    BOOL _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
    BOOL _hasChevron;
    BOOL _accessibilityIsIgnored;
    BOOL _accessibilityIsOverridden;
    long long _verticalAlignment;
    NSView *_accessoryView;
    NSTextField *_textLabel;
    long long _keylineType;
    id <SiriUIAccessibilityDelegate> _accessibilityDelegate;
    struct UIOffset _textOffset;
    struct UIOffset _accessoryOffset;
    struct UIOffset _chevronOffset;
    struct NSEdgeInsets _textAndAccessoryInsets;
}

+ (id)reuseIdentifier;
+ (struct NSEdgeInsets)defaultInsets;
@property(nonatomic) BOOL accessibilityIsOverridden; // @synthesize accessibilityIsOverridden=_accessibilityIsOverridden;
@property(nonatomic) BOOL accessibilityIsIgnored; // @synthesize accessibilityIsIgnored=_accessibilityIsIgnored;
@property(nonatomic) __weak id <SiriUIAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) BOOL hasChevron; // @synthesize hasChevron=_hasChevron;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(readonly, nonatomic) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(nonatomic) struct UIOffset chevronOffset; // @synthesize chevronOffset=_chevronOffset;
@property(nonatomic) struct UIOffset accessoryOffset; // @synthesize accessoryOffset=_accessoryOffset;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(retain, nonatomic) NSTextField *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) struct NSEdgeInsets textAndAccessoryInsets; // @synthesize textAndAccessoryInsets=_textAndAccessoryInsets;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void).cxx_destruct;
- (id)accessibilitySynthesizeMouseEventWithType:(unsigned long long)arg1 clickCount:(long long)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)setAccessibilityElement:(BOOL)arg1;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)setNeedsUpdateSubviewConstraints;
@property(readonly, nonatomic) double chevronTrailingMargin;
@property(readonly, nonatomic) double chevronLeadingMargin;
- (void)setChevronColor:(id)arg1;
- (void)layout;
- (void)updateConstraints;
- (void)_updateSubviewConstraints;
- (void)commitInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

