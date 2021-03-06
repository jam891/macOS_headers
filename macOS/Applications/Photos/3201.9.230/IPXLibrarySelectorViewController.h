//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXLibraryChooserDelegate-Protocol.h"

@class IPXLibraryChooser, NSImageView, NSString, NSView;
@protocol IPXLibrarySelectorControllerDelegate;

@interface IPXLibrarySelectorViewController : IPXViewController <IPXLibraryChooserDelegate>
{
    id <IPXLibrarySelectorControllerDelegate> _delegate;
    NSView *_libraryFinderViewContainer;
    NSImageView *_imageView;
    IPXLibraryChooser *_libraryChooser;
}

@property(retain) IPXLibraryChooser *libraryChooser; // @synthesize libraryChooser=_libraryChooser;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property __weak NSView *libraryFinderViewContainer; // @synthesize libraryFinderViewContainer=_libraryFinderViewContainer;
@property(retain) id <IPXLibrarySelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)window;
- (void)libraryChooserDidSelectURL:(id)arg1 withResponse:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

