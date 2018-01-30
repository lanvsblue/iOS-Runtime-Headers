/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLImageDataInfo : NSObject {
    long long  _EXIFOrientation;
    NSURL * _URL;
    NSString * _UTI;
    bool  _canDownloadFromCloud;
    long long  _deliveredFormat;
    bool  _deliveredPlaceholder;
    NSString * _sandboxExtensionToken;
}

@property long long EXIFOrientation;
@property (retain) NSURL *URL;
@property (retain) NSString *UTI;
@property bool canDownloadFromCloud;
@property long long deliveredFormat;
@property bool deliveredPlaceholder;
@property (retain) NSString *sandboxExtensionToken;

- (long long)EXIFOrientation;
- (id)URL;
- (id)UTI;
- (bool)canDownloadFromCloud;
- (void)dealloc;
- (long long)deliveredFormat;
- (bool)deliveredPlaceholder;
- (id)description;
- (id)sandboxExtensionToken;
- (void)setCanDownloadFromCloud:(bool)arg1;
- (void)setDeliveredFormat:(long long)arg1;
- (void)setDeliveredPlaceholder:(bool)arg1;
- (void)setEXIFOrientation:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUTI:(id)arg1;

@end
