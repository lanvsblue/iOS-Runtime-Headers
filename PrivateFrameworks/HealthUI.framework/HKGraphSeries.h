/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {
    NSUUID * _UUID;
    bool  _adjustYAxisForLabels;
    bool  _allowsSelection;
    double  _alpha;
    bool  _animatingDuringAutoscale;
    HKPropertyAnimationApplier * _animationApplier;
    <HKGraphSeriesAxisAnnotation> * _axisAnnotationDelegate;
    <HKGraphSeriesAxisScalingRule> * _axisScalingRule;
    NSMutableDictionary * _cachedCoordinateListsByBlockPath;
    NSMutableDictionary * _cachedDataBlocksByBlockPath;
    UIView * _cachedYAxisAccessoryView;
    HKValueRange * _closestXCoordinateRange;
    id  _context;
    HKGraphSeriesDataSource * _dataSource;
    <HKSeriesDelegate> * _delegate;
    NSArray * _detailLegendEntries;
    bool  _dirty;
    UIColor * _offScreenIndicatorColor;
    double  _offscreenIndicatorAlpha;
    bool  _primarySeriesForAutoscale;
    struct { 
        struct { 
            struct { 
                long long index; 
                long long zoom; 
            } blockPath; 
            long long index; 
        } min; 
        struct { 
            struct { 
                long long index; 
                long long zoom; 
            } blockPath; 
            long long index; 
        } max; 
    }  _selectedPathRange;
    NSArray * _titleLegendEntries;
    HKValueRange * _visibleValueRange;
    HKAxis * _yAxis;
    <HKAxisAccessoryViewDelegate> * _yAxisAccessoryViewDelegate;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) bool adjustYAxisForLabels;
@property (nonatomic) bool allowsSelection;
@property (nonatomic) double alpha;
@property (nonatomic, readonly) bool animatingDuringAutoscale;
@property (nonatomic) <HKGraphSeriesAxisAnnotation> *axisAnnotationDelegate;
@property (nonatomic, retain) <HKGraphSeriesAxisScalingRule> *axisScalingRule;
@property (nonatomic, retain) UIView *cachedYAxisAccessoryView;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) HKGraphSeriesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSeriesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *detailLegendEntries;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *offScreenIndicatorColor;
@property (nonatomic) double offscreenIndicatorAlpha;
@property (nonatomic) bool primarySeriesForAutoscale;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *titleLegendEntries;
@property (nonatomic, copy) HKAxis *yAxis;
@property (nonatomic) <HKAxisAccessoryViewDelegate> *yAxisAccessoryViewDelegate;

- (void).cxx_destruct;
- (id)UUID;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(struct { long long x1; long long x2; })arg2;
- (id)_cachedCoordinatesForBlockPath:(struct { long long x1; long long x2; })arg1;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;
- (id)_coordinatesForBlockPath:(struct { long long x1; long long x2; })arg1 xAxis:(id)arg2;
- (id)_dataBlockForBlockPath:(struct { long long x1; long long x2; })arg1;
- (void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(id /* block */)arg3;
- (id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_setDirtyWithNewData:(bool)arg1;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3 zoomScale:(double)arg4;
- (bool)adjustYAxisForLabels;
- (bool)allowsSelection;
- (double)alpha;
- (bool)animatingDuringAutoscale;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)autoscaleYAxisWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 animated:(bool)arg6;
- (void)autoscaleYAxisWithYAxisRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (id)axisAnnotationDelegate;
- (id)axisScalingRule;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)cachedYAxisAccessoryView;
- (id)closestXCoordinateRange;
- (bool)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2;
- (bool)containsCoordinatesInChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)context;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })coordinateTransformForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)dataSource;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deselectPath;
- (id)detailLegendEntries;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)distanceFromTouchPoint:(struct CGPoint { double x1; double x2; })arg1 inChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint { double x1; double x2; })arg5 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (void)drawWithChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 inContext:(struct CGContext { }*)arg7 secondaryRenderContext:(id)arg8;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 roundToViewScale:(bool)arg6 block:(id /* block */)arg7;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 roundToViewScale:(bool)arg6 exclusionOptions:(long long)arg7 block:(id /* block */)arg8;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 roundToViewScale:(bool)arg6 rejectPointsOutOfChartRect:(bool)arg7 block:(id /* block */)arg8;
- (id)findVisibleBlockCoordinatesForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 xAxisTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)init;
- (bool)isHighlighted;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)offScreenIndicatorColor;
- (double)offscreenIndicatorAlpha;
- (bool)primarySeriesForAutoscale;
- (void)selectPathsinPathRange:(struct { struct { struct { long long x_1_2_1; long long x_1_2_2; } x_1_1_1; long long x_1_1_2; } x1; struct { struct { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; long long x_2_1_2; } x2; })arg1 coordinateRange:(id)arg2;
- (struct { struct { struct { long long x_1_2_1; long long x_1_2_2; } x_1_1_1; long long x_1_1_2; } x1; struct { struct { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; long long x_2_1_2; } x2; })selectedPathRange;
- (void)setAdjustYAxisForLabels:(bool)arg1;
- (void)setAllowsSelection:(bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAxisAnnotationDelegate:(id)arg1;
- (void)setAxisScalingRule:(id)arg1;
- (void)setCachedYAxisAccessoryView:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailLegendEntries:(id)arg1;
- (void)setOffScreenIndicatorColor:(id)arg1;
- (void)setOffscreenIndicatorAlpha:(double)arg1;
- (void)setPrimarySeriesForAutoscale:(bool)arg1;
- (void)setTitleLegendEntries:(id)arg1;
- (void)setYAxis:(id)arg1;
- (void)setYAxisAccessoryViewDelegate:(id)arg1;
- (bool)shouldInvertAxis;
- (bool)supportsMultiTouchSelection;
- (id)titleLegendEntries;
- (id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)visibleValueRange;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)yAxis;
- (id)yAxisAccessoryViewDelegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })yAxisAccessoryViewEdgeInsets;
- (struct CGSize { double x1; double x2; })yAxisAccessoryViewSize;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
