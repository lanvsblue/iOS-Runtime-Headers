/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarContentViewDelegate, _UINavigationControllerRefreshControlHostDelegate, _UINavigationItemChangeObserver> {
    bool  _backgroundTransparentWhenNotCollapsed;
    _UIBarBackground * _backgroundView;
    UIView * _canvasView;
    _UINavigationBarContentView * _contentView;
    bool  _hasIdiom;
    _UINavigationBarLargeTitleView * _largeTitleView;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousBarSize;
    _UINavigationBarModernPromptView * _promptView;
    _UINavigationControllerRefreshControlHost * _refreshControlHost;
    _UINavigationBarTransitionContext * _transitionContext;
    UILabel * _weeTitleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRefreshControlHosting;

- (void).cxx_destruct;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (double)_contentBackgroundExtension;
- (double)_contentViewFittingHeight;
- (id)_defaultTitleAttributes;
- (id)_defaultWeeTitleAttributes;
- (double)_effectiveBackIndicatorLeftMargin;
- (void)_endTransitionCompleted:(bool)arg1;
- (void)_enforceLayoutOrdering;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (bool)_isShowingExtendedContentView;
- (void)_layoutInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wantsExtendedContentView:(bool)arg2;
- (void)_performAnimationWithTransitionCompletion:(id /* block */)arg1 transition:(int)arg2;
- (id)_resolveLargeTitleAttributes;
- (void)_setupTopNavigationItemAnimated:(bool)arg1;
- (void)_setupTransitionContextForTransition:(int)arg1;
- (id)_shim_backdropGroupName;
- (double)_shim_backgroundAlpha;
- (id)_shim_compatibilityBackgroundView;
- (bool)_shim_disableBlurTinting;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(bool)arg1;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (bool)_stackWantsExtendedContentViewForItem:(id)arg1;
- (bool)_stackWantsLargeTitleDisplayedForItem:(id)arg1;
- (bool)_stackWantsSearchDisplayedForItem:(id)arg1;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (void)_updateAugmentedTitleDataSources;
- (void)_updateBackground;
- (void)_updateBackgrounds;
- (void)_updateCanvasView;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(bool)arg3;
- (void)_updateContentPriorities;
- (void)_updateLargeTitleBackgroundClipping;
- (void)_updatePromptViewAndActuallyHide:(bool)arg1;
- (void)_updateShadowsForBarStyle:(long long)arg1;
- (void)_updateTitleViewForOpacityChange;
- (void)_updateTitleViewWithLargeTitle:(bool)arg1;
- (void)_updateWithCompletion:(id /* block */)arg1;
- (bool)allowLargeTitleView;
- (void)animateForSearchPresentation:(bool)arg1;
- (void)changeAppearance;
- (void)changeLayout;
- (long long)currentContentSize;
- (struct { double x1; double x2; })heightRangeFittingWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1;
- (void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedCanvasView:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedPromptContent:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2 animated:(bool)arg3;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(bool)arg2;
- (void)popAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)prepare;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)recordBarSize:(struct CGSize { double x1; double x2; })arg1;
- (id)refreshControlHost;
- (void)safeAreaInsetsDidChange;
- (void)setRefreshControlHost:(id)arg1;
- (void)setupTopNavigationItem;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (long long)statusBarStyle;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateTopNavigationItemAnimated:(bool)arg1;
- (void)updateTopNavigationItemTitleView;
- (bool)wantsExtendedContentView;
- (bool)wantsLargeTitleDisplayed;

@end