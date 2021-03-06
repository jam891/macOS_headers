//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgView.h"

@interface CLgBeatsEditorView : CLgView
{
    BOOL _midiEditor;
    struct CRegionIndex _regionIndex;
}

+ (void)closeMidiEditorView;
+ (void)closeAudioEditorView;
+ (void)showMidiEditorView;
+ (void)showAudioEditorView;
+ (BOOL)isBeatsMidiEditorViewOpen;
+ (BOOL)isBeatsAudioEditorViewOpen;
+ (id)docwController;
@property(nonatomic) struct CRegionIndex regionIndex; // @synthesize regionIndex=_regionIndex;
@property(nonatomic) BOOL midiEditor; // @synthesize midiEditor=_midiEditor;
- (id).cxx_construct;
- (void)handleUM_SONG_id:(id)arg1;
- (void)handleUM_CHAUSEL_id:(id)arg1;
- (void)handleUM_CHSEL_id:(id)arg1;
- (void)handleUM_NEWEV_id:(id)arg1;
- (void)handleUM_DELEV_id:(id)arg1;
- (void)handleUM_CHAURGN_id:(id)arg1;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)beatEditorRegionSelectionChanged;
- (struct CRegion *)findRegionBasedOnSelection;
- (void)beatEditorWillBecomeVisible:(BOOL)arg1;
- (void)becomesVisible:(id)arg1;
- (void)setDisplayedRegion:(struct CRegion *)arg1;
- (struct CSong *)song;
- (struct CRegion *)region;
- (double)minViewHeight;
- (double)maxViewHeight;
- (double)initialHeaderWidth;
- (BOOL)hasMultipleSections;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 editorName:(id)arg2 userData:(id)arg3 midiEditor:(BOOL)arg4;
- (id)userData;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;

@end

