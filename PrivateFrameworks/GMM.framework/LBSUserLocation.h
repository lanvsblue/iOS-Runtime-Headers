/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSAddress, NSString, LBSPoint;



@interface LBSUserLocation : PBCodable 
{
    LBSPoint *_latLng;
    NSString *_source;
    NSInteger _accuracy;
    BOOL _hasAccuracy;
    NSInteger _confidence;
    BOOL _hasConfidence;
    LBSAddress *_address;
    NSString *_misc;
    BOOL _obsolete;
    BOOL _hasObsolete;
    NSMutableArray *_features;
    NSString *_locationString;
    long long _timestamp;
    NSInteger _locType;
    BOOL _hasLocType;
}

@property(readonly) BOOL hasLatLng;
@property(readonly) BOOL hasSource;
@property(readonly) BOOL hasAddress;
@property(readonly) BOOL hasMisc;
@property(readonly) NSInteger featuresCount;
@property(readonly) BOOL hasLocationString;
@property(readonly) BOOL hasLocType; /* unknown property attribute: V_hasLocType */
@property NSInteger locType; /* unknown property attribute: V_locType */
@property long long timestamp; /* unknown property attribute: V_timestamp */
@property(retain) NSString *locationString; /* unknown property attribute: V_locationString */
@property(retain) NSMutableArray *features; /* unknown property attribute: V_features */
@property(readonly) BOOL hasObsolete; /* unknown property attribute: V_hasObsolete */
@property BOOL obsolete; /* unknown property attribute: V_obsolete */
@property(retain) NSString *misc; /* unknown property attribute: V_misc */
@property(retain) LBSAddress *address; /* unknown property attribute: V_address */
@property(readonly) BOOL hasConfidence; /* unknown property attribute: V_hasConfidence */
@property NSInteger confidence; /* unknown property attribute: V_confidence */
@property(readonly) BOOL hasAccuracy; /* unknown property attribute: V_hasAccuracy */
@property NSInteger accuracy; /* unknown property attribute: V_accuracy */
@property(retain) NSString *source; /* unknown property attribute: V_source */
@property(retain) LBSPoint *latLng; /* unknown property attribute: V_latLng */


- (id)init;
- (void)dealloc;
- (BOOL)hasLatLng;
- (BOOL)hasSource;
- (void)setAccuracy:(NSInteger)arg1;
- (void)setConfidence:(NSInteger)arg1;
- (BOOL)hasAddress;
- (BOOL)hasMisc;
- (void)setObsolete:(BOOL)arg1;
- (NSInteger)featuresCount;
- (void)setFeature:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)featureAtIndex:(NSUInteger)arg1;
- (void)addFeature:(id)arg1;
- (BOOL)hasLocationString;
- (void)setLocType:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (BOOL)hasLocType;
- (NSInteger)locType;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)locationString;
- (void)setLocationString:(id)arg1;
- (id)features;
- (void)setFeatures:(id)arg1;
- (BOOL)hasObsolete;
- (BOOL)obsolete;
- (id)misc;
- (void)setMisc:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (BOOL)hasConfidence;
- (NSInteger)confidence;
- (BOOL)hasAccuracy;
- (NSInteger)accuracy;
- (id)source;
- (void)setSource:(id)arg1;
- (id)latLng;
- (void)setLatLng:(id)arg1;

@end