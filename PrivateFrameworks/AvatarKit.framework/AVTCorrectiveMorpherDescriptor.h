/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTCorrectiveMorpherDescriptor : NSObject {
    long long  _correctiveIndex;
    SCNNode * _readMorpherNode;
    long long  _target0Index;
    long long  _target1Index;
    long long  _target2Index;
    long long  _target3Index;
    unsigned long long  _targetCount;
    SCNMorpher * _writeMorpher;
}

@property (nonatomic) long long correctiveIndex;
@property (nonatomic) SCNNode *readMorpherNode;
@property (nonatomic) long long target0Index;
@property (nonatomic) long long target1Index;
@property (nonatomic) long long target2Index;
@property (nonatomic) long long target3Index;
@property (nonatomic) unsigned long long targetCount;
@property (nonatomic) SCNMorpher *writeMorpher;

- (long long)correctiveIndex;
- (id)readMorpherNode;
- (void)setCorrectiveIndex:(long long)arg1;
- (void)setReadMorpherNode:(id)arg1;
- (void)setTarget0Index:(long long)arg1;
- (void)setTarget1Index:(long long)arg1;
- (void)setTarget2Index:(long long)arg1;
- (void)setTarget3Index:(long long)arg1;
- (void)setTargetCount:(unsigned long long)arg1;
- (void)setWriteMorpher:(id)arg1;
- (long long)target0Index;
- (long long)target1Index;
- (long long)target2Index;
- (long long)target3Index;
- (unsigned long long)targetCount;
- (id)writeMorpher;

@end
