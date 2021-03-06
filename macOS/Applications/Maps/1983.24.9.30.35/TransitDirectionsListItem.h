//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, MNTransitInstruction, NSArray, NSColor, NSImage, NSTimeZone, NVPlace;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItem : NSObject
{
    MNTransitInstruction *_transitInstruction;
    long long _type;
    NSArray *_majorFormattedStrings;
    NSImage *_majorStringImage;
    NSArray *_minorFormattedStrings;
    NSImage *_minorStringImage;
    NSArray *_tertiaryFormattedStrings;
    NSColor *_fromLineColor;
    NSColor *_toLineColor;
    NSColor *_alternateFromLineColor;
    NSColor *_alternateToLineColor;
    NSArray *_composedRouteSteps;
    NSArray *_composedRouteStepsDisplayedOnMap;
    TransitDirectionsListItem *_parentItem;
    NSTimeZone *_timeZoneForFormattedString;
    NSArray *_postTertiaryItems;
    NSArray *_footerItems;
    NVPlace *_searchResult;
}

@property(retain, nonatomic) NVPlace *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSArray *footerItems; // @synthesize footerItems=_footerItems;
@property(copy, nonatomic) NSArray *postTertiaryItems; // @synthesize postTertiaryItems=_postTertiaryItems;
@property(readonly, nonatomic) NSTimeZone *timeZoneForFormattedString; // @synthesize timeZoneForFormattedString=_timeZoneForFormattedString;
@property(nonatomic) __weak TransitDirectionsListItem *parentItem; // @synthesize parentItem=_parentItem;
@property(copy, nonatomic) NSArray *composedRouteStepsDisplayedOnMap; // @synthesize composedRouteStepsDisplayedOnMap=_composedRouteStepsDisplayedOnMap;
@property(copy, nonatomic) NSArray *composedRouteSteps; // @synthesize composedRouteSteps=_composedRouteSteps;
@property(retain, nonatomic) NSColor *alternateToLineColor; // @synthesize alternateToLineColor=_alternateToLineColor;
@property(retain, nonatomic) NSColor *alternateFromLineColor; // @synthesize alternateFromLineColor=_alternateFromLineColor;
@property(retain, nonatomic) NSColor *toLineColor; // @synthesize toLineColor=_toLineColor;
@property(retain, nonatomic) NSColor *fromLineColor; // @synthesize fromLineColor=_fromLineColor;
@property(copy, nonatomic) NSArray *tertiaryFormattedStrings; // @synthesize tertiaryFormattedStrings=_tertiaryFormattedStrings;
@property(copy, nonatomic) NSImage *minorStringImage; // @synthesize minorStringImage=_minorStringImage;
@property(copy, nonatomic) NSArray *minorFormattedStrings; // @synthesize minorFormattedStrings=_minorFormattedStrings;
@property(copy, nonatomic) NSImage *majorStringImage; // @synthesize majorStringImage=_majorStringImage;
@property(copy, nonatomic) NSArray *majorFormattedStrings; // @synthesize majorFormattedStrings=_majorFormattedStrings;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) MNTransitInstruction *transitInstruction; // @synthesize transitInstruction=_transitInstruction;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subItems;
- (id)formattedStringsForType:(long long)arg1;
- (CDStruct_02837cd9)mergedMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) GEOComposedRouteStep *matchingRouteStep;
- (id)imageSourceForNavState:(long long)arg1;
@property(readonly, nonatomic) BOOL selectable;
- (id)description;
- (id)initWithInstructions:(id)arg1;

@end

