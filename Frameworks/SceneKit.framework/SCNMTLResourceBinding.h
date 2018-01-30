/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLResourceBinding : NSObject {
    MTLArgument * _argument;
    id  _bindBlock;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _indices;
    bool  _needsRenderResource;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _samplerIndices;
}

@property (nonatomic, retain) MTLArgument *argument;
@property (nonatomic, copy) id bindBlock;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsRenderResource;
@property (nonatomic, readonly) unsigned long long type;

- (id)argument;
- (id)bindBlock;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (bool)needsRenderResource;
- (void)setArgument:(id)arg1;
- (void)setBindBlock:(id)arg1;
- (void)setNeedsRenderResource:(bool)arg1;
- (unsigned long long)type;

@end
