/* Generated by RuntimeBrowser.
 */

@protocol _UINavigationBarAugmentedTitleView <NSObject>

@required

- (void)_contentDidChange;
- (bool)_hideNavigationBarBackButton;
- (bool)_hideNavigationBarLeadingBarButtons;
- (bool)_hideNavigationBarStandardTitle;
- (bool)_hideNavigationBarTrailingBarButtons;
- (double)_navigationBarBackButtonMaximumWidth;
- (double)_navigationBarContentHeight;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(bool)arg2;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id <_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(bool)arg2;
- (bool)_underlayNavigationBarContent;
- (bool)_wantsTwoPartTransition;
- (int)preferredAlignment;

@end
