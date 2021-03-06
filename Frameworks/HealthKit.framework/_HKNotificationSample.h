/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKNotificationSample : HKSample <HDCoding, _HKBinarySample> {
    NSUUID * _notificationIdentifier;
    NSString * _textDescription;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *notificationIdentifier;
@property (nonatomic, readonly) bool read;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textDescription;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)notificationSampleWithTitle:(id)arg1 textDescription:(id)arg2 identifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPayload:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)markAsReadInHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)notificationIdentifier;
- (id)payload;
- (bool)read;
- (id)readCopy;
- (void)setNotificationIdentifier:(id)arg1;
- (void)setTextDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textDescription;
- (id)title;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

@end
