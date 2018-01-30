/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEvent : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    unsigned long long  _activationType;
    <HMDEventDelegate> * _delegate;
    bool  _endEvent;
    HMDEventTrigger * _eventTrigger;
    HMDHome * _home;
    NSString * _logString;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _triggerType;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long activationType;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEndEvent, nonatomic, readonly) bool endEvent;
@property (nonatomic) HMDEventTrigger *eventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, retain) NSString *logString;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *triggerType;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleUpdateRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_setup;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updateTriggerType;
- (unsigned long long)activationType;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)createPayload;
- (id)delegate;
- (id)description;
- (id)dumpState;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTrigger;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isEndEvent;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)logString;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (void)setActivationType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventTrigger:(id)arg1;
- (void)setLogString:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)triggerType;
- (id)uuid;
- (id)workQueue;

@end
