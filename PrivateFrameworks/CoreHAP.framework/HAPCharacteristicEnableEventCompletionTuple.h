/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject {
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _handler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ handler;

+ (id)enableEventCompletionTupleWithHandler:(id /* block */)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (id)completionQueue;
- (id /* block */)handler;
- (void)setCompletionQueue:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
