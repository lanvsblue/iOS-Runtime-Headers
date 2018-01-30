/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)bestArtworkSizes;

- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)supportedSizesForCatalog:(id)arg1;

@end
