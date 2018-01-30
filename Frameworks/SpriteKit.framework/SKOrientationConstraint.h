/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKOrientationConstraint : SKConstraint {
    SKNode * _node;
    SKRange * _offset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property SKNode *node;
@property (copy) SKRange *offset;
@property struct CGPoint { double x1; double x2; } point;

+ (id)constraintOrientingToNode:(id)arg1 offset:(id)arg2;
+ (id)constraintOrientingToPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 offset:(id)arg3;
+ (id)constraintOrientingToPoint:(struct CGPoint { double x1; double x2; })arg1 offset:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 offset:(id)arg3;
- (id)node;
- (id)offset;
- (struct CGPoint { double x1; double x2; })point;
- (void)setNode:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
