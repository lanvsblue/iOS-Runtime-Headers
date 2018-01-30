/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAuthorView : UIView {
    UIButton * _authorNameButton;
    UIView * _bottomSeparatorView;
    UILabel * _label;
}

@property (nonatomic, copy) NSString *authorName;
@property (nonatomic, readonly) UIControl *authorNameButton;
@property (nonatomic, copy) NSString *labelText;

- (void).cxx_destruct;
- (id)authorName;
- (id)authorNameButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelText;
- (void)layoutSubviews;
- (void)setAuthorName:(id)arg1;
- (void)setLabelText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
