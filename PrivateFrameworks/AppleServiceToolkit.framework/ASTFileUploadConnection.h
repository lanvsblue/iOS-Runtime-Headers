/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTFileUploadConnection : NSObject <ASTTestResultHandling, ASTUploadConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    NSURL * _fileSteamLocationURL;
    long long  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    ASTSealableFile * _sealableFile;
    long long  _state;
    NSNumber * _testId;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (nonatomic, readonly) NSURL *fileSteamLocationURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, retain) ASTSealableFile *sealableFile;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *testId;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)fileSteamLocationURL;
- (id)initWithSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testID:(id)arg4 dataID:(id)arg5 sessionID:(id)arg6 allowsCellularAccess:(bool)arg7;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)sealableFile;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSealableFile:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)testId;

@end
