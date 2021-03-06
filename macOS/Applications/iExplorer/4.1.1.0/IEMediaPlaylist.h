//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IEDeviceDatabaseManager, NSArray, NSMutableArray, NSString, PlaylistItem;

__attribute__((visibility("hidden")))
@interface IEMediaPlaylist : NSObject
{
    IEDeviceDatabaseManager *parentDDM;
    NSString *title;
    NSMutableArray *playlistTrackIDs;
    NSArray *trackList;
    long long pid;
    int playlistType;
    int tagInt;
    PlaylistItem *pi_playlistItem;
    BOOL is_hidden;
    BOOL is_smart;
    BOOL is_genius;
    BOOL is_master;
    BOOL is_purchased;
    BOOL willCopyPlaylistInAutoTransfer;
}

+ (id)getCategoryString:(int)arg1;
@property(readonly) IEDeviceDatabaseManager *parentDDM; // @synthesize parentDDM;
@property(nonatomic) BOOL willCopyPlaylistInAutoTransfer; // @synthesize willCopyPlaylistInAutoTransfer;
@property(nonatomic) BOOL is_purchased; // @synthesize is_purchased;
@property(nonatomic) BOOL is_master; // @synthesize is_master;
@property(nonatomic) BOOL is_genius; // @synthesize is_genius;
@property(nonatomic) BOOL is_smart; // @synthesize is_smart;
@property(nonatomic) BOOL is_hidden; // @synthesize is_hidden;
@property(nonatomic) int tagInt; // @synthesize tagInt;
@property(nonatomic) int playlistType; // @synthesize playlistType;
@property(retain, nonatomic) NSMutableArray *playlistTrackIDs; // @synthesize playlistTrackIDs;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long pid; // @synthesize pid;
- (void).cxx_destruct;
- (void)addParsedMediaTracks:(id)arg1;
- (id)orderedTrackList;
- (id)playlistItem;
- (id)playlistIcon;
- (int)tracksNotInItunesCount;
- (id)tracks;
- (id)getCategoryTypePlaylist;
- (id)tracksInUserTypePlaylist;
- (id)description;
- (id)initWithSQL3Playlist:(id)arg1 thisPID:(long long)arg2 playlistType:(int)arg3 tagInt:(int)arg4 device:(id)arg5;
- (id)initWithiTunesDBPlaylist:(id)arg1 trackIDs:(id)arg2 playlistType:(int)arg3 tagInt:(int)arg4 device:(id)arg5;

@end

