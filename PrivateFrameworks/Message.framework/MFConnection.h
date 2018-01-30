/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFConnection : NSObject <MFDiagnosticsGenerator> {
    unsigned int  _allowFallbacks;
    char * _buffer;
    unsigned long long  _bufferLength;
    long long  _bufferRemainingBytes;
    unsigned long long  _bufferStart;
    unsigned int  _compressionEnabled;
    MFConnectionSettings * _connectionSettings;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } * _deflater;
    unsigned long long  _desiredBufferLength;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } * _inflater;
    unsigned int  _isFetching;
    double  _lastUsedTime;
    unsigned int  _readBytesNotLogged;
    <MFSASLSecurityLayer> * _securityLayer;
    _MFSocket * _socket;
    char * _zbuffer;
}

@property (nonatomic, readonly) NSArray *authenticationMechanisms;
@property (nonatomic, readonly) NSArray *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBytesAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCellularConnection;
@property (nonatomic) bool isFetching;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) double lastUsedTime;
@property (nonatomic, readonly) bool loginDisabled;
@property (nonatomic, readonly) NSString *securityProtocol;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesOpportunisticSockets;

+ (void)flushLog;
+ (void)initialize;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (bool)logAllSocketActivity;
+ (id)logClasses;
+ (void)logConnection:(id)arg1 type:(long long)arg2 data:(id)arg3;
+ (void)readLoggingDefaults;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (void)setLogAllSocketActivity:(bool)arg1;
+ (void)setLogClasses:(id)arg1;
+ (bool)shouldTryFallbacksAfterError:(id)arg1;

- (void)_setupSocketWithSettings:(id)arg1;
- (bool)authenticateUsingAccount:(id)arg1;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (id)capabilities;
- (bool)connectUsingAccount:(id)arg1;
- (bool)connectUsingFallbacksForAccount:(id)arg1;
- (bool)connectUsingSettings:(id)arg1;
- (id)connectionSettings;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)enableThroughputMonitoring:(bool)arg1;
- (void)endCompression;
- (bool)hasBytesAvailable;
- (id)init;
- (bool)isCellularConnection;
- (bool)isFetching;
- (bool)isValid;
- (double)lastUsedTime;
- (void)logReadChars:(const char *)arg1 length:(unsigned long long)arg2;
- (bool)loginDisabled;
- (bool)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2;
- (bool)readLineIntoData:(id)arg1;
- (id)securityProtocol;
- (void)setAllowsFallbacks:(bool)arg1;
- (void)setConnectionSettings:(id)arg1;
- (void)setDesiredReadBufferLength:(unsigned long long)arg1;
- (void)setIsFetching:(bool)arg1;
- (bool)startCompression;
- (bool)startTLSForAccount:(id)arg1;
- (bool)usesOpportunisticSockets;
- (bool)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)writeData:(id)arg1;
- (bool)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
