/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {
    <FBSApplicationDataStoreRepositoryClient> * _client;
    bool  _clientNeedsCheckin;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_hasObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4;
- (void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithClient:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
