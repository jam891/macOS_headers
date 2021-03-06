//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAPianoRollEventLayer, MAPianoRollView, NSEvent, NSString;

@protocol MAPianoRollViewDelegate <NSObject>
- (void)pianoRollView:(MAPianoRollView *)arg1 makeUndoForEditingAction:(long long)arg2;
- (long long)pianoRollView:(MAPianoRollView *)arg1 quantizedPos:(long long)arg2;
- (void)pianoRollView:(MAPianoRollView *)arg1 previewEvent:(struct TNoteInfo *)arg2 stopOtherPreviewEvents:(BOOL)arg3;
- (long long)pianoRollView:(MAPianoRollView *)arg1 xPosToClockPos:(float)arg2;
- (double)pianoRollView:(MAPianoRollView *)arg1 eventToLength:(struct TNoteInfo *)arg2;
- (double)pianoRollView:(MAPianoRollView *)arg1 eventToX:(struct TNoteInfo *)arg2;

@optional
- (long long)pianoRollView:(MAPianoRollView *)arg1 AccessibilityQuantizedPos:(long long)arg2 directionIsLeft:(BOOL)arg3 increasedStepWidth:(BOOL)arg4;
- (NSString *)pianoRollView:(MAPianoRollView *)arg1 accessibilyDescriptionForNoteLength:(struct TNoteInfo *)arg2;
- (NSString *)pianoRollView:(MAPianoRollView *)arg1 accessibilyDescriptionForNote:(struct TNoteInfo *)arg2;
- (NSString *)pianoRollView:(MAPianoRollView *)arg1 accessibilyDescriptionForScreenPoint:(struct CGPoint)arg2;
- (void)pianoRollView:(MAPianoRollView *)arg1 AccessibilityNote:(struct TNoteInfo *)arg2 setSelected:(BOOL)arg3 deselectOthers:(BOOL)arg4;
- (void)pianoRollView:(MAPianoRollView *)arg1 insertControllerEventsInGrooveMap:(struct TGrooveMapInfo)arg2 fromClock:(long long)arg3 toClock:(long long)arg4;
- (void)pianoRollView:(MAPianoRollView *)arg1 checkStretchNonNoteEventsFromRect:(CDStruct_ff3c81cc)arg2 ToRect:(CDStruct_ff3c81cc)arg3 inRegion:(struct TRegionInfo *)arg4;
- (BOOL)mouseIsInPianoRollView:(MAPianoRollView *)arg1;
- (long long)pianoRollView:(MAPianoRollView *)arg1 quantizedHigherPos:(long long)arg2;
- (BOOL)pianoRollViewCheckTrackProtected:(MAPianoRollView *)arg1;
- (void)pianoRollViewDeleteMarkedNotes:(MAPianoRollView *)arg1;
- (void)pianoRollView:(MAPianoRollView *)arg1 markNoteToBeDeleted:(struct TNoteInfo *)arg2;
- (int)pianoRollView:(MAPianoRollView *)arg1 scaleQuantizedNoteNrForOriginalNoteNr:(int)arg2;
- (BOOL)pianoRollViewGrooveBrushAllowsDrawOnAllNotesInScale:(MAPianoRollView *)arg1;
- (void)pianoRollView:(MAPianoRollView *)arg1 sortNotesInRegion:(int)arg2;
- (BOOL)pianoRollViewAllowsRegionBorderEdits:(MAPianoRollView *)arg1;
- (BOOL)pianoRollViewHasStretchSelectionRect:(MAPianoRollView *)arg1;
- (long long)pianoRollView:(MAPianoRollView *)arg1 quantizedPosForGrooveBrush:(long long)arg2 forceHigherPosition:(BOOL)arg3;
- (long long)pianoRollView:(MAPianoRollView *)arg1 getGroovePositions:(struct TGrooveMapInfo *)arg2 useTemplate:(BOOL)arg3;
- (void)pianoRollView:(MAPianoRollView *)arg1 changeLength:(long long)arg2 forRegion:(struct TRegionInfo *)arg3 atLeftCorner:(BOOL)arg4;
- (void)pianoRollView:(MAPianoRollView *)arg1 forceClockDisplayWithClock:(long long)arg2;
- (void)pianoRollViewPerformRegionBackgroundClick:(MAPianoRollView *)arg1 withRegion:(struct TRegionInfo *)arg2 allowUnselect:(BOOL)arg3;
- (BOOL)pianoRollView:(MAPianoRollView *)arg1 checkOpenContextMenu:(NSEvent *)arg2 clickedLayer:(MAPianoRollEventLayer *)arg3;
- (void)pianoRollView:(MAPianoRollView *)arg1 setEventDefaults:(struct TNoteInfo *)arg2;
- (int)pianoRollViewSelectedTrackNr:(MAPianoRollView *)arg1;
- (void)pianoRollViewGetEventDefaults:(MAPianoRollView *)arg1;
- (long long)pianoRollViewMidiTickUnit;
- (void)afterSelectionChange;
- (void)pianoRollViewFinishRegionBoundsEdit:(MAPianoRollView *)arg1;
- (void)pianoRollViewDisableCatchIfPlaying:(MAPianoRollView *)arg1;
- (void)pianoRollViewDisableCatch:(MAPianoRollView *)arg1;
- (BOOL)pianoRollViewLimitToOneDirectionPreference:(MAPianoRollView *)arg1;
- (void)pianoRollView:(MAPianoRollView *)arg1 openSecondaryEditorWithIndex:(int)arg2;
- (float)pianoRollViewgetEndPositionOfFolder:(MAPianoRollView *)arg1;
- (BOOL)pianoRollViewIsBrightColored:(MAPianoRollView *)arg1;
- (void)pianoRollRedoIdle:(MAPianoRollView *)arg1;
- (void)pianoRollViewApplyEventFilter:(MAPianoRollView *)arg1;
- (void)closeHelpTagInPianoRollView:(MAPianoRollView *)arg1;
- (void)pianoRollView:(MAPianoRollView *)arg1 showHelpTagForEditingAction:(long long)arg2 withEvent:(struct TNoteInfo *)arg3 relativeValueChange:(long long)arg4;
- (BOOL)pianoRollView:(MAPianoRollView *)arg1 handleRightMouseDownWithEvent:(NSEvent *)arg2 clickedLayer:(MAPianoRollEventLayer *)arg3;
- (BOOL)pianoRollViewShowsMidiChannel:(MAPianoRollView *)arg1;
- (struct CGColor *)pianoRollView:(MAPianoRollView *)arg1 colorFromMidiChannel:(struct TNoteInfo *)arg2;
- (struct CGColor *)pianoRollView:(MAPianoRollView *)arg1 colorForVelocityLayer:(struct TNoteInfo *)arg2;
- (struct CGColor *)pianoRollViewCachedColorBlack:(MAPianoRollView *)arg1;
- (unsigned char)pianoRollView:(MAPianoRollView *)arg1 fixMB3:(unsigned char)arg2 forMidiKeyNumber:(int)arg3;
- (void)pianoRollView:(MAPianoRollView *)arg1 hasChangedSelectionLeftClock:(long long)arg2 rightClock:(long long)arg3;
- (void)pianoRollView:(MAPianoRollView *)arg1 hasChangedSelectionStatusForDisplayNoteNr:(int)arg2 toState:(BOOL)arg3;
- (BOOL)currentEditFlagsForPianoRollView:(MAPianoRollView *)arg1;
- (vector_b720f2ec)pianoRollView:(MAPianoRollView *)arg1 gridPositionsFrom:(float)arg2 to:(float)arg3;
- (void)quantizeSelectedEventsInPianoRollView:(MAPianoRollView *)arg1;
- (void)pianoRollView:(MAPianoRollView *)arg1 zoomToRect:(struct CGRect)arg2;
- (struct CGColor *)pianoRollView:(MAPianoRollView *)arg1 colorForRegionID:(int)arg2 forNote:(struct TNoteInfo *)arg3 forNotePart:(long long)arg4;
- (void)pianoRollView:(MAPianoRollView *)arg1 changeMouseOver:(long long)arg2 withEvent:(MAPianoRollEventLayer *)arg3;
- (long long)currentToolForPianoRollView:(MAPianoRollView *)arg1 withNote:(struct TNoteInfo *)arg2;
- (int)pianoRollView:(MAPianoRollView *)arg1 hueForNote:(struct TNoteInfo *)arg2;
- (struct CGColor *)pianoRollView:(MAPianoRollView *)arg1 colorForNoteSelectionBorder:(struct TNoteInfo *)arg2;
- (struct CGColor *)pianoRollView:(MAPianoRollView *)arg1 colorForNote:(struct TNoteInfo *)arg2 useSelection:(BOOL)arg3;
- (long long)pianoRollView:(MAPianoRollView *)arg1 quantizedPosForStretchIndicators:(long long)arg2;
- (long long)pianoRollView:(MAPianoRollView *)arg1 quantizedPosForPencilTool:(long long)arg2;
- (void)pianoRollView:(MAPianoRollView *)arg1 setEventInfoToNote:(int)arg2 clock:(long long)arg3;
- (void)pianoRollView:(MAPianoRollView *)arg1 setSingleRegionViewWithEvent:(struct TNoteInfo *)arg2;
@end

