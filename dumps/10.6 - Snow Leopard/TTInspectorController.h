/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSObjectController, NSTabView, NSTextField, NSView, TTSettingsThumbnailArrayController;

@interface TTInspectorController : NSWindowController
{
    NSView *_contentView;
    NSView *_notApplicableView;
    NSTextField *_titleField;
    NSTabView *_tabView;
    NSObjectController *_tabObjectController;
    TTSettingsThumbnailArrayController *_settingsController;
}

+ (id)sharedInspectorController;
- (id)initWithWindow:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (id)settingsController;
- (void)selectTitleField:(id)arg1;
- (void)setInspectorApplicable:(BOOL)arg1;

@end
