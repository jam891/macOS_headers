//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXRange : NSObject
{
    struct _NSRange m_range;
}

+ (id)rangeWithApxlString:(id)arg1;
+ (id)axCreateFromApxlString:(id)arg1;
- (id)apxlString;
- (struct _NSRange)range;
- (id)initWithNSRange:(struct _NSRange)arg1;
- (id)internalRepresentation;
- (id)axApxlString;

@end

