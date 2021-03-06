//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBActivityIndicatorCardSection, _SFPBAppLinkCardSection, _SFPBAudioPlaybackCardSection, _SFPBDescriptionCardSection, _SFPBDetailedRowCardSection, _SFPBFlightCardSection, _SFPBImagesCardSection, _SFPBKeyValueDataCardSection, _SFPBMapCardSection, _SFPBMediaInfoCardSection, _SFPBMediaPlayerCardSection, _SFPBMessageCardSection, _SFPBMetaInfoCardSection, _SFPBNowPlayingCardSection, _SFPBRichTitleCardSection, _SFPBRowCardSection, _SFPBScoreboardCardSection, _SFPBSectionHeaderCardSection, _SFPBSelectableGridCardSection, _SFPBSocialMediaPostCardSection, _SFPBStockChartCardSection, _SFPBSuggestionCardSection, _SFPBTableHeaderRowCardSection, _SFPBTableRowCardSection, _SFPBTextColumnsCardSection, _SFPBTitleCardSection, _SFPBTrackListCardSection, _SFPBWebCardSection;

@protocol _SFPBCardSectionValue <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasMetaInfoCardSection;
@property(retain, nonatomic) _SFPBMetaInfoCardSection *metaInfoCardSection;
@property(readonly, nonatomic) BOOL hasSectionHeaderCardSection;
@property(retain, nonatomic) _SFPBSectionHeaderCardSection *sectionHeaderCardSection;
@property(readonly, nonatomic) BOOL hasSelectableGridCardSection;
@property(retain, nonatomic) _SFPBSelectableGridCardSection *selectableGridCardSection;
@property(readonly, nonatomic) BOOL hasSuggestionCardSection;
@property(retain, nonatomic) _SFPBSuggestionCardSection *suggestionCardSection;
@property(readonly, nonatomic) BOOL hasImagesCardSection;
@property(retain, nonatomic) _SFPBImagesCardSection *imagesCardSection;
@property(readonly, nonatomic) BOOL hasDetailedRowCardSection;
@property(retain, nonatomic) _SFPBDetailedRowCardSection *detailedRowCardSection;
@property(readonly, nonatomic) BOOL hasMessageCardSection;
@property(retain, nonatomic) _SFPBMessageCardSection *messageCardSection;
@property(readonly, nonatomic) BOOL hasWebCardSection;
@property(retain, nonatomic) _SFPBWebCardSection *webCardSection;
@property(readonly, nonatomic) BOOL hasActivityIndicatorCardSection;
@property(retain, nonatomic) _SFPBActivityIndicatorCardSection *activityIndicatorCardSection;
@property(readonly, nonatomic) BOOL hasFlightCardSection;
@property(retain, nonatomic) _SFPBFlightCardSection *flightCardSection;
@property(readonly, nonatomic) BOOL hasAudioPlaybackCardSection;
@property(retain, nonatomic) _SFPBAudioPlaybackCardSection *audioPlaybackCardSection;
@property(readonly, nonatomic) BOOL hasTrackListCardSection;
@property(retain, nonatomic) _SFPBTrackListCardSection *trackListCardSection;
@property(readonly, nonatomic) BOOL hasTitleCardSection;
@property(retain, nonatomic) _SFPBTitleCardSection *titleCardSection;
@property(readonly, nonatomic) BOOL hasTextColumnsCardSection;
@property(retain, nonatomic) _SFPBTextColumnsCardSection *textColumnsCardSection;
@property(readonly, nonatomic) BOOL hasTableRowCardSection;
@property(retain, nonatomic) _SFPBTableRowCardSection *tableRowCardSection;
@property(readonly, nonatomic) BOOL hasTableHeaderRowCardSection;
@property(retain, nonatomic) _SFPBTableHeaderRowCardSection *tableHeaderRowCardSection;
@property(readonly, nonatomic) BOOL hasStockChartCardSection;
@property(retain, nonatomic) _SFPBStockChartCardSection *stockChartCardSection;
@property(readonly, nonatomic) BOOL hasSocialMediaPostCardSection;
@property(retain, nonatomic) _SFPBSocialMediaPostCardSection *socialMediaPostCardSection;
@property(readonly, nonatomic) BOOL hasScoreboardCardSection;
@property(retain, nonatomic) _SFPBScoreboardCardSection *scoreboardCardSection;
@property(readonly, nonatomic) BOOL hasRowCardSection;
@property(retain, nonatomic) _SFPBRowCardSection *rowCardSection;
@property(readonly, nonatomic) BOOL hasRichTitleCardSection;
@property(retain, nonatomic) _SFPBRichTitleCardSection *richTitleCardSection;
@property(readonly, nonatomic) BOOL hasNowPlayingCardSection;
@property(retain, nonatomic) _SFPBNowPlayingCardSection *nowPlayingCardSection;
@property(readonly, nonatomic) BOOL hasMediaPlayerCardSection;
@property(retain, nonatomic) _SFPBMediaPlayerCardSection *mediaPlayerCardSection;
@property(readonly, nonatomic) BOOL hasMediaInfoCardSection;
@property(retain, nonatomic) _SFPBMediaInfoCardSection *mediaInfoCardSection;
@property(readonly, nonatomic) BOOL hasMapCardSection;
@property(retain, nonatomic) _SFPBMapCardSection *mapCardSection;
@property(readonly, nonatomic) BOOL hasKeyValueDataCardSection;
@property(retain, nonatomic) _SFPBKeyValueDataCardSection *keyValueDataCardSection;
@property(readonly, nonatomic) BOOL hasDescriptionCardSection;
@property(retain, nonatomic) _SFPBDescriptionCardSection *descriptionCardSection;
@property(readonly, nonatomic) BOOL hasAppLinkCardSection;
@property(retain, nonatomic) _SFPBAppLinkCardSection *appLinkCardSection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

