//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImage, NSPopUpButton, NSProgressIndicator, NSScrollView, NSString, NSTokenField;

@interface IINA.PrefSubViewController : NSViewController
{
    // Error parsing type: , name: hasResizableWidth
    // Error parsing type: , name: hasResizableHeight
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: subLangTokenView
    // Error parsing type: , name: loginIndicator
    // Error parsing type: , name: defaultEncodingList
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)OpenSubHelpBtnAction:(id)arg1;
- (void)changeDefaultEncoding:(id)arg1;
- (void)openSubLoginAction:(id)arg1;
- (void)chooseSubFontAction:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSPopUpButton *defaultEncodingList; // @synthesize defaultEncodingList;
@property(nonatomic) __weak NSProgressIndicator *loginIndicator; // @synthesize loginIndicator;
@property(nonatomic) __weak NSTokenField *subLangTokenView; // @synthesize subLangTokenView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) BOOL hasResizableHeight; // @synthesize hasResizableHeight;
@property(nonatomic) BOOL hasResizableWidth; // @synthesize hasResizableWidth;
@property(nonatomic, readonly) NSString *toolbarItemLabel;
@property(nonatomic, readonly) NSImage *toolbarItemImage;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, readonly) NSString *nibName;

@end

