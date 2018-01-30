/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageUtilities : NSObject

+ (long long)alignedRowBytesForWidth:(long long)arg1 bytesPerPixel:(long long)arg2;
+ (void)copyBuffer:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toBuffer:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
+ (void)copyPixelsFromImage:(id)arg1 atPoint:(struct { long long x1; long long x2; })arg2 toBuffer:(id)arg3;
+ (void)copyPixelsFromImage:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 destPtr:(void*)arg3 destPtrRowBytes:(long long)arg4;
+ (void)copyPixelsFromImage:(id)arg1 srcRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 destImage:(id)arg3 destOrigin:(struct { long long x1; long long x2; })arg4;
+ (void)copyPixelsFromSurfaceImage:(id)arg1 atPoint:(struct { long long x1; long long x2; })arg2 toBuffer:(id)arg3;
+ (void)copyPixelsFromSurfaceImage:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 destPtr:(void*)arg3 destPtrRowBytes:(long long)arg4;
+ (void)copyPixelsToImage:(id)arg1 atPoint:(struct { long long x1; long long x2; })arg2 fromBuffer:(id)arg3 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4;
+ (void)copyPixelsToImage:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 srcPtr:(const void*)arg3 srcPtrRowBytes:(long long)arg4;
+ (void)copySurface:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toSurfaceImage:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
+ (void)copySurfaceImage:(id)arg1 toImage:(id)arg2;
+ (void)copyTexture:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toSurfaceImage:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4 withContext:(id)arg5;
+ (void)fillPixelsInBuffer:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 srcPixel:(const void*)arg3;
+ (void)fillPixelsInImage:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 srcPixel:(const void*)arg3;
+ (void)renderImage:(id)arg1 toSurface:(id)arg2 atPoint:(struct { long long x1; long long x2; })arg3 withContext:(id)arg4 andColorSpace:(id)arg5;

@end
