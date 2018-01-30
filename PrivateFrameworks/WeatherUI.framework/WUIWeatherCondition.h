/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIWeatherCondition : NSObject {
    unsigned long long  _CAMLState;
    double  _alpha;
    City * _city;
    long long  _condition;
    bool  _forcesCondition;
    long long  _forcesNight;
    NSMutableArray * _gyroLayers;
    bool  _hidden;
    bool  _isRotating;
    CALayer * _layer;
    NSString * _loadedFileName;
    bool  _multiCityMode;
    bool  _playing;
    CALayer * _rootLayer;
    bool  _shouldRasterize;
    double  _speed;
    CAStateController * _stateController;
    double  _timeOffset;
}

@property (nonatomic) unsigned long long CAMLState;
@property (nonatomic) double alpha;
@property (nonatomic) City *city;
@property (nonatomic) long long condition;
@property (nonatomic) bool forcesCondition;
@property (nonatomic) long long forcesNight;
@property (nonatomic, retain) NSMutableArray *gyroLayers;
@property (nonatomic) bool hidden;
@property (nonatomic) bool isRotating;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, retain) NSString *loadedFileName;
@property (nonatomic) bool multiCityMode;
@property (nonatomic) bool playing;
@property (nonatomic) bool shouldRasterize;
@property (nonatomic) double speed;
@property (nonatomic, retain) CAStateController *stateController;
@property (nonatomic) double timeOffset;

- (void).cxx_destruct;
- (unsigned long long)CAMLState;
- (bool)_interfaceConsideredPortraitForCAMLLayer;
- (bool)_interfaceConsideredPortraitForCAMLLayerWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (double)alpha;
- (id)city;
- (long long)condition;
- (void)dealloc;
- (bool)forcesCondition;
- (long long)forcesNight;
- (id)gyroLayers;
- (bool)hidden;
- (id)init;
- (bool)isRotating;
- (id)layer;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)loadedFileName;
- (bool)multiCityMode;
- (void)pause;
- (bool)playing;
- (void)resume;
- (void)setAlpha:(double)arg1;
- (void)setAlpha:(double)arg1 animationDuration:(double)arg2;
- (void)setCAMLLayerStateForInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setCAMLState:(unsigned long long)arg1;
- (void)setCity:(id)arg1;
- (void)setCity:(id)arg1 animationDuration:(double)arg2;
- (void)setCondition:(long long)arg1;
- (void)setCondition:(long long)arg1 animationDuration:(double)arg2;
- (void)setCorrectStateForCurrentOrientationAndMode;
- (void)setForcesCondition:(bool)arg1;
- (void)setForcesNight:(long long)arg1;
- (void)setGyroLayers:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsRotating:(bool)arg1;
- (void)setLoadedFileName:(id)arg1;
- (void)setMultiCityMode:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStateController:(id)arg1;
- (void)setTime:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (bool)shouldRasterize;
- (double)speed;
- (id)stateController;
- (double)timeOffset;
- (void)transitionToSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;

@end
