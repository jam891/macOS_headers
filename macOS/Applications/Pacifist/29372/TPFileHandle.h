//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileHandle, NSMutableData;

@interface TPFileHandle : NSObject
{
    NSFileHandle *_fh;
    unsigned char _bitPosition;
    NSMutableData *_buffer;
    NSData *_resData;
    unsigned long long _resPos;
    unsigned long long _filePosition;
    BOOL _isAtEnd;
}

- (void).cxx_destruct;
- (void)closeFile;
- (void)dumpBufferBytes:(unsigned long long)arg1;
- (void)emptyBuffer;
- (void)fillBuffer;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (void)skipToNextFullByte;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned int)readEvenMoreBits:(unsigned char)arg1;
- (unsigned short)readMoreBits:(unsigned char)arg1;
- (unsigned char)readBits:(unsigned char)arg1;
- (id)readDate;
- (unsigned int)read32BitInt;
- (unsigned short)read16BitInt;
- (id)initForReadingFromPartResourceID:(short)arg1 inFileAtURL:(id)arg2 error:(id *)arg3;
- (id)initForReadingFromURL:(id)arg1 error:(id *)arg2;

@end

