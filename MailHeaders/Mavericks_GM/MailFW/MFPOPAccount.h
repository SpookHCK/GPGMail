/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFMailAccount.h>

@class MCActivityMonitor, MFPOPStore, NSLock;

@interface MFPOPAccount : MFMailAccount
{
    MFPOPStore *_fetcher;
    MCActivityMonitor *_fetchMonitor;
    NSLock *_connectionActivityLock;
    id _seenMessagesManagerLock;
    BOOL _fetcherNeedsReset;
    BOOL _deletingMessages;
    BOOL _hasDoneBackgroundSynchronization;
}

+ (id)accountTypeString;
- (id)storeForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLPersistenceScheme;
- (void)_addAccountAndSeenMessagesToMessageManager;
- (id)newSeenMessagesManager;
- (id)authSchemesForConnection:(id)arg1;
- (BOOL)canAuthenticateWithScheme:(id)arg1 connection:(id)arg2;
- (id)archiveMailboxCreateIfNeeded:(BOOL)arg1;
- (void)relinquishConnectionActivityLock;
- (void)acquireConnectionActivityLock;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteSeenMessagesNow;
- (void)deleteMessagesNow:(id)arg1;
- (BOOL)deletingMessages;
- (void)setDelayedMessageDeletionInterval:(long long)arg1;
- (long long)delayedMessageDeletionInterval;
- (void)setMessageDeletionPolicy:(long long)arg1;
- (long long)messageDeletionPolicy;
- (void)setDidTryUpgradingToAPOP:(BOOL)arg1;
- (BOOL)didTryUpgradingToAPOP;
- (void)setBigMessageWarningSize:(long long)arg1;
- (long long)bigMessageWarningSize;
- (BOOL)_setPath:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canCreateNewMailboxes;
- (BOOL)containsMailboxes;
- (id)primaryMailbox;
- (id)mailboxPathExtension;
- (Class)storeClassForMailbox:(id)arg1;
- (BOOL)requiresAuthentication;
- (void *)keychainProtocol;
- (id)saslProfileName;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (id)standardSSLPorts;
- (id)standardPorts;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)canGoOffline;
- (id)iaServiceType;
- (void)releaseAllConnections;
- (void)resetFetcher;
- (void)fetchSynchronously;
- (BOOL)_configureFetcherObject;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)objectSpecifierForMailbox:(id)arg1;
- (id)mailboxes;
- (void)setDeleteMessagesOnServer:(BOOL)arg1;
- (BOOL)deleteMessagesOnServer;
- (void)setDeleteMessagesWhenMovedFromInbox:(BOOL)arg1;
- (BOOL)deleteMessagesWhenMovedFromInbox;

@end

