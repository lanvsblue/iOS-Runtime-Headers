/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionProviderChangesReceiver : NSObject <FPItemCollectionDelegate> {
    id /* block */  _changesHandler;
    NSString * _identifier;
    bool  _invalidated;
    FPItemCollection * _localStorageCollection;
    int  _notifyToken;
    NSDictionary * _providersByID;
    int  _settingsChangedToken;
}

@property (nonatomic, copy) id /* block */ changesHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_signalLocalStorageUpdate;
- (id /* block */)changesHandler;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (void)providersInfoHasChanged:(id)arg1 error:(id)arg2;
- (void)setChangesHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)updateProviderInfoWithAttemptCount:(unsigned long long)arg1;

@end
