/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrivacyViewController : UIViewController <ADPrivacyRemoteViewControllerDelegate> {
    <ADPrivacyViewControllerDelegate> * _delegate;
    <ADPrivacyViewControllerInternalDelegate> * _internalDelegate;
    _UIAsyncInvocation * _remoteRequest;
    ADPrivacyRemoteViewController * _remoteViewController;
    NSString * _transparencyDetails;
    NSDictionary * _transparencyDetailsDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADPrivacyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIAsyncInvocation *remoteRequest;
@property (nonatomic, retain) ADPrivacyRemoteViewController *remoteViewController;
@property (nonatomic, readonly) <ADSPrivacyViewController_RPC><NSObject> *servicePrivacyViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transparencyDetails;
@property (nonatomic, retain) NSDictionary *transparencyDetailsDictionary;

- (void)_addRemoteView;
- (void)_appDidChangeStatusBarFrameNotification;
- (void)_clientApplicationDidEnterBackground;
- (void)_commonInit;
- (void)_connectionWithAdSheetWasLost;
- (void)_considerRequestingRemotePrivacyViewController;
- (void)_dismissAndReset;
- (void)_dismissPrivacyViewController;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)_requestPrivacyRemoteViewController;
- (void)_resetRemoteViewController;
- (void)adPrivacyRemoteViewControllerClientRequestsDismisal;
- (void)adPrivacyRemoteViewControllerDidAppear;
- (void)adPrivacyRemoteViewControllerDidLinkOut;
- (void)adPrivacyRemoteViewControllerDidLoad;
- (void)adPrivacyRemoteViewControllerDidRenderTransparency;
- (void)adPrivacyRemoteViewControllerDidTerminateWithError:(id)arg1;
- (void)adjustRemoteViews;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)initWithTransparencyDetails:(id)arg1;
- (id)initWithTransparencyDetailsDictionary:(id)arg1;
- (id)internalDelegate;
- (void)loadView;
- (id)remoteRequest;
- (id)remoteViewController;
- (id)servicePrivacyViewController;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setRemoteRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (void)setTransparencyDetailsDictionary:(id)arg1;
- (id)transparencyDetails;
- (id)transparencyDetailsDictionary;
- (void)viewWillAppear:(bool)arg1;

@end
