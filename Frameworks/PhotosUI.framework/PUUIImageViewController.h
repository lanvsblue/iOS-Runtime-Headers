/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIImageViewController : PLUIImageViewController <PUPhotoPickerSelectionHandler, PUPhotoPickerServicesConsumer, PUVideoPlayerViewDelegate, UIGestureRecognizerDelegate> {
    int  __animatedImageRequestID;
    ISAnimatedImageView * __animatedImageView;
    NSURL * __assetURL;
    PUVideoPlayerView * __autoloopView;
    int  __imageManagerVideoRequestID;
    PUBrowsingIrisPlayer * __irisPlayer;
    PHLivePhotoView * __livePhotoView;
    NSURL * __videoAssetURL;
    PHAsset * _asset;
    bool  _isAnimatedImage;
    bool  _isAutoloop;
    bool  _isIris;
    <PUPhotoPicker> * _photoPicker;
    bool  _wantsLivePhotoResult;
    bool  _wantsVideoURLResult;
}

@property (setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (setter=_setAnimatedImageView:, nonatomic, retain) ISAnimatedImageView *_animatedImageView;
@property (setter=_setAssetURL:, nonatomic, retain) NSURL *_assetURL;
@property (setter=_setAutoloopView:, nonatomic, retain) PUVideoPlayerView *_autoloopView;
@property (setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID;
@property (nonatomic, retain) PUBrowsingIrisPlayer *_irisPlayer;
@property (setter=_setLivePhotoView:, nonatomic, retain) PHLivePhotoView *_livePhotoView;
@property (setter=_setVideoAssetURL:, nonatomic, retain) NSURL *_videoAssetURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUPhotoPicker> *photoPicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_animatedImageRequestID;
- (id)_animatedImageView;
- (id)_assetURL;
- (id)_autoloopView;
- (void)_fetchAnimatedImageWithCompletion:(id /* block */)arg1;
- (void)_fetchLivePhotoWithCompletion:(id /* block */)arg1;
- (void)_fetchPreviewImageWithCompletion:(id /* block */)arg1;
- (void)_fetchVideoWithCompletion:(id /* block */)arg1;
- (void)_finishAutoloopDeliveryWithVideoURL:(id)arg1 gifURL:(id)arg2;
- (void)_generateGIFFromVideoURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleAnimatedImagePreviewResult:(id)arg1;
- (void)_handleAnimatedImageResult:(id)arg1;
- (void)_handleAutoloopPreviewImageResult:(id)arg1;
- (void)_handleAutoloopVideoResult:(id)arg1;
- (void)_handleLivePhotoRequestResult:(id)arg1 info:(id)arg2;
- (int)_imageManagerVideoRequestID;
- (id)_irisPlayer;
- (bool)_isPhotosPickerExtensionAvailable;
- (id)_livePhotoView;
- (void)_loadAnimatedImage;
- (void)_loadAutoloopVideo;
- (void)_loadLivePhoto;
- (void)_setAnimatedImageRequestID:(int)arg1;
- (void)_setAnimatedImageView:(id)arg1;
- (void)_setAssetURL:(id)arg1;
- (void)_setAutoloopView:(id)arg1;
- (void)_setImageManagerVideoRequestID:(int)arg1;
- (void)_setLivePhotoView:(id)arg1;
- (void)_setVideoAssetURL:(id)arg1;
- (id)_videoAssetURL;
- (id)chooseButtonTitle;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)didUpdateNavigationBarAppearance;
- (bool)disableVideoTrimMessage;
- (bool)doNotTranscode;
- (id)exportPreset;
- (bool)force1XCroppedImage;
- (bool)forceNativeScreenScale;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleAutoloopSelected;
- (void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(bool)arg4;
- (void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2;
- (bool)imagePickerAllowsEditing;
- (unsigned long long)imagePickerSavingOptions;
- (id)initWithPhoto:(id)arg1 imagePickerProperties:(id)arg2 expectsLivePhoto:(bool)arg3;
- (id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1;
- (bool)isDisplayedInPhotoPicker;
- (void)loadView;
- (void)performPhotoPickerSelection;
- (id)photoPicker;
- (void)setIrisPlayer:(id)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)set_irisPlayer:(id)arg1;
- (void)setupNavigationItem;
- (bool)uiipc_useTelephonyUI;
- (id)videoMaximumDuration;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(bool)arg2;
- (id)videoQuality;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (bool)viewImageBeforeSelecting;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsAutoloopUI;
- (bool)wantsLegacyImageUI;

@end
