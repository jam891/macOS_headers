//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAAccessibilityFauxUIElement, NSString;

@protocol MAAccessibilityFauxUIElementParent <NSObject>
- (NSString *)descriptionOfFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;
- (NSString *)roleDescriptionOfFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;
- (struct CGPoint)positionOfFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;
- (struct CGSize)sizeOfFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;

@optional
- (id)valueForFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;
- (void)performActionForFauxUIElement:(MAAccessibilityFauxUIElement *)arg1;
- (void)setPosition:(struct CGPoint)arg1 forFauxUIElement:(MAAccessibilityFauxUIElement *)arg2;
@end

