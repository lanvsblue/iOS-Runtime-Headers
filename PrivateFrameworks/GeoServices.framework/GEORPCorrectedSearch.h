/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    struct { 
        unsigned int correctedSearchResultIndex : 1; 
        unsigned int originalSearchResultIndex : 1; 
    unsigned int _correctedSearchResultIndex;
    } _has;
    unsigned int _originalSearchResultIndex;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
}

@property unsigned int correctedSearchResultIndex;
@property bool hasCorrectedSearchResultIndex;
@property bool hasOriginalSearchResultIndex;
@property(readonly) bool hasPlaceRequest;
@property(readonly) bool hasPlaceResponse;
@property(readonly) bool hasPlaceSearchRequest;
@property(readonly) bool hasPlaceSearchResponse;
@property(readonly) bool hasPreferredSearchDisplayLocation;
@property unsigned int originalSearchResultIndex;
@property(retain) GEOPDPlaceRequest * placeRequest;
@property(retain) GEOPDPlaceResponse * placeResponse;
@property(retain) GEOPlaceSearchRequest * placeSearchRequest;
@property(retain) GEOPlaceSearchResponse * placeSearchResponse;
@property(retain) NSString * preferredSearchDisplayLocation;

- (bool)containsReportableData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)correctedSearchResultIndex;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedSearchResultIndex;
- (bool)hasOriginalSearchResultIndex;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (bool)hasPlaceSearchRequest;
- (bool)hasPlaceSearchResponse;
- (bool)hasPreferredSearchDisplayLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)originalSearchResultIndex;
- (id)placeRequest;
- (id)placeResponse;
- (id)placeSearchRequest;
- (id)placeSearchResponse;
- (id)preferredSearchDisplayLocation;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg1;
- (void)setHasCorrectedSearchResultIndex:(bool)arg1;
- (void)setHasOriginalSearchResultIndex:(bool)arg1;
- (void)setOriginalSearchResultIndex:(unsigned int)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setPreferredSearchDisplayLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end