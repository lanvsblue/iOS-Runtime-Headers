/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct MediaPlayerPrivateMediaStreamAVFObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> { struct Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> > { struct WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> {} *x_1_2_1; } x_5_1_1; } x5; struct RefPtr<WebCore::MediaStreamPrivate> { struct MediaStreamPrivate {} *x_6_1_1; } x6; struct RefPtr<WebCore::MediaStreamTrackPrivate> { struct MediaStreamTrackPrivate {} *x_7_1_1; } x7; struct RetainPtr<WebAVSampleBufferStatusChangeListener> { void *x_8_1_1; } x8; struct RetainPtr<AVSampleBufferDisplayLayer> { void *x_9_1_1; } x9; struct RetainPtr<CALayer> { void *x_10_1_1; } x10; struct unique_ptr<WebCore::Clock, std::__1::default_delete<WebCore::Clock> > { struct __compressed_pair<WebCore::Clock *, std::__1::default_delete<WebCore::Clock> > { struct Clock {} *x_1_2_1; } x_11_1_1; } x11; struct MediaTime { union { long long x_1_2_1; double x_1_2_2; } x_12_1_1; unsigned int x_12_1_2; unsigned char x_12_1_3; } x12; } * _parent;
}

- (void)beginObservingLayers;
- (void)dealloc;
- (id)initWithParent:(struct MediaPlayerPrivateMediaStreamAVFObjC { int (**x1)(); int (**x2)(); int (**x3)(); struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> { struct Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> > { struct WeakReference<WebCore::MediaPlayerPrivateMediaStreamAVFObjC> {} *x_1_2_1; } x_5_1_1; } x5; struct RefPtr<WebCore::MediaStreamPrivate> { struct MediaStreamPrivate {} *x_6_1_1; } x6; struct RefPtr<WebCore::MediaStreamTrackPrivate> { struct MediaStreamTrackPrivate {} *x_7_1_1; } x7; struct RetainPtr<WebAVSampleBufferStatusChangeListener> { void *x_8_1_1; } x8; struct RetainPtr<AVSampleBufferDisplayLayer> { void *x_9_1_1; } x9; struct RetainPtr<CALayer> { void *x_10_1_1; } x10; struct unique_ptr<WebCore::Clock, std::__1::default_delete<WebCore::Clock> > { struct __compressed_pair<WebCore::Clock *, std::__1::default_delete<WebCore::Clock> > { struct Clock {} *x_1_2_1; } x_11_1_1; } x11; struct MediaTime { union { long long x_1_2_1; double x_1_2_2; } x_12_1_1; unsigned int x_12_1_2; unsigned char x_12_1_3; } x12; }*)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObservingLayers;

@end
