//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUView.h"

@class FLUTextField, NSButton, NSImageView, NSTimer;
@protocol FLUNotificationBadgeViewDelegate;

@interface FLUNotificationBadgeView : FLUView
{
    BOOL _badgeHidden;
    BOOL _hovering;
    id <FLUNotificationBadgeViewDelegate> _delegate;
    NSButton *_button;
    NSTimer *_fadeTimer;
    NSImageView *_likesImageView;
    FLUTextField *_likesCountLabel;
    NSImageView *_commentsImageView;
    FLUTextField *_commentsCountLabel;
    NSImageView *_usertagsImageView;
    FLUTextField *_usertagsCountLabel;
    NSImageView *_relationshipsImageView;
    FLUTextField *_relationshipsCountLabel;
    NSImageView *_commentLikesImageView;
    FLUTextField *_commentLikesCountLabel;
    NSImageView *_campaignNotificationsImageView;
    FLUTextField *_campaignNotificationsCountLabel;
}

@property(retain, nonatomic) FLUTextField *campaignNotificationsCountLabel; // @synthesize campaignNotificationsCountLabel=_campaignNotificationsCountLabel;
@property(retain, nonatomic) NSImageView *campaignNotificationsImageView; // @synthesize campaignNotificationsImageView=_campaignNotificationsImageView;
@property(retain, nonatomic) FLUTextField *commentLikesCountLabel; // @synthesize commentLikesCountLabel=_commentLikesCountLabel;
@property(retain, nonatomic) NSImageView *commentLikesImageView; // @synthesize commentLikesImageView=_commentLikesImageView;
@property(retain, nonatomic) FLUTextField *relationshipsCountLabel; // @synthesize relationshipsCountLabel=_relationshipsCountLabel;
@property(retain, nonatomic) NSImageView *relationshipsImageView; // @synthesize relationshipsImageView=_relationshipsImageView;
@property(retain, nonatomic) FLUTextField *usertagsCountLabel; // @synthesize usertagsCountLabel=_usertagsCountLabel;
@property(retain, nonatomic) NSImageView *usertagsImageView; // @synthesize usertagsImageView=_usertagsImageView;
@property(retain, nonatomic) FLUTextField *commentsCountLabel; // @synthesize commentsCountLabel=_commentsCountLabel;
@property(retain, nonatomic) NSImageView *commentsImageView; // @synthesize commentsImageView=_commentsImageView;
@property(retain, nonatomic) FLUTextField *likesCountLabel; // @synthesize likesCountLabel=_likesCountLabel;
@property(retain, nonatomic) NSImageView *likesImageView; // @synthesize likesImageView=_likesImageView;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(nonatomic) BOOL hovering; // @synthesize hovering=_hovering;
@property(nonatomic) BOOL badgeHidden; // @synthesize badgeHidden=_badgeHidden;
@property(nonatomic) __weak id <FLUNotificationBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshView;
- (void)updateFrames;
- (void)showWithCountsDict:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect)arg1;
- (void)fadeTimerElapsed;
- (void)menuWillHide:(id)arg1;
- (void)menuWillShow:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

