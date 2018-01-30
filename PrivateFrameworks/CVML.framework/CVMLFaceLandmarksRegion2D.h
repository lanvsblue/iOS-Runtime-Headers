/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceLandmarksRegion2D : CVMLFaceLandmarksRegion {
    const struct CGPoint { double x1; double x2; } * _points;
}

@property const struct CGPoint { double x1; double x2; }*points;

- (void)dealloc;
- (id)initWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })pointAtIndex:(unsigned long long)arg1;
- (const struct CGPoint { double x1; double x2; }*)points;
- (void)setPoints:(const struct CGPoint { double x1; double x2; }*)arg1;

@end
