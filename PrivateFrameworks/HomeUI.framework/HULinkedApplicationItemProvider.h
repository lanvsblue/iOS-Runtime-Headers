/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSMutableSet * _linkedApplicationItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *linkedApplicationItems;

+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)_generateItemsFromStoreResult:(id)arg1;
- (id)_performLibraryLookupForAccessories:(id)arg1;
- (id)_performStoreLookupWithLibraryResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setLinkedApplicationItems:(id)arg1;

@end
