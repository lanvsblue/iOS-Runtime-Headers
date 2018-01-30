/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStreamCodecConfig : NSObject {
    long long  _codecType;
    bool  _dtmf;
    bool  _dtxEnabled;
    unsigned int  _networkPayload;
    bool  _octetAligned;
    int  _preferredMode;
    NSMutableArray * _supportedModes;
}

@property (nonatomic, readonly) long long codecType;
@property (getter=isDTMF, nonatomic) bool dtmf;
@property (getter=isDTXEnabled, nonatomic) bool dtxEnabled;
@property (nonatomic, readonly) bool isComfortNoise;
@property (nonatomic) unsigned int networkPayload;
@property (getter=isOctetAligned, nonatomic) bool octetAligned;
@property (nonatomic) int preferredMode;
@property (nonatomic, retain) NSArray *supportedModes;

- (long long)codecType;
- (void)dealloc;
- (id)initWithCodecType:(long long)arg1;
- (bool)isComfortNoise;
- (bool)isDTMF;
- (bool)isDTXEnabled;
- (bool)isOctetAligned;
- (unsigned int)networkPayload;
- (int)preferredMode;
- (void)setDtmf:(bool)arg1;
- (void)setDtxEnabled:(bool)arg1;
- (void)setNetworkPayload:(unsigned int)arg1;
- (void)setOctetAligned:(bool)arg1;
- (void)setPreferredMode:(int)arg1;
- (void)setPreferredModeWithClientMode:(int)arg1;
- (void)setSupportedModes:(id)arg1;
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;
- (void)setupModesWithClientModeMask:(unsigned int)arg1;
- (id)supportedModes;

@end
