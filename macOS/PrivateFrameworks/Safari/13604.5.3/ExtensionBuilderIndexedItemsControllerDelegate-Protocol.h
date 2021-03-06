//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class ExtensionBuilderIndexedItemsController, NSArray, NSString;

@protocol ExtensionBuilderIndexedItemsControllerDelegate <NSObject>
- (void)extensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1 removeItemAtIndex:(unsigned long long)arg2;
- (void)extensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1 setItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)extensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1 subpathsWithPathExtension:(NSString *)arg2;
- (NSString *)pathExtensionForFilePopupForExtensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1;
- (NSArray *)popoverIdentifiersForExtensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1;
- (NSArray *)menuIdentifiersForExtensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1;
- (id)extensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1 itemForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInExtensionBuilderIndexedItemsController:(ExtensionBuilderIndexedItemsController *)arg1;
@end

