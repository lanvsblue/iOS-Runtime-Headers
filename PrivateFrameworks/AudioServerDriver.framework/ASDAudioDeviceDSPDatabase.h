/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDAudioDeviceDSPDatabase : NSObject {
    NSString * _deviceUID;
    NSSet * _dspConfigurations;
    NSSet * _referencedDSPDeviceProperties;
    NSSet * _referencedUnderlyingDeviceProperties;
}

@property (nonatomic, readonly) NSString *deviceUID;
@property (nonatomic, readonly) NSSet *dspConfigurations;
@property (nonatomic, readonly) NSSet *referencedDSPDeviceProperties;
@property (nonatomic, readonly) NSSet *referencedUnderlyingDeviceProperties;

- (void).cxx_destruct;
- (id)deviceUID;
- (id)dspConfigurationForDevice:(id)arg1;
- (id)dspConfigurations;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 deviceUID:(id)arg3;
- (id)referencedDSPDeviceProperties;
- (id)referencedUnderlyingDeviceProperties;

@end
