//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RowTemplateBuilder : NSObject
{
    NSArray *_artistArray;
    NSArray *_albumArray;
    NSArray *_genreArray;
    NSArray *_groupingArray;
    NSArray *_workArray;
    NSArray *_sortArtistArray;
    NSArray *_sortAlbumArray;
    NSArray *_seriesNameArray;
    NSArray *_sortSeriesNameArray;
    NSMutableDictionary *_textKeyPathsDictionary;
    NSMutableDictionary *_numericKeyPathsDictionary;
    NSMutableDictionary *_tokenKeyPathsDictionary;
    NSMutableArray *_dateKeyPaths;
    NSMutableArray *_booleanKeyPaths;
    NSMutableArray *_timeKeyPaths;
    NSMutableArray *_ratingKeyPaths;
    NSMutableArray *_loveKeyPaths;
    NSMutableArray *_mediaKindKeyPaths;
    NSMutableArray *_playlistKeyPaths;
    NSMutableArray *_trackKindsKeyPaths;
    NSMutableArray *_cloudStatusKeyPaths;
}

- (id)predicateEditorRowTemplatesArrayWithTrackData:(struct TrackData *)arg1 playlist:(struct Playlist *)arg2;
- (id)tokenRowTemplates;
- (id)textRowTemplates;
- (id)numericRowTemplates;
- (void)loadFieldList;
@property(readonly, retain) NSMutableArray *cloudStatusKeyPaths; // @synthesize cloudStatusKeyPaths=_cloudStatusKeyPaths;
@property(readonly, retain) NSMutableArray *trackKindsKeyPaths; // @synthesize trackKindsKeyPaths=_trackKindsKeyPaths;
@property(readonly, retain) NSMutableArray *playlistKeyPaths; // @synthesize playlistKeyPaths=_playlistKeyPaths;
@property(readonly, retain) NSMutableArray *mediaKindKeyPaths; // @synthesize mediaKindKeyPaths=_mediaKindKeyPaths;
@property(readonly, retain) NSMutableArray *loveKeyPaths; // @synthesize loveKeyPaths=_loveKeyPaths;
@property(readonly, retain) NSMutableArray *ratingKeyPaths; // @synthesize ratingKeyPaths=_ratingKeyPaths;
@property(readonly, retain) NSMutableArray *timeKeyPaths; // @synthesize timeKeyPaths=_timeKeyPaths;
@property(readonly, retain) NSMutableArray *booleanKeyPaths; // @synthesize booleanKeyPaths=_booleanKeyPaths;
@property(readonly, retain) NSMutableArray *dateKeyPaths; // @synthesize dateKeyPaths=_dateKeyPaths;
@property(readonly, retain) NSMutableDictionary *tokenKeyPathsDictionary; // @synthesize tokenKeyPathsDictionary=_tokenKeyPathsDictionary;
@property(readonly, retain) NSMutableDictionary *numericKeyPathsDictionary; // @synthesize numericKeyPathsDictionary=_numericKeyPathsDictionary;
@property(readonly, retain) NSMutableDictionary *textKeyPathsDictionary; // @synthesize textKeyPathsDictionary=_textKeyPathsDictionary;
- (void)addToKeyPathsDictionary:(id)arg1 keyPath:(id)arg2 trailingString:(id)arg3 defaultString:(id)arg4;
- (id)defaultStringFromTrackField:(unsigned int)arg1;
- (id)trailingStringForTrackField:(unsigned int)arg1;
- (id)completionArrayForTrackField:(unsigned int)arg1;
@property(readonly, retain) NSArray *sortSeriesNameArray; // @synthesize sortSeriesNameArray=_sortSeriesNameArray;
@property(readonly, retain) NSArray *seriesNameArray; // @synthesize seriesNameArray=_seriesNameArray;
@property(readonly, retain) NSArray *sortAlbumArray; // @synthesize sortAlbumArray=_sortAlbumArray;
@property(readonly, retain) NSArray *sortArtistArray; // @synthesize sortArtistArray=_sortArtistArray;
@property(readonly, retain) NSArray *workArray; // @synthesize workArray=_workArray;
@property(readonly, retain) NSArray *groupingArray; // @synthesize groupingArray=_groupingArray;
@property(readonly, retain) NSArray *genreArray; // @synthesize genreArray=_genreArray;
@property(readonly, retain) NSArray *albumArray; // @synthesize albumArray=_albumArray;
@property(readonly, retain) NSArray *artistArray; // @synthesize artistArray=_artistArray;
- (void)addToKeyPathsDictionary:(id)arg1 keyPath:(id)arg2 completionArray:(id)arg3;
- (id)entryDictionaryFromKeyPathsDictionary:(id)arg1 forKey:(id)arg2;
- (id)compoundRowTemplate;
- (id)cloudStatusRowTemplateWithKeys:(id)arg1;
- (id)trackKindsRowTemplateWithKeys:(id)arg1;
- (id)playlistRowTemplateWithKeys:(id)arg1 trackData:(struct TrackData *)arg2 playlist:(struct Playlist *)arg3;
- (id)mediaKindRowTemplateWithKeys:(id)arg1;
- (id)loveRowTemplateWithKeys:(id)arg1;
- (id)ratingRangeRowTemplateWithKeys:(id)arg1;
- (id)ratingRowTemplateWithKeys:(id)arg1;
- (id)timeRangeRowTemplateWithKeys:(id)arg1;
- (id)timeRowTemplateWithKeys:(id)arg1;
- (id)booleanRowTemplateWithKeys:(id)arg1;
- (id)dateRelativeRowTemplateWithKeys:(id)arg1;
- (id)dateRangeRowTemplateWithKeys:(id)arg1;
- (id)dateRowTemplateWithKeys:(id)arg1;
- (id)tokenRowTemplateWithKeys:(id)arg1 withCompletionArray:(id)arg2;
- (id)textRowTemplateWithKeys:(id)arg1 withCompletionArray:(id)arg2;
- (id)numericRangeRowTemplateWithKeys:(id)arg1 withTrailingString:(id)arg2 withDefault:(id)arg3;
- (id)numericRowTemplateWithKeys:(id)arg1 withTrailingString:(id)arg2 withDefault:(id)arg3;
- (id)leftExpressionsArrayWithKeys:(id)arg1;
- (void)dealloc;

@end

