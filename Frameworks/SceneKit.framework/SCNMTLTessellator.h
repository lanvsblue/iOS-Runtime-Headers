/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLTessellator : NSObject {
    struct { 
        unsigned char type; 
        float tessellationFactorScale; 
        unsigned int tessellationPartitionMode; 
        unsigned char tessellationSmoothingMode; 
        union { 
            struct { 
                float edgeTessellationFactor; 
                float insideTessellationFactor; 
            } uniform; 
            struct { 
                float projectedEdgeLength; 
            } screenSpaceAdaptive; 
            struct { 
                float maximumEdgeLength; 
            } constrainedEdgeLength; 
            struct { 
                unsigned char tessellationLevel; 
                unsigned int wantsSingleCreasePatch : 1; 
                unsigned int useScreenSpaceTessellation : 1; 
            } subdivisionSurface; 
        } parameters; 
    }  _cachedTessellator;
    struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; } * _geometry;
    SCNMetalResourceManager * _resourceManager;
    <MTLBuffer> * _tessellationFactorBuffer;
}

- (struct { unsigned int x1 : 2; unsigned int x2 : 2; unsigned int x3 : 2; unsigned int x4 : 1; })_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;
- (void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5;
- (void)dealloc;
- (void)draw:(struct { id x1; unsigned int x2; id x3; id x4; id x5; })arg1;
- (id)initWithGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1 resourceManager:(id)arg2;
- (id /* block */)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2;
- (unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5;
- (void)subdivisionSurfaceTessellationDraw:(struct { id x1; unsigned int x2; id x3; id x4; id x5; })arg1;
- (void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5;
- (void)update:(struct { id x1; id x2; struct { /* ? */ } *x3; bool x4; bool x5; })arg1;
- (void)updateConstrainedEdgeLengthTessellator:(struct { unsigned char x1; float x2; unsigned int x3; unsigned char x4; union { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; } x_5_1_2; struct { float x_3_2_1; } x_5_1_3; struct { unsigned char x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; } x_5_1_4; } x5; })arg1 withMesh:(id)arg2 computeCommandEncoder:(id)arg3;
- (void)updateScreenSpaceAdaptiveTessellator:(struct { unsigned char x1; float x2; unsigned int x3; unsigned char x4; union { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; } x_5_1_2; struct { float x_3_2_1; } x_5_1_3; struct { unsigned char x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; } x_5_1_4; } x5; })arg1 parameters:(struct { id x1; id x2; struct { /* ? */ } *x3; bool x4; bool x5; })arg2;
- (void)updateSubdivisionSurfaceTessellator:(struct { unsigned char x1; float x2; unsigned int x3; unsigned char x4; union { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; } x_5_1_2; struct { float x_3_2_1; } x_5_1_3; struct { unsigned char x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; } x_5_1_4; } x5; })arg1 parameters:(struct { id x1; id x2; struct { /* ? */ } *x3; bool x4; bool x5; })arg2;
- (void)updateUniformTessellator:(struct { unsigned char x1; float x2; unsigned int x3; unsigned char x4; union { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; } x_5_1_2; struct { float x_3_2_1; } x_5_1_3; struct { unsigned char x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; } x_5_1_4; } x5; })arg1;

@end
