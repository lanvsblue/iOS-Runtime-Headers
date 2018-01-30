/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {
    EAGLContext * mContext;
    unsigned int  mFramebuffer;
    unsigned int  mRenderbuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)createFramebufferFromLayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isValid;
- (void)lock;
- (bool)makeCurrentContext;
- (void)presentRenderbuffer;
- (void)teardown;
- (void)unlock;

@end
