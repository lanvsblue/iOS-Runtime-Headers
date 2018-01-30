/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFBOHandle : TSCH3DGLHandle {
    <TSCH3DGLBindable> * mColorbuffer;
    <TSCH3DGLBindable> * mDepthbuffer;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mSize;
}

@property (nonatomic, readonly) <TSCH3DGLBindable> *colorbuffer;
@property (nonatomic, readonly) <TSCH3DGLBindable> *depthbuffer;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)handleWithGLHandle:(unsigned int)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 colorBuffer:(id)arg3 depthBuffer:(id)arg4;

- (id).cxx_construct;
- (id)colorbuffer;
- (void)dealloc;
- (id)depthbuffer;
- (void)destroyFramebuffer;
- (void)destroyResourcesInContext:(id)arg1;
- (id)initWithGLHandle:(unsigned int)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 colorBuffer:(id)arg3 depthBuffer:(id)arg4;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (bool)valid;

@end
