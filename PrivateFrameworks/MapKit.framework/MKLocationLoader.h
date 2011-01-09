/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;



@interface MKLocationLoader : NSObject 
{
    NSInteger _requestType;
    NSInteger _queryType;
    NSString *_queryTerm;
    struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; } *_centerPoint;
    unsigned char _zoomLevel;
    BOOL _isGPSLocation;
    struct __CTServerConnection { } *_cellConnection;
    BOOL _didCellMonitor;

  /* Error parsing encoded ivar type info: ^{MKLocationRequester=^^?i^{Connection}*BB^{LocationRequest}^{LocationResponse}@} */
    struct MKLocationRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; struct LocationRequest {} *x7; struct LocationResponse {} *x8; id x9; } *_requester;

    id _delegate;
    BOOL _isWaiting;
}


- (void)_setWaiting:(BOOL)arg1;
- (BOOL)_addServingCellToRequest:(struct LocationRequest { int (**x1)(); NSInteger x2; double x3; char *x4; NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; long long x9; NSInteger x10; id x11; struct MapPoint { NSInteger x_12_1_1; NSInteger x_12_1_2; NSInteger x_12_1_3; NSInteger x_12_1_4; } x12; unsigned char x13; void*x14; NSInteger x15; NSInteger x16; NSInteger x17; id x18; struct GVector<GMM::Cell> { void *x_19_1_1; NSUInteger x_19_1_2; NSUInteger x_19_1_3; NSUInteger x_19_1_4; } x19; struct GVector<GMM::WiFiAP> { void *x_20_1_1; NSUInteger x_20_1_2; NSUInteger x_20_1_3; NSUInteger x_20_1_4; } x20; void*x21; }*)arg1 connection:(struct __CTServerConnection { }*)arg2;
     /* Encoded args for previous method: c16@0:4^{LocationRequest=^^?id*iBBBqi@{MapPoint=iiii}CBiii@{GVector<GMM::Cell>=^vIII}{GVector<GMM::WiFiAP>=^vIII}B}8^{__CTServerConnection=}12 */

- (BOOL)_addCellsToRequest:(struct LocationRequest { int (**x1)(); NSInteger x2; double x3; char *x4; NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; long long x9; NSInteger x10; id x11; struct MapPoint { NSInteger x_12_1_1; NSInteger x_12_1_2; NSInteger x_12_1_3; NSInteger x_12_1_4; } x12; unsigned char x13; void*x14; NSInteger x15; NSInteger x16; NSInteger x17; id x18; struct GVector<GMM::Cell> { void *x_19_1_1; NSUInteger x_19_1_2; NSUInteger x_19_1_3; NSUInteger x_19_1_4; } x19; struct GVector<GMM::WiFiAP> { void *x_20_1_1; NSUInteger x_20_1_2; NSUInteger x_20_1_3; NSUInteger x_20_1_4; } x20; void*x21; }*)arg1 timestamp:(long)arg2 connection:(struct __CTServerConnection { }*)arg3;
     /* Encoded args for previous method: c20@0:4^{LocationRequest=^^?id*iBBBqi@{MapPoint=iiii}CBiii@{GVector<GMM::Cell>=^vIII}{GVector<GMM::WiFiAP>=^vIII}B}8l12^{__CTServerConnection=}16 */

- (void)_reportFailure;
- (NSInteger)_radioTypeForConnection:(struct __CTServerConnection { }*)arg1;
- (void)_startLocationRequest;
- (void)cellMonitorReadyWithConnection:(struct __CTServerConnection { }*)arg1;
- (void)cellMonitorFailed;
- (BOOL)_collectCellInfo;
- (id)initWithDelegate:(id)arg1;
- (id)initWithQueryType:(NSInteger)arg1 queryTerm:(id)arg2 centerPoint:(struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; })arg3 isGPSLocation:(BOOL)arg4 zoomLevel:(unsigned char)arg5;
- (void)dealloc;
- (void)cancel;
- (void)_finishedWithResult:(id)arg1;
- (void)locationRequesterReceivedLocation:(id)arg1;
- (void)locationRequesterFailed:(id)arg1;

@end