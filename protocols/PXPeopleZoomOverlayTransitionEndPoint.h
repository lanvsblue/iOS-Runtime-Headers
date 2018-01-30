/* Generated by RuntimeBrowser.
 */

@protocol PXPeopleZoomOverlayTransitionEndPoint <NSObject>

@required

- (bool)shouldPerformZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotRectsInScreenCoordinatesWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotViewsForZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;

@optional

- (void)zoomOverlayTransitionDidBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionDidEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;

@end
