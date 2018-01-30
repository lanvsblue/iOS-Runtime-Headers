/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppLauncher : NSObject <HDProcessStateObserver> {
    NSMutableDictionary * _clientByBundleIdentifier;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *clientByBundleIdentifier;
@property (nonatomic) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_attemptRelaunchClient:(id)arg1 forSeconds:(double)arg2 retries:(int)arg3;
- (void)_queue_cleanUpClients;
- (id)clientByBundleIdentifier;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (void)processTerminated:(id)arg1;
- (id)queue;
- (void)registerIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setClientByBundleIdentifier:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
