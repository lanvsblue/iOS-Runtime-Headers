/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection * _connection;
    void * _endpoint;
}

@property (nonatomic, readonly) void*endpoint;

+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (unsigned long long)_outputDevicesComposition;
- (bool)canAccessRemoteAssets;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void*)endpoint;
- (id)groupUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isAirPlayingToDevice;
- (bool)isAppleTVRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isHomePodRoute;
- (bool)isRoutingToWirelessDevice;
- (bool)isStereoPair;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;

@end