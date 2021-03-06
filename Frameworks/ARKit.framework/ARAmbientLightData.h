/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARAmbientLightData : NSObject <ARSensorData, NSSecureCoding> {
    float  _lightIntensity;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float lightIntensity;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)lightIntensity;
- (void)setLightIntensity:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
