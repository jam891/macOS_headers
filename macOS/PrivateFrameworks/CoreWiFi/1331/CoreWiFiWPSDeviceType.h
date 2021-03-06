//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CoreWiFiWPSDeviceType : NSObject
{
    BOOL isValid;
    NSData *rawDeviceType;
    NSData *SMI;
    unsigned long long categoryID;
    unsigned long long subCategoryID;
    NSString *companyName;
    NSString *category;
    NSString *subCategory;
}

@property(retain, nonatomic) NSString *subCategory; // @synthesize subCategory;
@property(retain, nonatomic) NSString *category; // @synthesize category;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName;
@property(nonatomic) unsigned long long subCategoryID; // @synthesize subCategoryID;
@property(nonatomic) unsigned long long categoryID; // @synthesize categoryID;
@property(retain, nonatomic) NSData *SMI; // @synthesize SMI;
@property(nonatomic) BOOL isValid; // @synthesize isValid;
@property(retain, nonatomic) NSData *rawDeviceType; // @synthesize rawDeviceType;
- (id)composeForTLV;
- (void)parseDeviceTypeApple;
- (void)parseDeviceTypeWFA;
- (void)parseDeviceType;
- (id)description;
- (void)dealloc;
- (id)initWithDeviceType:(id)arg1;

@end

