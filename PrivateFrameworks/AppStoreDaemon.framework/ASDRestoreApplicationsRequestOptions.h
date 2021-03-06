/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions {
    bool  _createsPlaceholders;
    NSArray * _items;
    bool  _restoreApplicationData;
}

@property (nonatomic) bool createsPlaceholders;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) bool restoreApplicationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createsPlaceholders;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (bool)restoreApplicationData;
- (void)setCreatesPlaceholders:(bool)arg1;
- (void)setRestoreApplicationData:(bool)arg1;

@end
