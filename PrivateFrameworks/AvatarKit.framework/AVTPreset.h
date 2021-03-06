/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPreset : NSObject {
    AVTAsset * _asset;
    long long  _category;
    NSString * _identifier;
    float  _intensity;
    unsigned long long  _modularCompositionIndex;
    NSArray * _params;
    NSArray * _rigs;
    NSString * _variant;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *displayableName;
@property (nonatomic, readonly) bool hasComponent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIImage *thumbnail;

+ (id)availablePresetsForCategory:(long long)arg1;
+ (void)loadPresets;
+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (void)applyPresetOnAvatar:(id)arg1;
- (id)asset;
- (long long)category;
- (id)colorPresets;
- (id)description;
- (id)displayableName;
- (bool)hasComponent;
- (id)identifier;
- (id)init;
- (float)intensity;
- (bool)isAppliedToAvatar:(id)arg1 strictly:(bool)arg2;
- (struct UIImage { Class x1; }*)maskImage;
- (struct UIImage { Class x1; }*)thumbnail;

@end
