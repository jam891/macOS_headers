//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppSupportUI/NSObject-Protocol.h>

@protocol _NUIGridArrangementItem;

@protocol _NUIGridArrangementContainer <NSObject>
- (struct CGRect)layoutFrameForArrangedSubview:(id <_NUIGridArrangementItem>)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id <_NUIGridArrangementItem>)arg2;
- (void)populateGridArrangementDimension:(vector_29d414c0 *)arg1 withCells:(const vector_f7a18e83 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f7a18e83 *)arg1;
@end

