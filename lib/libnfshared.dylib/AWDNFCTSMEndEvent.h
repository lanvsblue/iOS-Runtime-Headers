/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {
    NSData * _aid;
    bool  _authEnable;
    NSData * _discretionaryData;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int lcState : 1; 
        unsigned int status : 1; 
        unsigned int authEnable : 1; 
        unsigned int mfdEnable : 1; 
        unsigned int restricted : 1; 
    }  _has;
    unsigned int  _lcState;
    bool  _mfdEnable;
    bool  _restricted;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) bool authEnable;
@property (nonatomic, retain) NSData *discretionaryData;
@property (nonatomic, readonly) bool hasAid;
@property (nonatomic) bool hasAuthEnable;
@property (nonatomic, readonly) bool hasDiscretionaryData;
@property (nonatomic) bool hasLcState;
@property (nonatomic) bool hasMfdEnable;
@property (nonatomic) bool hasRestricted;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int lcState;
@property (nonatomic) bool mfdEnable;
@property (nonatomic) bool restricted;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (id)aid;
- (bool)authEnable;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discretionaryData;
- (bool)hasAid;
- (bool)hasAuthEnable;
- (bool)hasDiscretionaryData;
- (bool)hasLcState;
- (bool)hasMfdEnable;
- (bool)hasRestricted;
- (bool)hasStatus;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lcState;
- (void)mergeFrom:(id)arg1;
- (bool)mfdEnable;
- (bool)readFrom:(id)arg1;
- (bool)restricted;
- (void)setAid:(id)arg1;
- (void)setAuthEnable:(bool)arg1;
- (void)setDiscretionaryData:(id)arg1;
- (void)setHasAuthEnable:(bool)arg1;
- (void)setHasLcState:(bool)arg1;
- (void)setHasMfdEnable:(bool)arg1;
- (void)setHasRestricted:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLcState:(unsigned int)arg1;
- (void)setMfdEnable:(bool)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
