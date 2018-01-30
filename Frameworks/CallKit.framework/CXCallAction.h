/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallAction : CXAction {
    NSUUID * _callUUID;
}

@property (nonatomic, copy) NSUUID *callUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCallUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCallUUID:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
