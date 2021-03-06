/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryCollectionSettingItem : NSObject <HFPrettyDescription, HFStateDumpSerializable, NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSData * _serializedValue;
    HMAccessoryCollectionSetting * _setting;
    <NSObject><NSCopying><NSSecureCoding> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) NSData *serializedValue;
@property HMAccessoryCollectionSetting *setting;
@property (readonly) Class superclass;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyQueue;
- (id)serializedValue;
- (void)setSetting:(id)arg1;
- (id)setting;
- (id)shortDescription;
- (id)value;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_alarmItemsMatchingAlarmId:(id)arg1 withinItemArray:(id)arg2;
+ (id)hf_collectionSettingItemForAlarm:(id)arg1;

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
