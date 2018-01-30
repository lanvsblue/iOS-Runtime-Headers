/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReportHostContext : NSExtensionContext <DKExtensionHostAdapter, DKReportHostRemoteContext> {
    <DKExtensionHostAdapterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKExtensionHostAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (void)completeRemoteWithReport:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startWithPayload:(id)arg1 completion:(id /* block */)arg2;

@end
