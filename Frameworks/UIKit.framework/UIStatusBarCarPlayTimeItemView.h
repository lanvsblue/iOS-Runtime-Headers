/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    bool  _currentlyGatheringLogs;
    bool  _isInternalInstall;
    bool  _radarItemEnabled;
    NSString * _timeString;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (bool)_showRadarButtonForInternalInstalls;
- (id)_timeImageSet;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)allowsUserInteraction;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (id)highlightImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)neededSizeForImageSet:(id)arg1;
- (bool)showsTouchWhenHighlighted;
- (long long)textStyle;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (bool)usesAdvancedActions;

@end
