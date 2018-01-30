/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirectionsRequest : NSObject <NSCopying> {
    NSArray * _additionalTransportTypesRequested;
    NSDate * _arrivalDate;
    GEOAutomobileOptions * _automobileOptions;
    NSDate * _departureDate;
    MKMapItem * _destination;
    bool  _includeBasicRoutePoints;
    bool  _includeDistanceInETA;
    bool  _includeEntryPoints;
    bool  _includeTrafficIncidents;
    bool  _includeTravelTimes;
    bool  _includeZilchRoutePoints;
    int  _requestMode;
    bool  _requestsAlternateRoutes;
    MKMapItem * _source;
    GEOTransitOptions * _transitOptions;
    unsigned long long  _transportType;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) bool _includeBasicRoutePoints;
@property (nonatomic, readonly) bool _includeEntryPoints;
@property (nonatomic, readonly) bool _includeTrafficIncidents;
@property (nonatomic, readonly) bool _includeTravelTimes;
@property (nonatomic, readonly) bool _includeTypicalRouteDuration;
@property (nonatomic, readonly) bool _includeZilchRoutePoints;
@property (getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:, nonatomic, retain) NSArray *additionalTransportTypesRequested;
@property (getter=_automobileOptions, setter=_setAutomobileOptions:, nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, retain) MKMapItem *destination;
@property (getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:, nonatomic) bool includeDistanceInETA;
@property (getter=_requestMode, setter=_setRequestMode:, nonatomic) int requestMode;
@property (nonatomic, retain) MKMapItem *source;
@property (getter=_transitOptions, setter=_setTransitOptions:, nonatomic, retain) GEOTransitOptions *transitOptions;
@property (getter=_walkingOptions, setter=_setWalkingOptions:, nonatomic, retain) GEOWalkingOptions *walkingOptions;

+ (bool)isDirectionsRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTransportTypesRequested;
- (id)_arrivalDate;
- (id)_automobileOptions;
- (id)_departureDate;
- (bool)_includeBasicRoutePoints;
- (bool)_includeDistanceInETA;
- (bool)_includeEntryPoints;
- (bool)_includeTrafficIncidents;
- (bool)_includeTravelTimes;
- (bool)_includeTypicalRouteDuration;
- (bool)_includeZilchRoutePoints;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithDictionaryRepresentation:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (int)_requestMode;
- (void)_setAdditionalTransportTypesRequested:(id)arg1;
- (void)_setAutomobileOptions:(id)arg1;
- (void)_setIncludeDistanceInETA:(bool)arg1;
- (void)_setRequestMode:(int)arg1;
- (void)_setTransitOptions:(id)arg1;
- (void)_setWalkingOptions:(id)arg1;
- (id)_transitOptions;
- (unsigned long long)_transportType;
- (id)_walkingOptions;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)requestsAlternateRoutes;
- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setRequestsAlternateRoutes:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)transportType;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
