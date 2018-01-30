/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPerformActionViewDelegate> {
    PKPaymentPassAction * _action;
    UIView<PKPerformActionView> * _actionView;
    PKServiceProviderPurchase * _completedPurchase;
    <PKPerformActionViewControllerDelegate> * _delegate;
    PKPerformActionLoadingView * _loadingView;
    PKPaymentPass * _pass;
    PKPerformActionPassView * _passView;
    <PKPaymentDataProvider> * _paymentDataProvider;
    bool  _remoteContentFetched;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, readonly) UIView<PKPerformActionView> *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (id)alertControllerForUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(id /* block */)arg3;
+ (id)navigationBarBackgroundColor;

- (void).cxx_destruct;
- (id)_actionViewForPass:(id)arg1 action:(id)arg2;
- (void)_canPerformPaymentWithCompletion:(id /* block */)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_showGenericErrorAlert:(id /* block */)arg1;
- (void)_showLoadingView:(bool)arg1;
- (id)action;
- (id)actionView;
- (id)delegate;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)pass;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)setWebService:(id)arg1;
- (void)shakeCard;
- (void)updateFirstResponder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webService;

@end
