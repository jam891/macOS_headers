//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseFileTransferViewController.h"

@class NSButton;
@protocol MultiFileTransferViewControllerDelegate;

@interface MultiFileTransferViewController : BaseFileTransferViewController
{
    BOOL _areIndividualFilesVisible;
    NSButton *_showFilesButton;
}

+ (id)keyPathsForValuesAffectingLocalizedTitleString;
+ (id)keyPathsForValuesAffectingIconImage;
@property(nonatomic) BOOL areIndividualFilesVisible; // @synthesize areIndividualFilesVisible=_areIndividualFilesVisible;
@property(nonatomic) __weak NSButton *showFilesButton; // @synthesize showFilesButton=_showFilesButton;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)extendFileTransfers:(id)arg1;
- (id)localizedTitleString;
- (id)iconImage;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <MultiFileTransferViewControllerDelegate> delegate; // @dynamic delegate;

@end

