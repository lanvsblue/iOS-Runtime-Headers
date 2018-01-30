/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetMutedCallAction : CXCallAction {
    bool  _muted;
}

@property (getter=isMuted, nonatomic) bool muted;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 muted:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isMuted;
- (void)setMuted:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
