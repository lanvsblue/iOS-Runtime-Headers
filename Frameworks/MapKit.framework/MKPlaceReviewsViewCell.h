/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {
    NSString * _author;
    NSLayoutConstraint * _authorLabelBaselineConstraint;
    MKPlaceReviewAvatarGenerator * _avatarGenerator;
    NSDate * _date;
    _MKUILabel * _detailLabel;
    UIImageView * _pictureView;
    unsigned long long  _rating;
    _MKUILabel * _reviewLabel;
    NSLayoutConstraint * _reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint * _reviewLabelTopConstraint;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic, retain) MKPlaceReviewAvatarGenerator *avatarGenerator;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned long long rating;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_updateBaselineConstraints;
- (void)_updatePictureTheme:(id)arg1;
- (id)author;
- (id)avatarGenerator;
- (id)date;
- (id)detailLabelText;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maxCharacters;
- (unsigned long long)rating;
- (void)setAuthor:(id)arg1;
- (void)setAvatarGenerator:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setRating:(unsigned long long)arg1;
- (void)setReview:(id)arg1;
- (void)setReviewText:(id)arg1;

@end
