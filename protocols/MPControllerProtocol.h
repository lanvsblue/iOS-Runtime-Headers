/* Generated by RuntimeBrowser.
 */

@protocol MPControllerProtocol <NSObject>

@required

- (void)clearWeakReferencesToObject:(id)arg1;
- (id)delegate;
- (MPAVItem *)item;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (long long)orientation;
- (MPAVController *)player;
- (void)setDelegate:(id)arg1;
- (void)setItem:(MPAVItem *)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setPlayer:(MPAVController *)arg1;
- (UIView *)view;

@end
