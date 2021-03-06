/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager> {
    bool  _animationsPaused;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedIntrinsicSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedOpticalEdgeInsets;
    bool  _cachedOpticalEdgeInsetsIsValid;
    NSAttributedString * _correctAttributedText;
    bool  _hideMinutesIfZero;
    UILabel * _label;
    double  _maxWidth;
    bool  _primary;
    bool  _showSeconds;
    bool  _showSubstringFromSeparator;
    bool  _showSubstringToSeparator;
    bool  _showsBlinker;
    bool  _showsDesignator;
    bool  _showsNumbers;
    CLKUITimeLabelStyle * _style;
    CLKTimeFormatter * _timeFormatter;
    NSString * _timeText;
}

@property (nonatomic) bool animationsPaused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (nonatomic) bool showSeconds;
@property (nonatomic) bool showsBlinker;
@property (nonatomic) bool showsNumbers;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_attributedTextShowingBlinker:(bool)arg1 numbers:(bool)arg2;
- (id)_initPrimary:(bool)arg1 withTimeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(id /* block */)arg4;
- (double)_lastLineBaseline;
- (void)_updateAttributedText;
- (bool)animationsPaused;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (id)initWithTimeFormatter:(id)arg1 options:(unsigned long long)arg2 labelFactory:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAnimationsPaused:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setShowsBlinker:(bool)arg1;
- (void)setShowsDesignator:(bool)arg1;
- (void)setShowsNumbers:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (bool)showSeconds;
- (bool)showsBlinker;
- (bool)showsNumbers;
- (struct CGSize { double x1; double x2; })sizeThatFits;
- (void)sizeViewToFit;
- (id)textColor;
- (void)updateTimeText;
- (id)view;

@end
