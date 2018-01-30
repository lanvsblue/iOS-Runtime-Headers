/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {
    IDSDevice * _device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCloudReachable;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly) bool isNearby;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIDSDevice:(id)arg1;
- (bool)isCloudReachable;
- (bool)isConnected;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
