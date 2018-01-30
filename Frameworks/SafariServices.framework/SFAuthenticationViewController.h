/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate> {
    id /* block */  _dismissCompletionHandler;
    _UIFallbackPresentationViewController * _fallbackPresentationViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentViewController;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(bool)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
