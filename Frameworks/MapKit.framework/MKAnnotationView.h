/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {
    _MKAnnotationViewAnchor * _anchor;
    bool  _animatingToCoordinate;
    <MKAnnotation> * _annotation;
    MKAnnotationManager * _annotationManager;
    id /* block */  _calloutHitTest;
    struct CGPoint { 
        double x; 
        double y; 
    }  _calloutOffset;
    UICalloutView * _calloutView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centerOffset;
    MKAnnotationView * _clusterAnnotationView;
    NSString * _clusteringIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collisionFrame;
    long long  _collisionMode;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    _MKAnnotationViewCustomFeatureAnnotation * _customFeatureAnnotation;
    UIView * _detailCalloutAccessoryView;
    double  _direction;
    float  _displayPriority;
    unsigned long long  _dragState;
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int draggable : 1; 
        unsigned int useBalloonCallouts : 1; 
        unsigned int customTransformApplied : 1; 
        unsigned int internalTransformApplied : 1; 
        unsigned int animatingToCoordinate : 1; 
        unsigned int tracking : 1; 
        unsigned int pendingOffsetAnimation : 1; 
        unsigned int pendingHideAnimation : 1; 
    }  _flags;
    NSMutableArray * _hiddenCompletionBlocks;
    unsigned long long  _hiddenReasons;
    UIImage * _image;
    CALayer * _imageLayer;
    UIView * _leftCalloutAccessoryView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftCalloutOffset;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    double  _mapPitchRadians;
    double  _mapRotationRadians;
    unsigned long long  _mapType;
    bool  _pendingSelectionAnimated;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _presentationCoordinate;
    id /* block */  _presentationCoordinateChangedCallback;
    double  _presentationCourse;
    double  _realAlpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _realOffset;
    NSString * _reuseIdentifier;
    UIView * _rightCalloutAccessoryView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightCalloutOffset;
    double  _rotationRadians;
    GEORouteMatch * _routeMatch;
    float  _selectionPriority;
    bool  _tracking;
    MKUserLocationAnnotationViewProxy * _userLocationProxy;
    unsigned long long  _zIndex;
}

@property (getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:, nonatomic) bool _animatingToCoordinate;
@property (setter=_setAnnotationManager:, nonatomic) MKAnnotationManager *_annotationManager;
@property (nonatomic, copy) id /* block */ _calloutHitTest;
@property (setter=_setDirection:, nonatomic) double _direction;
@property (setter=_setPresentationCoordinate:, nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } _presentationCoordinate;
@property (setter=_setPresentationCoordinateChangedCallback:, nonatomic, copy) id /* block */ _presentationCoordinateChangedCallback;
@property (setter=_setPresentationCourse:, nonatomic) double _presentationCourse;
@property (setter=_setRouteMatch:, nonatomic, retain) GEORouteMatch *_routeMatch;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _significantFrame;
@property (getter=_isTracking, setter=_setTracking:, nonatomic) bool _tracking;
@property (nonatomic, readonly) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property (nonatomic, readonly) VKAnchorWrapper *anchor;
@property (nonatomic, retain) <MKAnnotation> *annotation;
@property (getter=_balloonCalloutStyle, nonatomic, readonly) long long balloonCalloutStyle;
@property (getter=_balloonContentView, nonatomic, readonly) UIView *balloonContentView;
@property (getter=_balloonImage, nonatomic, readonly) UIImage *balloonImage;
@property (getter=_balloonInnerStrokeColor, nonatomic, readonly) UIColor *balloonInnerStrokeColor;
@property (getter=_balloonStrokeColor, nonatomic, readonly) UIColor *balloonStrokeColor;
@property (getter=_balloonTintColor, nonatomic, readonly) UIColor *balloonTintColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } calloutOffset;
@property (nonatomic) bool canShowCallout;
@property (nonatomic) struct CGPoint { double x1; double x2; } centerOffset;
@property (nonatomic, readonly) MKAnnotationView *clusterAnnotationView;
@property (nonatomic, copy) NSString *clusteringIdentifier;
@property (getter=_collisionFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collisionFrame;
@property (nonatomic) long long collisionMode;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailCalloutAccessoryView;
@property (nonatomic) float displayPriority;
@property (nonatomic) unsigned long long dragState;
@property (getter=isDraggable, nonatomic) bool draggable;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIView *leftCalloutAccessoryView;
@property (nonatomic) struct CGPoint { double x1; double x2; } leftCalloutOffset;
@property (getter=_mapDisplayStyle, setter=_setMapDisplayStyle:, nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (getter=_mapPitchRadians, setter=_setMapPitchRadians:, nonatomic) double mapPitchRadians;
@property (getter=_mapRotationRadians, setter=_setMapRotationRadians:, nonatomic) double mapRotationRadians;
@property (getter=_isPendingSelectionAnimated, setter=_setPendingSelectionAnimated:, nonatomic) bool pendingSelectionAnimated;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *rightCalloutAccessoryView;
@property (nonatomic) struct CGPoint { double x1; double x2; } rightCalloutOffset;
@property (getter=isSelected, nonatomic) bool selected;
@property (getter=_selectionPriority, setter=_setSelectionPriority:, nonatomic) float selectionPriority;
@property (getter=_significantBounds, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } significantBounds;
@property (readonly) Class superclass;
@property (getter=_useBalloonCallouts, setter=_setUseBalloonCallouts:, nonatomic) bool useBalloonCallouts;

+ (float)_defaultDisplayPriority;
+ (id)_disclosureCalloutButton;
+ (bool)_followsTerrain;
+ (bool)_isInitiallyHiddenWhenAdded;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentLocationTitle;

- (void).cxx_destruct;
- (void)_addBalloonCalloutView:(id)arg1;
- (id)_annotationContainer;
- (id)_annotationManager;
- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonInnerStrokeColor;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (id /* block */)_calloutHitTest;
- (id)_calloutView;
- (bool)_canChangeOrientation;
- (bool)_canDisplayDisclosureInCallout;
- (bool)_canDisplayPlacemarkInCallout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_collisionFrame;
- (id)_containerView;
- (id)_contentLayer;
- (id)_customFeatureAnnotation;
- (void)_didDragWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)_didHideBalloonCalloutView:(id)arg1;
- (void)_didUpdatePosition;
- (double)_direction;
- (struct CGPoint { double x1; double x2; })_draggingDropOffset;
- (unsigned long long)_effectiveZIndex;
- (void)_enableRotationForHeadingMode:(double)arg1;
- (id)_getPopover:(id)arg1;
- (bool)_hasAlternateOrientation;
- (void)_invalidateCachedCoordinate;
- (bool)_isAnimatingToCoordinate;
- (bool)_isHiddenForReason:(unsigned long long)arg1;
- (bool)_isPendingSelectionAnimated;
- (bool)_isTracking;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })_mapDisplayStyle;
- (double)_mapPitchRadians;
- (double)_mapRotationRadians;
- (unsigned long long)_mapType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (struct CGPoint { double x1; double x2; })_offsetToAnnotationView:(id)arg1;
- (unsigned long long)_orientationCount;
- (void)_performHideAnimationIfNeeded;
- (void)_performOffsetAnimationIfNeeded;
- (void)_performStateUpdatesIfNeeded;
- (double)_pointsForDistance:(double)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })_presentationCoordinate;
- (id /* block */)_presentationCoordinateChangedCallback;
- (double)_presentationCourse;
- (void)_removePopover;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(bool)arg1;
- (id)_routeMatch;
- (float)_selectionPriority;
- (void)_setAnimatingToCoordinate:(bool)arg1;
- (void)_setAnnotationManager:(id)arg1;
- (void)_setCalloutView:(id)arg1;
- (void)_setCanDisplayDisclosureInCallout:(bool)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(bool)arg1;
- (void)_setDirection:(double)arg1;
- (void)_setHidden:(bool)arg1 forReason:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_setHidden:(bool)arg1 forReason:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setHiddenForOffscreen:(bool)arg1;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setPendingSelectionAnimated:(bool)arg1;
- (void)_setPositionOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_setPresentationCoordinateChangedCallback:(id /* block */)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_setRouteMatch:(id)arg1;
- (void)_setSelectionPriority:(float)arg1;
- (void)_setTracking:(bool)arg1;
- (void)_setUseBalloonCallouts:(bool)arg1;
- (void)_setVKNavigationPuckMarker:(id)arg1;
- (void)_setZIndex:(unsigned long long)arg1;
- (void)_setZIndex:(unsigned long long)arg1 notify:(bool)arg2;
- (bool)_shouldDeselectWhenDragged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_significantBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_significantFrame;
- (void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)_unhideForDisplay;
- (void)_updateAnchorPosition:(struct CGPoint { double x1; double x2; })arg1 alignToPixels:(bool)arg2;
- (void)_updateFromMap;
- (bool)_useBalloonCallouts;
- (id)_userLocationProxy;
- (void)_userTrackingModeDidChange:(id)arg1;
- (id)_vkNavigationPuckMarker;
- (unsigned long long)_zIndex;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)alpha;
- (id)anchor;
- (id)annotation;
- (struct CGPoint { double x1; double x2; })calloutOffset;
- (bool)canShowCallout;
- (struct CGPoint { double x1; double x2; })centerOffset;
- (id)clusterAnnotationView;
- (id)clusteringIdentifier;
- (long long)collisionMode;
- (void)commonInit;
- (long long)compareForClustering:(id)arg1;
- (long long)compareForCollision:(id)arg1;
- (void)configureCustomFeature:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)customFeatureAnnotation;
- (void)dealloc;
- (id)detailCalloutAccessoryView;
- (void)didMoveToSuperview;
- (float)displayPriority;
- (unsigned long long)dragState;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCustomFeatureForced:(bool)arg1;
- (bool)isCollidingWithAnnotationView:(id)arg1 previouslyCollided:(bool)arg2;
- (bool)isDraggable;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isHighlighted;
- (bool)isPersistent;
- (bool)isProvidingCustomFeature;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })leftCalloutOffset;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)prepareForSnapshotting;
- (id)reuseIdentifier;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })rightCalloutOffset;
- (void)setAlpha:(double)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanShowCallout:(bool)arg1;
- (void)setCenterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClusterAnnotationView:(id)arg1;
- (void)setClusteringIdentifier:(id)arg1;
- (void)setCollisionMode:(long long)arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setDisplayPriority:(float)arg1;
- (void)setDragState:(unsigned long long)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDraggable:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)set_calloutHitTest:(id /* block */)arg1;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (id)viewRepresentation;

@end
