//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CVRankDetector {
    double _field1;
    int _field2;
    struct vector<cv::Mat, std::__1::allocator<cv::Mat>> _field3;
    struct Ptr<cv::Feature2D> _field4;
    _Bool _field5;
};

struct CardMissingDetector {
    double _field1;
    int _field2;
    struct vector<cv::Mat, std::__1::allocator<cv::Mat>> _field3;
    struct Ptr<cv::Feature2D> _field4;
    _Bool _field5;
};

struct Feature2D;

struct Mat;

struct Ptr<cv::Feature2D> {
    struct PtrOwner *_field1;
    struct Feature2D *_field2;
};

struct PtrOwner;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<cv::Mat, std::__1::allocator<cv::Mat>> {
    struct Mat *_field1;
    struct Mat *_field2;
    struct __compressed_pair<cv::Mat *, std::__1::allocator<cv::Mat>> {
        struct Mat *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

