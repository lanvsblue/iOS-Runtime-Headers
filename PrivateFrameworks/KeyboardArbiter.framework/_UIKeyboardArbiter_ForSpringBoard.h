/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiter_ForSpringBoard : NSObject <_UIKeyboardArbiterLink> {
    SBUIScene * _scene;
    SBUIWorkspace * _workspace;
    _UIKeyboardArbiter * owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAvailable;
@property (nonatomic) _UIKeyboardArbiter *owner;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

+ (void)launch;

- (void).cxx_destruct;
- (void)attach:(id)arg1;
- (void)connectWithQueue:(id)arg1;
- (void)createSceneWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)detach:(id)arg1;
- (bool)isAvailable;
- (id)owner;
- (id)serviceName;
- (void)setOwner:(id)arg1;
- (void)updateSceneSettings;

@end
