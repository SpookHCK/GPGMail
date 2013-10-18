/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFEWSResponseOperation.h>

@class NSArray, NSMutableArray;

@interface MFEWSGetItemsResponseOperation : MFEWSResponseOperation
{
    NSMutableArray *_EWSItems;
    NSArray *_EWSItemIdsRequested;
}

@property(retain) NSArray *EWSItemIdsRequested; // @synthesize EWSItemIdsRequested=_EWSItemIdsRequested;
@property(retain) NSMutableArray *EWSItems; // @synthesize EWSItems=_EWSItems;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)dealloc;

@end

