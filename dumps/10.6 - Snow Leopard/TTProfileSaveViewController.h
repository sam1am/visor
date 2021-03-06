/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSButton, NSNumber, NSTextField;

@interface TTProfileSaveViewController : NSViewController
{
    NSTextField *_commandField;
    NSButton *_useAsDefaultCheckbox;
    NSButton *_useAsStartupCheckbox;
    NSNumber *_savedUseAsDefault;
    NSNumber *_savedUseAsStartup;
}

- (void)dealloc;
- (id)shouldRunCommandAtStartup;
- (void)setShouldRunCommandAtStartup:(id)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)controlTextDidChange:(id)arg1;

@end

