//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSAttributedString, NSImage, NSLayoutConstraint, NSString, NSTextField, SKContact;

@interface Skype.NetworkSearchContactCellView : NSTableCellView
{
    // Error parsing type: , name: annotatedConstraint
    // Error parsing type: , name: nonAnnotatedConstraint
    // Error parsing type: , name: annotationField
    // Error parsing type: , name: isObserving
}

+ (id)keyPathsForValuesAffectingAvatarImage;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingAnnotation;
+ (id)keyPathsForValuesAffectingAnnotationLabel;
+ (id)keyPathsForValuesAffectingLocationLabel;
+ (id)keyPathsForValuesAffectingContact;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showProfile:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, readonly) NSImage *avatarImage;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSAttributedString *annotation;
@property(nonatomic, readonly) NSAttributedString *annotationLabel;
@property(nonatomic, readonly) NSAttributedString *locationLabel;
@property(nonatomic, readonly) SKContact *contact;
@property(nonatomic, copy) id objectValue;
- (void)dealloc;
- (void)awakeFromNib;
@property(nonatomic, retain) NSTextField *annotationField; // @synthesize annotationField;
@property(nonatomic, retain) NSLayoutConstraint *nonAnnotatedConstraint; // @synthesize nonAnnotatedConstraint;
@property(nonatomic, retain) NSLayoutConstraint *annotatedConstraint; // @synthesize annotatedConstraint;

@end

