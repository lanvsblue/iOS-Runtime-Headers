/* Generated by RuntimeBrowser.
 */

@protocol NUDevice <NSObject>

@required

- (long long)defaultSampleMode;
- (unsigned long long)family;
- (bool)hasMetalSupport;
- (bool)hasOpenGLSupport;
- (<NURenderer> *)lowPriorityRenderer;
- (NSString *)model;
- (NSString *)name;
- (long long)openGLVirtualScreen;
- (<NURenderer> *)renderer;

@end
