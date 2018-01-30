/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestService : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedTestService;

- (void).cxx_destruct;
- (void)_connectIfNecessary;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(bool)arg6 completion:(id /* block */)arg7;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(id /* block */)arg6;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)originalSettingsWithCompletion:(id /* block */)arg1;
- (void)overriddenSettingsWithCompletion:(id /* block */)arg1;
- (void)removeSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendAllSectionInfoWithSpool:(bool)arg1 completion:(id /* block */)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)settingOverridesWithCompletion:(id /* block */)arg1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(id /* block */)arg3;

@end
