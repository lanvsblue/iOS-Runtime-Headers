/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate, IDSSessionDelegate> {
    <HMDCameraSnapshotIDSStreamReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    IDSSession * _idsSession;
    HMDSnapshotFile * _snapshotFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDCameraSnapshotIDSStreamReceiverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic, readonly) HMDSnapshotFile *snapshotFile;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileReceived:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)idsSession;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (id)logIdentifier;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIdsSession:(id)arg1;
- (id)snapshotFile;

@end
