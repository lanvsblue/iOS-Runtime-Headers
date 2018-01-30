/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPeerPaymentWebServiceCoordinator : NSObject <PDCloudStoreNotificationCoordinatorObserver, PDPushNotificationConsumer, PDScheduledActivityClient> {
    PKPeerPaymentAccount * _account;
    PDPeerPaymentWebServiceArchiver * _archiver;
    PDAssertionManager * _assertionManager;
    PDCloudStoreNotificationCoordinator * _cloudStoreNotificationCoordinator;
    <PDPeerPaymentWebServiceCoordinatorDataSource> * _dataSource;
    bool  _isFetchingAccount;
    PKPeerPaymentAccount * _mockAccount;
    <PDWebServiceCoordinatorPassStore> * _passStore;
    PKPaymentWebService * _paymentWebService;
    NSMutableArray * _pendingAccountFetches;
    PDPushNotificationManager * _pushNotificationManager;
    NSMutableArray * _queuedPendingAccountFetches;
    PKPeerPaymentWebService * _sharedPeerPaymentWebService;
    NSObject<OS_dispatch_queue> * _sharedPeerPaymentWebServiceQueue;
    NSObject<OS_dispatch_queue> * _updateAccountQueue;
}

@property (nonatomic, retain) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (nonatomic, readonly) PKPeerPaymentWebService *sharedPeerPaymentWebService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveSharedPeerPaymentWebServiceContext;
- (void)_completeUpdatingAccount;
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(id /* block */)arg1;
- (bool)_hasAssociatedPeerPaymentPass;
- (void)_initalizeCloudStore;
- (void)_initalizeCloudStoreIfNecessary;
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)_mockAccountInitialState;
- (unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2;
- (bool)_peerPaymentPassExists;
- (void)_performPeerPaymentPassDownloadActivity;
- (void)_performPeerPaymentReregisterActivity;
- (void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(id /* block */)arg4;
- (void)_schedulePeerPaymentCoordinatorActivities;
- (void)_schedulePeerPaymentReregisterActivity;
- (bool)_shouldAttemptBackgroundPeerPaymentPassDownload;
- (void)_updateAccountWithCompletion:(id /* block */)arg1;
- (void)_updateSharedCacheWithAccount:(id)arg1;
- (void)_updateSharedCacheWithWebService:(id)arg1;
- (void)accountWithCompletion:(id /* block */)arg1;
- (void)applyPushNotificationToken:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (id)cloudStoreNotificationCoordinator;
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAccountWithCompletion:(id /* block */)arg1;
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)handleCompanionSerialNumberChanged;
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (id)paymentWebService;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 activityContext:(id)arg3;
- (id)pushNotificationTopics;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registrationStatusWithCompletion:(id /* block */)arg1;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (void)setCloudStoreNotificationCoordinator:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (id)sharedPeerPaymentWebService;
- (id)sharedWebService;
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSharedWebServiceContext:(id)arg1;

@end
