/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory : NSObject {
    bool  _allowsPaddles;
    bool  _boldTextEnabled;
    bool  _drawsOneHandedAffordance;
    bool  _lightweightFactory;
    bool  _preferStringKeycapOverImage;
    UIKBRenderingContext * _renderingContext;
    double  _rivenSizeFactor;
    double  _scale;
    NSMutableArray * _segmentTraits;
    struct CGSize { 
        double width; 
        double height; 
    }  _stretchFactor;
    bool  _suppressSegmentTraits;
}

@property (nonatomic) bool allowsPaddles;
@property (nonatomic, readonly) bool boldTextEnabled;
@property (nonatomic) bool drawsOneHandedAffordance;
@property (nonatomic) bool lightweightFactory;
@property (nonatomic) bool preferStringKeycapOverImage;
@property (getter=renderConfig, readonly) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIKBRenderingContext *renderingContext;
@property (nonatomic) double rivenSizeFactor;
@property (nonatomic) double scale;
@property (nonatomic, readonly) NSArray *segmentTraits;
@property (nonatomic) struct CGSize { double x1; double x2; } stretchFactor;

+ (id)_characterSetForGlyphSelectors;
+ (bool)_enabled;
+ (long long)_graphicsQuality;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;
+ (bool)couldUseGlyphSelectorForDisplayString:(id)arg1;
+ (Class)factoryClassForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
+ (id)factoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1 renderingContext:(id)arg2 skipLayoutSegments:(bool)arg3;
+ (id)lightweightFactoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1 renderingContext:(id)arg2;
+ (id)segmentedControlColor:(bool)arg1;

- (double)RivenFactor:(double)arg1;
- (id)ZWNJKeyImageName;
- (id)_controlKeyBackgroundColorName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)addLayoutSegment:(id)arg1;
- (bool)allowsPaddles;
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)biuKeyImageName;
- (id)boldKeyImageName;
- (bool)boldTextEnabled;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyShadowColorName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (void)dealloc;
- (id)defaultKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)dictationKeyImageName;
- (id)dismissKeyImageName;
- (id)displayContentsForKey:(id)arg1;
- (bool)drawsOneHandedAffordance;
- (struct CGPoint { double x1; double x2; })dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint { double x1; double x2; })dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (double)emojiPopupDividerKeyOffset;
- (long long)enabledBlendForm;
- (id)extraPasscodePaddleTraits;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (long long)glyphSelectorForDisplayString:(id)arg1;
- (id)handwritingMoreKeyImageName;
- (id)hashStringElement;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(bool)arg2;
- (double)keyCornerRadius;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (bool)keyIsRightToLeftSensitive:(id)arg1;
- (id)leftArrowKeyImageName;
- (long long)lightHighQualityEnabledBlendForm;
- (id)lightKeycapsFontName;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (bool)lightweightFactory;
- (id)lowQualityLayeredBackgroundColorName;
- (void)lowQualityTraits:(id)arg1;
- (id)messagesWriteboardKeyImageName;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (id)passcodeControlKeyTraits;
- (double)passcodeEdgeWeight;
- (id)passcodeKeyEdgeColorName;
- (id)passcodeShiftedControlKeyTraits;
- (id)pasteKeyImageName;
- (bool)preferStringKeycapOverImage;
- (id)renderConfig;
- (id)renderingContext;
- (id)rightArrowKeyImageName;
- (double)rivenSizeFactor;
- (double)scale;
- (void)scaleTraits:(id)arg1;
- (id)segmentTraits;
- (void)setAllowsPaddles:(bool)arg1;
- (void)setDrawsOneHandedAffordance:(bool)arg1;
- (void)setLightweightFactory:(bool)arg1;
- (void)setPreferStringKeycapOverImage:(bool)arg1;
- (void)setRenderingContext:(id)arg1;
- (void)setRivenSizeFactor:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setStretchFactor:(struct CGSize { double x1; double x2; })arg1;
- (void)setupLayoutSegments;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)skinnyKeyThreshold;
- (id)spaceKeyGrabberHandlesImageName;
- (struct CGSize { double x1; double x2; })stretchFactor;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (void)suppressLayoutSegments;
- (id)thinKeycapsFontName;
- (id)thinTextFontName;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(bool)arg4 blurBlending:(bool)arg5;
- (double)translucentGapWidth;
- (id)undoKeyImageName;
- (bool)useBlueThemingForKey:(id)arg1;

@end
