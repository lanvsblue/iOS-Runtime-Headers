/* Generated by RuntimeBrowser.
 */

@protocol VSViewServiceHostProtocol <NSObject>

@required

- (void)_didCancelRequest:(NSUUID *)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(NSUUID *)arg1;
- (void)_didChooseProviderWithIdentifier:(void *)arg1 vetoHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_dismissViewController;
- (void)_presentViewController;
- (void)_request:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)_request:(NSUUID *)arg1 didFinishWithResponse:(VSViewServiceResponse *)arg2;

@end
