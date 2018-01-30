/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPhotoFreezeInfo : MiroFreezeInfo {
    bool  _added;
    double  _duration;
    bool  _iris;
    bool  _removed;
    bool  _used;
}

@property (nonatomic) bool added;
@property (nonatomic) double duration;
@property (nonatomic) bool iris;
@property (nonatomic) bool removed;
@property (nonatomic) bool used;

- (bool)added;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (double)duration;
- (id)initWithData:(id)arg1;
- (bool)iris;
- (bool)isAdded;
- (bool)isFreeze;
- (bool)isRemoved;
- (bool)removed;
- (void)setAdded:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setIris:(bool)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setUsed:(bool)arg1;
- (bool)used;

@end
