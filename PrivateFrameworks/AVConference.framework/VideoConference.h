/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoConference : NSObject <GKNATObserverDelegate, VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource, VCAudioPowerLevelMonitorDelegate, VCCallSessionDelegate, VCMomentTransportDelegate, VCVideoCaptureClient> {
    VCAudioIO * _audioIO;
    id  _captionsDelegate;
    int  _clientPid;
    int  _deviceRole;
    FFTMeter * _inputFFTMeter;
    bool  _isWarmedUp;
    FFTMeter * _outputFFTMeter;
    VCAudioPowerLevelMonitor * _remoteAudioPowerLevelMonitor;
    struct opaqueVCAudioBufferList { } * _sinkBuffer;
    struct opaqueVCAudioBufferList { } * _sinkBufferMix;
    struct opaqueVCAudioBufferList { } * _sourceBuffer;
    NSMutableArray * _startedSessions;
    unsigned int  _transportType;
    VCMoments * _vcMoments;
    int  audioTimeStampDelta;
    VCImageQueue * backQueue;
    bool  bweOperatingModeInitialized;
    int  chatMode;
    VCVideoRule * conferenceCaptureRule;
    int  conferenceOperatingMode;
    float  conferenceVolume;
    NSArray * connectedPeers;
    int  currentCamera;
    char * currentFacing;
    NSString * currentFocus;
    VCCallSession * currentFocusSession;
    VCImageQueue * currentQueue;
    double  dAudioHostTime;
    id  delegate;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    bool  disableVAD;
    int  downstreamBandwidth;
    unsigned int  dwAudioTS;
    bool  forceNoICE;
    VCImageQueue * frontQueue;
    bool  hasMic;
    bool  inputFrequencyMeteringEnabled;
    float  inputMeterLevel;
    bool  inputMeteringEnabled;
    bool  isFocus;
    bool  isGKVoiceChat;
    bool  isTalking;
    bool  isUsingSuppression;
    bool  isValid;
    unsigned int  lastActiveCall;
    double  lastReceivedAudioTimestamp;
    unsigned int  lastSentAudioSampleTime;
    int  localFrameHeight;
    int  localFrameWidth;
    float  longTerm;
    VideoConferenceManager * manager;
    bool  microphoneMuted;
    unsigned int  mostRecentStartedCall;
    NSArray * mutedPeers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  natMutex;
    GKNATObserver * natObserver;
    NSDictionary * natTypeDictionary;
    bool  outputFrequencyMeteringEnabled;
    float  outputMeterLevel;
    bool  outputMeteringEnabled;
    int  packetsPerBundle;
    unsigned int  preferredCodec;
    NSObject<VideoConferenceChannelQualityDelegate> * qualityDelegate;
    unsigned int  recvRTPTimeStamp;
    int  remoteFrameHeight;
    int  remoteFrameWidth;
    unsigned char  requestedCameraType;
    bool  requiresWifi;
    VCImageQueue * screenQueue;
    NSArray * sessionArray;
    NSMutableDictionary * sessionDict;
    float  shortTerm;
    bool  shouldPrioritizeParticipantIDForSIPInvite;
    bool  shouldResumeAudio;
    bool  shouldResumeVideo;
    bool  shouldTimeoutPackets;
    unsigned char  speakingArray;
    NSObject<VideoConferenceSpeakingDelegate> * speakingDelegate;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  stateLock;
    CameraConferenceSynchronizer * synchronizer;
    unsigned int  talkTime;
    unsigned int  talkingPeersLimit;
    unsigned int  timeStampUpdateCounter;
    int  upstreamBandwidth;
    bool  useAFRC;
    bool  useActiveProbingSenderLog;
    bool  useCompressedConnectionData;
    bool  useFakeLargeFrameMode;
    bool  useNewBWEMode;
    bool  useViceroyBlobFormat;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  xAudioTS;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  xRemoteLayer;
}

@property (nonatomic) int chatMode;
@property (nonatomic, readonly) VCVideoRule *conferenceCaptureRule;
@property float conferenceVolume;
@property (nonatomic, copy) NSString *currentFocus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VideoConferenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) int deviceRole;
@property bool disableVAD;
@property int downstreamBandwidth;
@property (getter=isSpeakerPhoneEnabled) bool enableSpeakerPhone;
@property bool hasMic;
@property (readonly) unsigned long long hash;
@property (getter=isInputFrequencyMeteringEnabled, nonatomic) bool inputFrequencyMeteringEnabled;
@property (nonatomic, readonly) float inputMeterLevel;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (nonatomic) bool isFocus;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isUsingSuppression;
@property bool isValid;
@property unsigned int lastActiveCall;
@property (readonly) int localFrameHeight;
@property (readonly) int localFrameWidth;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (getter=isOutputFrequencyMeteringEnabled, nonatomic) bool outputFrequencyMeteringEnabled;
@property (nonatomic, readonly) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic) int packetsPerBundle;
@property (nonatomic) unsigned int preferredCodec;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property (nonatomic) bool requiresWifi;
@property (nonatomic) bool shouldPrioritizeParticipantIDForSIPInvite;
@property bool shouldTimeoutPackets;
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
@property (readonly) Class superclass;
@property unsigned int talkingPeersLimit;
@property (nonatomic) unsigned int transportType;
@property int upstreamBandwidth;
@property (nonatomic) bool useCompressedConnectionData;
@property (nonatomic) bool useViceroyBlobFormat;

- (void)NATTypeDictionaryUpdated:(id)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioIOFormat;
- (void)avConferencePreviewError:(id)arg1;
- (void)avConferenceScreenCaptureError:(id)arg1;
- (void)calculateMixingArrays:(unsigned int*)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1;
- (unsigned int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (id)callMetadataForCallID:(unsigned int)arg1;
- (bool)canProcessAudio;
- (void)cancelCallID:(unsigned int)arg1;
- (void)cancelCallID:(unsigned int)arg1 error:(id)arg2;
- (void)captureAsFocus:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)captureAsFocusClient:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)captureMeshMode:(struct opaqueVCAudioBufferList { }*)arg1;
- (int)chatMode;
- (void)cleanupManager;
- (void)cleanupProc:(id)arg1;
- (void)cleanupQueues;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(bool)arg2;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2;
- (id)clientCaptureRule;
- (id)conferenceCaptureRule;
- (bool)conferenceMatchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (int)conferenceOperatingMode;
- (float)conferenceVolume;
- (void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int)arg2 block:(id /* block */)arg3 queue:(id)arg4 caller:(id)arg5;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int*)arg2 error:(id*)arg3;
- (int)currentCameraID;
- (id)currentFocus;
- (void)dealloc;
- (void)defaultCleanupSession:(id)arg1;
- (id)delegate;
- (bool)deregisterForVideoFramesWithDeviceRole:(int)arg1;
- (int)deviceRole;
- (void)didChangeLocalVariablesForSession:(id)arg1;
- (void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned int)arg2;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (bool)disableVAD;
- (int)downstreamBandwidth;
- (void)forceNoICE:(bool)arg1;
- (bool)getIsAudioPaused:(bool*)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (bool)getIsVideoPaused:(bool*)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (bool)hasMic;
- (bool)hasSessionWaitingForSIPInvite;
- (id)initWithClientPid:(int)arg1;
- (unsigned int)initializeNewCallWithDeviceRole:(int)arg1;
- (bool)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (float)inputMeterLevel;
- (void)inviteDataForParticipantID:(id)arg1 callID:(unsigned int)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(id /* block */)arg5 queue:(id)arg6 caller:(id)arg7;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5;
- (bool)isFocus;
- (bool)isGKVoiceChat;
- (bool)isInputFrequencyMeteringEnabled;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputFrequencyMeteringEnabled;
- (bool)isOutputMeteringEnabled;
- (bool)isSpeakerPhoneEnabled;
- (bool)isUsingSuppression;
- (bool)isValid;
- (unsigned int)lastActiveCall;
- (double)localBitrateForCallID:(unsigned int)arg1;
- (int)localFrameHeight;
- (int)localFrameWidth;
- (double)localFramerateForCallID:(unsigned int)arg1;
- (double)localPacketLossRateForCallID:(unsigned int)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (void)markUnfinishedSessions;
- (bool)matchesCallID:(unsigned int)arg1;
- (bool)matchesOpenSessionForParticipantID:(id)arg1;
- (bool)matchesParticipantID:(id)arg1;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2;
- (unsigned int)momentsCapabilitiesWithNegotiationBlobMomentsSettings_Capabilities:(int)arg1;
- (int)natType;
- (int)natTypeForCallSessions:(const char *)arg1;
- (double)networkQualityForCallID:(unsigned int)arg1;
- (id)newSessionWithDeviceRole:(int)arg1;
- (void)notifyDelegateOfLocalVariablesChange;
- (bool)onCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (id)openSessionForParticipant:(id)arg1;
- (float)outputMeterLevel;
- (double)packetLossRateForCallID:(unsigned int)arg1;
- (int)packetsPerBundle;
- (unsigned char)powerFloatToInt:(float)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (unsigned int)preferredCodec;
- (void)processRelayRequestResponse:(unsigned int)arg1 responseDict:(id)arg2 didOriginateRequest:(bool)arg3;
- (void)processRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 didOriginateRequest:(bool)arg3;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (int)pullDecodedAsFocus:(struct opaqueVCAudioBufferList { }*)arg1;
- (int)pullDecodedAsFocusClient:(struct opaqueVCAudioBufferList { }*)arg1;
- (int)pullDecodedMeshMode:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (id)qualityDelegate;
- (void)rdlock;
- (bool)recvSamplesForSession:(id)arg1 sampleBuffer:(struct opaqueVCAudioBufferList { }*)arg2;
- (bool)registerForVideoFramesWithDeviceRole:(int)arg1 captureRule:(id)arg2 isUnpausing:(bool)arg3;
- (void)remoteAudioDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (double)remoteBitrateForCallID:(unsigned int)arg1;
- (void)remoteCancelledCallID:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })remoteFrameSizeForCallID:(unsigned int)arg1;
- (double)remoteFramerateForCallID:(unsigned int)arg1;
- (double)remotePacketLossRateForCallID:(unsigned int)arg1;
- (void)remoteVideoDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (bool)requiresWifi;
- (double)roundTripTimeForCallID:(unsigned int)arg1;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)sendData:(id)arg1 toCallID:(unsigned int)arg2 encrypted:(bool)arg3;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
- (void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned int)arg4;
- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;
- (void)session:(id)arg1 didPauseAudio:(bool)arg2 error:(id)arg3;
- (void)session:(id)arg1 didPauseVideo:(bool)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(id)arg1 didReceiveMomentsRequest:(id)arg2;
- (void)session:(id)arg1 didStart:(bool)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6;
- (bool)session:(id)arg1 didStopVideoIO:(bool)arg2 error:(id*)arg3;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)session:(id)arg1 localAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (bool)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(bool)arg6 isVideoPaused:(bool)arg7;
- (void)session:(id)arg1 remoteAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 remoteMediaStalled:(bool)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (void)session:(id)arg1 setMomentsCapabilities:(int)arg2;
- (void)session:(id)arg1 setRemoteBasebandCodecType:(unsigned int)arg2 sampleRate:(double)arg3;
- (void)session:(id)arg1 startAudioWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg2 internalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 internalSamplesPerFrame:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (bool)session:(id)arg1 startVideoReceive:(id*)arg2;
- (bool)session:(id)arg1 startVideoSend:(id*)arg2 captureRuleWifi:(id)arg3 captureRuleCell:(id)arg4 interface:(int)arg5 isUnpausing:(bool)arg6;
- (void)session:(id)arg1 stopAudioWithCompletionHandler:(id /* block */)arg2;
- (bool)session:(id)arg1 stopVideoReceive:(id*)arg2 isPausing:(bool)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(bool)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(bool)arg3 isRemote:(bool)arg4;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (id)sessionForSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)setActive:(bool)arg1;
- (void)setBWEOptions:(bool)arg1 UseNewBWEMode:(bool)arg2 FakeLargeFrameMode:(bool)arg3 ProbingSenderLog:(bool)arg4;
- (void)setCallReport:(unsigned int)arg1 withReport:(id)arg2;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (void)setCanProcessAudio:(bool)arg1;
- (void)setChatMode:(int)arg1;
- (void)setConferenceOperatingMode:(int)arg1;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)setConferenceVisualRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCallID:(unsigned int)arg2;
- (void)setConferenceVolume:(float)arg1;
- (void)setCurrentFocus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableVAD:(bool)arg1;
- (void)setDownstreamBandwidth:(int)arg1;
- (void)setEnableSpeakerPhone:(bool)arg1;
- (void)setHasMic:(bool)arg1;
- (void)setInputFrequencyMeteringEnabled:(bool)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setIsFocus:(bool)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLastActiveCall:(unsigned int)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputFrequencyMeteringEnabled:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setPacketsPerBundle:(int)arg1;
- (bool)setPauseAudio:(bool)arg1;
- (bool)setPauseAudio:(bool)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (bool)setPauseVideo:(bool)arg1;
- (bool)setPauseVideo:(bool)arg1 callID:(unsigned int)arg2 error:(id*)arg3;
- (void)setPeerCN:(id)arg1 callID:(unsigned int)arg2;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)setPreferredCodec:(unsigned int)arg1;
- (void)setQualityDelegate:(id)arg1;
- (void)setRequiresWifi:(bool)arg1;
- (void)setSendAudio:(bool)arg1 forCallID:(unsigned int)arg2;
- (void)setSessionID:(id)arg1 callID:(unsigned int)arg2;
- (void)setShouldPrioritizeParticipantIDForSIPInvite:(bool)arg1;
- (void)setShouldTimeoutPackets:(bool)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setUpAudioIO:(int)arg1;
- (void)setUpstreamBandwidth:(int)arg1;
- (void)setUseCompressedConnectionData:(bool)arg1;
- (void)setUseViceroyBlobFormat:(bool)arg1;
- (void)setupNATObserver;
- (bool)shouldPrioritizeParticipantIDForSIPInvite;
- (bool)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned int)arg2;
- (bool)shouldSendAudioForCallID:(unsigned int)arg1;
- (void)shouldSendBlackFrame:(bool)arg1 callID:(id)arg2;
- (bool)shouldTimeoutPackets;
- (int)sipCallbackNotification:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(int*)arg6;
- (id)speakingDelegate;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 oldCallID:(unsigned int)arg3 usingInviteData:(id)arg4 isCaller:(bool)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(bool)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 destination:(id)arg10 error:(id*)arg11;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(bool)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id*)arg8;
- (bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id*)arg10;
- (int)stateForCallID:(unsigned int)arg1;
- (id)statsForCallID:(unsigned int)arg1;
- (void)stopAllCalls:(id)arg1;
- (void)stopCallID:(unsigned int)arg1;
- (void)stopCallID:(unsigned int)arg1 didRemoteCancel:(bool)arg2 error:(id)arg3;
- (bool)stopVideoSend:(bool)arg1 error:(id*)arg2;
- (unsigned int)talkingPeersLimit;
- (void)thermalLevelDidChange:(int)arg1;
- (void)threadSafeCleanupSession:(id)arg1;
- (unsigned int)transportType;
- (void)triggerInterfaceChange;
- (int)tryrdlock;
- (void)unlock;
- (void)updateAudioTimestampsForSession:(id)arg1 withNewSampleTime:(unsigned int)arg2 hostTime:(double)arg3 numSamples:(int)arg4;
- (void)updateCapabilities:(id)arg1 forCallID:(unsigned int)arg2;
- (void)updateCapabilities:(id)arg1 forSession:(id)arg2;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (void)updateMeters:(unsigned short)arg1;
- (bool)updateSpeaking:(unsigned int)arg1 timeStamp:(unsigned int)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (int)upstreamBandwidth;
- (bool)useCompressedConnectionData;
- (bool)useViceroyBlobFormat;
- (void)vcAudioPowerLevelMonitor:(id)arg1 isAudioBelowThreshold:(bool)arg2;
- (void)warmupForCall;
- (void)wrlock;

@end
