/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSAssertionHandler.h"

@interface MCAssertionHandler : NSAssertionHandler
{
}

+ (void)setAssertionAction:(unsigned long long)arg1;
+ (id)_MailCore_currentHandler;
+ (void)installDefaultAssertionHandler;
- (void)_handleFailureWithPreamble:(id)arg1 description:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;

@end

