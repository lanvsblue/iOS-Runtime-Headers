/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver> {
    bool  _isBeginningEditing;
    int  _menuState;
    bool  _showMenuOnKeyboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBeginningEditing;
@property (nonatomic) bool showMenuOnKeyboard;
@property (readonly) Class superclass;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)hideEditMenu;
+ (bool)isAnimating;
+ (int)menuState;
+ (id)p_sharedEditMenuController;
+ (void)p_showEditMenuForInteractiveCanvasController:(id)arg1;
+ (id)sharedEditMenuController;
+ (void)showEditMenuAtTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 canCenterHUD:(bool)arg2 interactiveCanvasController:(id)arg3;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)isBeginningEditing;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardDidShowOrDock:(id)arg1;
- (void)p_clearIsBeginningEditing;
- (void)p_didAnimateKeyboard;
- (void)p_didHideMenu:(id)arg1;
- (void)p_didShowMenu:(id)arg1;
- (void)p_setMenuVisible:(id)arg1;
- (void)p_willHideMenu:(id)arg1;
- (void)p_willShowMenu:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setIsBeginningEditing:(bool)arg1;
- (void)setShowMenuOnKeyboard:(bool)arg1;
- (bool)showMenuOnKeyboard;

@end
