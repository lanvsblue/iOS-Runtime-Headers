/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoImagePetsResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    float  _confidence;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic) float confidence;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)bounds;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)writeTo:(id)arg1;

@end
