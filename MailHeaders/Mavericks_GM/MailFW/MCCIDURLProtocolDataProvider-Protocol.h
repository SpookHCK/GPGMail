/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, NSURL;

@protocol MCCIDURLProtocolDataProvider <NSObject>
@property(readonly) NSString *mimeType;
@property(readonly) NSData *data;
@property(readonly) NSURL *cidURL;

@optional
@property(readonly) long long fileSize;
@end

