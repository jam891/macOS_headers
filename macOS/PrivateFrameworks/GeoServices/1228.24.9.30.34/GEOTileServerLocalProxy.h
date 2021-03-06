//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOTileServerProxy.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEODBReader, GEODBWriter, NSLock, NSMapTable, NSMutableArray, NSString;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver>
{
    GEODBWriter *_dbWriter;
    GEODBReader *_dbReader;
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    NSLock *_inProgressLock;
}

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)flushPendingWrites;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4 bundleIdentifier:(id)arg5;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned long long)arg3 client:(id)arg4;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)close;
- (void)open;
- (void)registerProvider:(Class)arg1;
- (void)_updateExpiringTilesets;
- (void)_registerBuiltInProviders;
- (void)dealloc;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

