//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSSet;
@protocol PXPlacesGeotaggedItemDataSourceDelegate;

@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly) NSSet *allItems;
@property __weak id <PXPlacesGeotaggedItemDataSourceDelegate> delegate;
- (CDStruct_02837cd9)minimalEncompassingMapRect;
- (NSSet *)findItemsInMapRect:(CDStruct_02837cd9)arg1;
@end

