/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientRanksPersistedState : BRCPersistedState {
    unsigned long long  _nextItemRowID;
    unsigned long long  _nextNotifRank;
    unsigned long long  _nextPackageItemRank;
}

@property (nonatomic, readonly) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocatePackageItemRank;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextItemRowID;
- (unsigned long long)nextNotifRank;
- (unsigned long long)nextPackageItemRank;
- (void)setNextNotifRank:(unsigned long long)arg1;
- (void)setNextPackageItemRank:(unsigned long long)arg1;

@end
