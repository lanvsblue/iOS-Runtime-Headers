/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCVehicleConnectionEventInstance : PBCodable <NSCopying> {
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
        unsigned int value : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _value;
}

@property (nonatomic) int eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasValue;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (bool)hasEventType;
- (bool)hasTimestamp;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setValue:(int)arg1;
- (unsigned long long)timestamp;
- (int)value;
- (void)writeTo:(id)arg1;

@end
