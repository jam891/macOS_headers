//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRRecorderCell;

@protocol SRRecorderCellDelegate <NSObject>

@optional
- (void)shortcutRecorderCell:(SRRecorderCell *)arg1 keyComboDidChange:(struct _KeyCombo)arg2;
- (BOOL)shortcutRecorderCell:(SRRecorderCell *)arg1 isKeyCode:(long long)arg2 andFlagsTaken:(unsigned long long)arg3 reason:(id *)arg4;
@end

