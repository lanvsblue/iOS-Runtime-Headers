/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUValveItemModule : HFItemModule {
    unsigned long long  _editingMode;
    HMHome * _home;
    NSSet * _itemProviders;
    HFItem<HFServiceLikeItem> * _sourceItem;
    HFServiceItemProvider * _valveServiceItemProvider;
}

@property (nonatomic, readonly) unsigned long long editingMode;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceItem;
@property (nonatomic, retain) HFServiceItemProvider *valveServiceItemProvider;

+ (id /* block */)valveItemComparator;

- (void).cxx_destruct;
- (id)_createItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (unsigned long long)editingMode;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4;
- (id)itemProviders;
- (void)setHome:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setValveServiceItemProvider:(id)arg1;
- (id)sourceItem;
- (id)toggleConfigurationStateForItem:(id)arg1;
- (id)valveServiceItemProvider;

@end