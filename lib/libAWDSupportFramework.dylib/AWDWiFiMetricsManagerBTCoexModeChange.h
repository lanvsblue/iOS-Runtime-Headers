/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerBTCoexModeChange : PBCodable <NSCopying> {
    unsigned int  _a2dpConnectionCount;
    unsigned int  _clamshellClosed;
    unsigned int  _coexMode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int a2dpConnectionCount : 1; 
        unsigned int clamshellClosed : 1; 
        unsigned int coexMode : 1; 
        unsigned int hidConnectionCount : 1; 
        unsigned int rssi : 1; 
        unsigned int scoConnectionCount : 1; 
        unsigned int wifiInfraChainConfig : 1; 
        unsigned int wifiInfraChannel : 1; 
        unsigned int wifiInfraPhyMode : 1; 
    }  _has;
    unsigned int  _hidConnectionCount;
    int  _rssi;
    unsigned int  _scoConnectionCount;
    unsigned long long  _timestamp;
    unsigned int  _wifiInfraChainConfig;
    unsigned int  _wifiInfraChannel;
    unsigned int  _wifiInfraPhyMode;
}

@property (nonatomic) unsigned int a2dpConnectionCount;
@property (nonatomic) unsigned int clamshellClosed;
@property (nonatomic) unsigned int coexMode;
@property (nonatomic) bool hasA2dpConnectionCount;
@property (nonatomic) bool hasClamshellClosed;
@property (nonatomic) bool hasCoexMode;
@property (nonatomic) bool hasHidConnectionCount;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasScoConnectionCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWifiInfraChainConfig;
@property (nonatomic) bool hasWifiInfraChannel;
@property (nonatomic) bool hasWifiInfraPhyMode;
@property (nonatomic) unsigned int hidConnectionCount;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned int scoConnectionCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int wifiInfraChainConfig;
@property (nonatomic) unsigned int wifiInfraChannel;
@property (nonatomic) unsigned int wifiInfraPhyMode;

- (unsigned int)a2dpConnectionCount;
- (unsigned int)clamshellClosed;
- (unsigned int)coexMode;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasA2dpConnectionCount;
- (bool)hasClamshellClosed;
- (bool)hasCoexMode;
- (bool)hasHidConnectionCount;
- (bool)hasRssi;
- (bool)hasScoConnectionCount;
- (bool)hasTimestamp;
- (bool)hasWifiInfraChainConfig;
- (bool)hasWifiInfraChannel;
- (bool)hasWifiInfraPhyMode;
- (unsigned long long)hash;
- (unsigned int)hidConnectionCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (unsigned int)scoConnectionCount;
- (void)setA2dpConnectionCount:(unsigned int)arg1;
- (void)setClamshellClosed:(unsigned int)arg1;
- (void)setCoexMode:(unsigned int)arg1;
- (void)setHasA2dpConnectionCount:(bool)arg1;
- (void)setHasClamshellClosed:(bool)arg1;
- (void)setHasCoexMode:(bool)arg1;
- (void)setHasHidConnectionCount:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasScoConnectionCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifiInfraChainConfig:(bool)arg1;
- (void)setHasWifiInfraChannel:(bool)arg1;
- (void)setHasWifiInfraPhyMode:(bool)arg1;
- (void)setHidConnectionCount:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setScoConnectionCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiInfraChainConfig:(unsigned int)arg1;
- (void)setWifiInfraChannel:(unsigned int)arg1;
- (void)setWifiInfraPhyMode:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)wifiInfraChainConfig;
- (unsigned int)wifiInfraChannel;
- (unsigned int)wifiInfraPhyMode;
- (void)writeTo:(id)arg1;

@end
