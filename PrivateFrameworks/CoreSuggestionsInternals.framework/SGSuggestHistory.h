/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSuggestHistory : NSObject {
    NSUbiquitousKeyValueStore * _backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore * _noCloudFakeBackingKVStore;
    struct SGHistorySharedData { id x1; id x2; id x3; id x4; } * _privateShared;
    struct SGMutexSynchronizedObject<SGHistorySharedData> { struct SGHistorySharedData {} *x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; } * _shared;
}

@property (nonatomic, readonly) NSUbiquitousKeyValueStore *kvs;

+ (id)newTestingInstanceWithSharedKVS:(id)arg1;
+ (void)reset;
+ (void)resetNoFlush;
+ (id)sharedSuggestHistory;

- (void).cxx_destruct;
- (bool)_anyHash:(id)arg1 inSet:(id)arg2;
- (id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3;
- (void)_setHashes:(id)arg1 forKey:(id)arg2;
- (void)_tellObserversHashesDidChange;
- (void)addObserver:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (void)confirmEventFromExternalDevice:(id)arg1;
- (void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2;
- (id)confirmHashesForOpaqueKey:(id)arg1 withCreationTime:(struct SGUnixTimestamp_ { double x1; })arg2;
- (void)confirmOrRejectCuratedDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetailHashes:(id)arg1;
- (void)confirmOrRejectRecordForContact:(id)arg1;
- (void)confirmStorageEvent:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleSyncedDataChanged:(id)arg1;
- (bool)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3;
- (bool)hasContact:(id)arg1;
- (bool)hasContactDetail:(id)arg1 forContact:(id)arg2;
- (bool)hasStorageContact:(id)arg1;
- (id)hashesForContact:(id)arg1;
- (id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2;
- (id)hashesForCuratedContactDetail:(id)arg1 fromContact:(id)arg2;
- (id)hashesForOpaqueKey:(id)arg1;
- (id)hashesForPseudoEventByKey:(id)arg1;
- (id)hashesForStorageContact:(id)arg1;
- (id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTime:(struct SGUnixTimestamp_ { double x1; })arg2;
- (id)identitySalt;
- (id)init;
- (id)initWithKVS:(id)arg1;
- (bool)isConfirmedEvent:(id)arg1;
- (bool)isConfirmedEvent:(id)arg1 withScopeLock:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg2;
- (bool)isRejectedEvent:(id)arg1;
- (bool)isRejectedEvent:(id)arg1 withScopeLock:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg2;
- (bool)isUpdatableContact:(id)arg1;
- (bool)isValidNewEvent:(id)arg1;
- (bool)isValidSuggestion:(id)arg1;
- (id)keysForContact:(id)arg1;
- (id)keysForContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForCuratedContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForStorageContact:(id)arg1;
- (id)kvs;
- (id)loadResetInfo;
- (id)mutableSetForKey:(id)arg1;
- (void)pushAll:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushConfirmedEventFields:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushConfirmedEvents:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushContacts:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushDontUpdate:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushEmptyHashesForTestingKey:(id)arg1;
- (void)pushRejectedEvents:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushResetInfo:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)pushStorageDetails:(const struct SGMutexSynchronizedPtr<SGHistorySharedData> { struct SGMutexSynchronizedObject<SGHistorySharedData> {} *x1; }*)arg1;
- (void)rejectContact:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)rejectEventFromExternalDevice:(id)arg1;
- (id)rejectHashesForOpaqueKey:(id)arg1;
- (void)rejectStorageEvent:(id)arg1;
- (void)reset;
- (void)resetNoFlush;
- (id)setForKey:(id)arg1;
- (void)setInternalStateAccordingToKVS;
- (void)writeAndPushConfirmedEventHashes:(id)arg1;
- (void)writeAndPushRejectedEventHashes:(id)arg1;

@end
