/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaValueManager : NSObject <HFHomeKitItemProtocol, HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource> {
    NSError * _cachedPlaybackStateWriteError;
    long long  _lastKnownPlaybackState;
    <HFMediaProfileContainer> * _mediaProfile;
    NSMutableArray * _transactionStack;
}

@property (nonatomic, readonly) NSError *cachedPlaybackStateWriteError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic) long long lastKnownPlaybackState;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfile;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transactionStack;

- (void).cxx_destruct;
- (void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(bool)arg3;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(bool)arg3 notifyDidUpdate:(bool)arg4;
- (id)cachedPlaybackStateWriteError;
- (bool)hasPendingWrites;
- (id)homeKitObject;
- (id)init;
- (id)initWithMediaProfile:(id)arg1;
- (long long)lastKnownPlaybackState;
- (long long)lastPlaybackStateForProfile;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (id)mediaProfile;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)setLastKnownPlaybackState:(long long)arg1;
- (void)setTransactionStack:(id)arg1;
- (id)transactionStack;
- (id)writePlaybackState:(long long)arg1;

@end
