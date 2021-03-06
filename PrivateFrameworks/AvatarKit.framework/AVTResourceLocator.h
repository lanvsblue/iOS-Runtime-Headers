/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTResourceLocator : NSObject {
    NSURL * _componentsURL;
    NSURL * _resourcesURL;
}

@property (readonly) NSURL *componentsURL;
@property (readonly) NSURL *maskImagesURL;
@property (readonly) NSURL *materialsURL;
@property (readonly) NSURL *presetThumbnailsURL;
@property (readonly) NSURL *propsURL;
@property (readonly) NSURL *resourcesURL;

+ (id)sharedResourceLocator;

- (void).cxx_destruct;
- (id)bestURLForAssetType:(id)arg1;
- (id)componentsURL;
- (id)maskImagesURL;
- (id)materialsURL;
- (id)presetThumbnailsURL;
- (id)propsURL;
- (id)resourcesURL;

@end
