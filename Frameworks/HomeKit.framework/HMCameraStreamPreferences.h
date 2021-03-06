/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {
    NSMutableSet * _preferredAudioCodecs;
    NSMutableSet * _preferredVideoResolutions;
}

@property (nonatomic, readonly) NSMutableSet *preferredAudioCodecs;
@property (nonatomic, readonly) NSMutableSet *preferredVideoResolutions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)preferredAudioCodecs;
- (id)preferredVideoResolutions;

@end
