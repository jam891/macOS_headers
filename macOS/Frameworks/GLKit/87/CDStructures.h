//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GLKBigInt_s {
    unsigned long long n0;
    unsigned long long n1;
};

struct GLKEffectPropertyPrv {
    struct GLKBigInt_s *_field1;
    struct GLKBigInt_s *_field2;
    struct GLKBigInt_s *_field3;
    struct GLKBigInt_s *_field4;
    id _field5;
};

#pragma mark Named Unions

union _GLKMatrix3 {
    struct {
        float m00;
        float m01;
        float m02;
        float m10;
        float m11;
        float m12;
        float m20;
        float m21;
        float m22;
    } ;
    float m[9];
};

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

union _GLKVector4 {
    struct {
        float x;
        float y;
        float z;
        float w;
    } ;
    struct {
        float r;
        float g;
        float b;
        float a;
    } ;
    struct {
        float s;
        float t;
        float p;
        float q;
    } ;
    float v[4];
};

