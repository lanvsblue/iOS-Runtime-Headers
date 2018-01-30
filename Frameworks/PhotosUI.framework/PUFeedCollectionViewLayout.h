/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _captionPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _floatPadding;
    double  _floatingBottomDecorationHeight;
    long long  _flowDirection;
    bool  _hasHeadersAboveContent;
    bool  _hasHeadersBelowContent;
    struct CGSize { 
        double width; 
        double height; 
    }  _interTileSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _noCaptionSpacing;
    PUParallaxComputer * _parallaxComputer;
    double  _parallaxFactor;
    long long  _parallaxModel;
    double  _sectionHeaderBackgroundHeight;
    NSMutableArray * _sectionLayoutInfos;
    struct CGSize { 
        double width; 
        double height; 
    }  _sectionReferenceSize;
    bool  _shouldApplyParallaxEffect;
    bool  _shouldDisplayCaptionsBelowBatches;
    bool  _shouldFloatOverShortDistances;
    bool  _shouldFloatSectionHeaders;
    bool  _shouldFloatThumbnails;
    bool  _shouldFloatWithEase;
    double  _thumbnailSpacing;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } captionPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatPadding;
@property (nonatomic) double floatingBottomDecorationHeight;
@property (nonatomic) long long flowDirection;
@property (nonatomic, readonly) unsigned int flowDirectionEdge;
@property (nonatomic) struct CGSize { double x1; double x2; } interTileSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } noCaptionSpacing;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) long long parallaxModel;
@property (nonatomic) double sectionHeaderBackgroundHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } sectionReferenceSize;
@property (nonatomic) bool shouldApplyParallaxEffect;
@property (nonatomic) bool shouldDisplayCaptionsBelowBatches;
@property (nonatomic) bool shouldFloatOverShortDistances;
@property (nonatomic) bool shouldFloatSectionHeaders;
@property (nonatomic) bool shouldFloatThumbnails;
@property (nonatomic) bool shouldFloatWithEase;
@property (nonatomic) double thumbnailSpacing;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2;
- (id)_delegate;
- (void)_enumerateSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (void)_getSize:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutHorizontalSectionFooterIfNecessary:(id)arg1 fixedLayoutAttributes:(id)arg2 floatingLayoutAttributes:(id)arg3 footerConfig:(long long)arg4 origin:(struct CGPoint { double x1; double x2; })arg5 size:(struct CGSize { double x1; double x2; })arg6 section:(long long)arg7 isJoined:(bool)arg8;
- (long long)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)arg1 tileLayoutAttributes:(id)arg2 fixedLayoutAttributes:(id)arg3 origin:(inout struct CGPoint { double x1; double x2; }*)arg4 size:(inout struct CGSize { double x1; double x2; }*)arg5 sectionContentSize:(struct CGSize { double x1; double x2; })arg6 itemCount:(long long)arg7 section:(long long)arg8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutVerticalSectionHeaderIfNecessary:(id)arg1 fixedLayoutAttributes:(id)arg2 floatingLayoutAttributes:(id)arg3 section:(long long)arg4;
- (id)_parallaxComputer;
- (void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(struct CGSize { double x1; double x2; })arg2 to:(struct CGSize { double x1; double x2; })arg3;
- (void)_setOrigin:(struct CGPoint { double x1; double x2; })arg1 forSectionLayoutInfo:(id)arg2;
- (void)_updateExpectedHeaderLocations;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2;
- (void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(bool)arg2;
- (void)_updateParallaxComputer;
- (void)_updateParallaxForLayoutAttributes:(id)arg1;
- (void)_updateSectionLayoutInfosIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })captionPadding;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)enumerateImageElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })floatPadding;
- (double)floatingBottomDecorationHeight;
- (long long)flowDirection;
- (unsigned int)flowDirectionEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTileAtIndexPath:(id)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interTileSpacing;
- (void)invalidateLayoutAndCache;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })noCaptionSpacing;
- (long long)numberOfTilesOmittedInSection:(long long)arg1;
- (double)parallaxFactor;
- (long long)parallaxModel;
- (void)prepareLayout;
- (double)sectionHeaderBackgroundHeight;
- (struct CGSize { double x1; double x2; })sectionReferenceSize;
- (id)sectionsJoinedWithSection:(long long)arg1;
- (void)setCaptionPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFloatPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFloatingBottomDecorationHeight:(double)arg1;
- (void)setFlowDirection:(long long)arg1;
- (void)setInterTileSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setParallaxFactor:(double)arg1;
- (void)setParallaxModel:(long long)arg1;
- (void)setSectionHeaderBackgroundHeight:(double)arg1;
- (void)setSectionReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldApplyParallaxEffect:(bool)arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(bool)arg1;
- (void)setShouldFloatOverShortDistances:(bool)arg1;
- (void)setShouldFloatSectionHeaders:(bool)arg1;
- (void)setShouldFloatThumbnails:(bool)arg1;
- (void)setShouldFloatWithEase:(bool)arg1;
- (void)setThumbnailSpacing:(double)arg1;
- (bool)shouldApplyParallaxEffect;
- (bool)shouldDisplayCaptionsBelowBatches;
- (bool)shouldFloatOverShortDistances;
- (bool)shouldFloatSectionHeaders;
- (bool)shouldFloatThumbnails;
- (bool)shouldFloatWithEase;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)thumbnailSpacing;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;

@end
