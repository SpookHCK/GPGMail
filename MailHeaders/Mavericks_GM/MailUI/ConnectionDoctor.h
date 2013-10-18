/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountStatusDataSourceDelegate.h"
#import "MCConnectionLogging.h"

@class AccountStatusDataSource, NSArray, NSButton, NSDrawer, NSImageView, NSMutableString, NSProgressIndicator, NSTableView, NSTextField, NSTextView, NSView, NSWindow;

@interface ConnectionDoctor : NSObject <AccountStatusDataSourceDelegate, MCConnectionLogging>
{
    AccountStatusDataSource *_deliveryASDS;
    NSMutableString *_detailBuffer;
    NSArray *_savedLogClasses;
    NSWindow *_window;
    NSTableView *_tableView;
    NSImageView *_internetStatusIndicator;
    NSProgressIndicator *_internetStatusProgressIndicator;
    NSTextField *_internetStatusField;
    NSButton *_checkStatusButton;
    NSButton *_assistMeButton;
    NSTextView *_ispInfoField;
    NSDrawer *_detailDrawer;
    NSButton *_detailButton;
    NSView *_detailView;
    NSTextView *_detailTextView;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) NSTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) NSButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) NSDrawer *detailDrawer; // @synthesize detailDrawer=_detailDrawer;
@property(nonatomic) NSTextView *ispInfoField; // @synthesize ispInfoField=_ispInfoField;
@property(nonatomic) NSButton *assistMeButton; // @synthesize assistMeButton=_assistMeButton;
@property(nonatomic) NSButton *checkStatusButton; // @synthesize checkStatusButton=_checkStatusButton;
@property(nonatomic) NSTextField *internetStatusField; // @synthesize internetStatusField=_internetStatusField;
@property(nonatomic) NSProgressIndicator *internetStatusProgressIndicator; // @synthesize internetStatusProgressIndicator=_internetStatusProgressIndicator;
@property(nonatomic) NSImageView *internetStatusIndicator; // @synthesize internetStatusIndicator=_internetStatusIndicator;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)flushLog;
- (void)logBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_flushLog;
- (void)toggleDetail:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)assistMeClicked:(id)arg1;
- (void)checkAccounts:(id)arg1;
- (void)_didRefreshStatusForAllAccounts:(id)arg1;
- (void)_willRefreshStatusForAllAccounts:(id)arg1;
- (void)_didCheckInternetConnection:(id)arg1;
- (void)_willCheckInternetConnection:(id)arg1;
- (void)show;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (void)awakeFromNib;

@end

