//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUSignedFlatPkg : NSObject
{
}

+ (int)_verifyProductArchive:(id)arg1 atPath:(id)arg2 minimumTrust:(int)arg3 error:(id *)arg4;
+ (int)_verifyComponentPackage:(id)arg1 atPath:(id)arg2 minimumTrust:(int)arg3 error:(id *)arg4;
+ (int)verifyPackageAtPath:(id)arg1 minimumTrust:(int)arg2 error:(id *)arg3;

@end

