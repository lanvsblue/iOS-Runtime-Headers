/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUISportsOverlayView : UIView <WLKUIScorecardViewDelegate> {
    UIImage * _backgroundImageForMaterialRendering;
    _TVImageView * _logo;
    TVImageElement * _logoElement;
    TVViewElement * _overlayElement;
    NSArray * _scorecardData;
    TVViewElement * _scorecardElement;
    WLKUIScorecardView * _scorecardView;
    _WLKUITextBadge * _textBadge;
    TVViewElement * _textBadgeElement;
    bool  _textBadgeHasMaterial;
}

@property (nonatomic, retain) UIImage *backgroundImageForMaterialRendering;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVImageView *logo;
@property (nonatomic, retain) TVImageElement *logoElement;
@property (nonatomic, retain) TVViewElement *overlayElement;
@property (nonatomic, copy) NSArray *scorecardData;
@property (nonatomic, retain) TVViewElement *scorecardElement;
@property (nonatomic, retain) WLKUIScorecardView *scorecardView;
@property (readonly) Class superclass;
@property (nonatomic, retain) _WLKUITextBadge *textBadge;
@property (nonatomic, retain) TVViewElement *textBadgeElement;
@property (nonatomic) bool textBadgeHasMaterial;

+ (id)sportsOverlayViewFromElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)_materialImageForImage:(id)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_resetTextBadge;
- (int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForMaterialRendering;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (void)backgroundImageSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutWithElement:(id)arg1;
- (id)logo;
- (id)logoElement;
- (double)maximumInteritemSpacingInScorecardView:(id)arg1;
- (double)maximumWidthForScorecardView:(id)arg1;
- (double)minimumInteritemSpacingInScorecardView:(id)arg1;
- (long long)numberOfElementsForScorecardView:(id)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (id)overlayElement;
- (void)reset;
- (double)rowSpacingInScorecardView:(id)arg1;
- (id)scorecardData;
- (id)scorecardElement;
- (id)scorecardView;
- (void)setBackgroundImageForMaterialRendering:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoElement:(id)arg1;
- (void)setOverlayElement:(id)arg1;
- (void)setScorecardData:(id)arg1;
- (void)setScorecardElement:(id)arg1;
- (void)setScorecardView:(id)arg1;
- (void)setTextBadge:(id)arg1;
- (void)setTextBadgeElement:(id)arg1;
- (void)setTextBadgeHasMaterial:(bool)arg1;
- (long long)styleForScorecardView:(id)arg1;
- (id)textBadge;
- (id)textBadgeElement;
- (bool)textBadgeHasMaterial;
- (id)viewElementForScorecard:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;

@end
