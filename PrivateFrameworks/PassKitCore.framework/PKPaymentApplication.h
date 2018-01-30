/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletCurrencyCode;
    NSString * _appletDataFormat;
    NSString * _applicationIdentifier;
    bool  _auxiliary;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    PKFelicaPassProperties * _felicaProperties;
    bool  _inAppPINRequired;
    NSDecimalNumber * _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    long long  _paymentNetworkIdentifier;
    unsigned long long  _paymentType;
    bool  _requiresDeferredAuthorization;
    NSString * _sanitizedDPAN;
    NSString * _secureElementIdentifier;
    long long  _state;
    NSArray * _supportedExpressModes;
    bool  _supportsContactlessPayment;
    NSArray * _supportsExpressModes;
    bool  _supportsInAppPayment;
    bool  _supportsOptionalAuthentication;
    NSString * _suspendedReason;
}

@property (nonatomic, copy) NSString *appletCurrencyCode;
@property (nonatomic, copy) NSString *appletDataFormat;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (getter=isAuxiliary, nonatomic) bool auxiliary;
@property (nonatomic, copy) NSString *displayName;
@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (setter=setDPANSuffix:, nonatomic, copy) NSString *dpanSuffix;
@property (nonatomic, copy) PKFelicaPassProperties *felicaProperties;
@property (nonatomic) bool inAppPINRequired;
@property (nonatomic, copy) NSDecimalNumber *inAppPINRequiredAmount;
@property (nonatomic, copy) NSString *inAppPINRequiredCurrency;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) bool requiresDeferredAuthorization;
@property (setter=setSanitizedDPAN:, nonatomic, copy) NSString *sanitizedDPAN;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSString *stateAsString;
@property (nonatomic, copy) NSArray *supportedExpressModes;
@property (nonatomic) bool supportsContactlessPayment;
@property (nonatomic, copy) NSArray *supportsExpressModes;
@property (nonatomic, readonly) bool supportsExpressSuica;
@property (nonatomic) bool supportsInAppPayment;
@property (nonatomic) bool supportsOptionalAuthentication;
@property (nonatomic, copy) NSString *suspendedReason;

+ (id)applicationWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3;
- (bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 paymentApplicationStates:(id)arg4;
- (bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4;
- (bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4 paymentApplicationStates:(id)arg5;
- (id)appletCurrencyCode;
- (id)appletDataFormat;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (void)encodeWithCoder:(id)arg1;
- (id)felicaProperties;
- (unsigned long long)hash;
- (bool)inAppPINRequired;
- (id)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(bool)arg2;
- (bool)isAuxiliary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentApplication:(id)arg1;
- (long long)paymentNetworkIdentifier;
- (unsigned long long)paymentType;
- (id)protobuf;
- (bool)requiresDeferredAuthorization;
- (id)sanitizedDPAN;
- (id)secureElementIdentifier;
- (void)setAppletCurrencyCode:(id)arg1;
- (void)setAppletDataFormat:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuxiliary:(bool)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDPANSuffix:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFelicaProperties:(id)arg1;
- (void)setInAppPINRequired:(bool)arg1;
- (void)setInAppPINRequiredAmount:(id)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setPaymentNetworkIdentifier:(long long)arg1;
- (void)setPaymentType:(unsigned long long)arg1;
- (void)setRequiresDeferredAuthorization:(bool)arg1;
- (void)setSanitizedDPAN:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportedExpressModes:(id)arg1;
- (void)setSupportsContactlessPayment:(bool)arg1;
- (void)setSupportsExpressModes:(id)arg1;
- (void)setSupportsInAppPayment:(bool)arg1;
- (void)setSupportsOptionalAuthentication:(bool)arg1;
- (void)setSuspendedReason:(id)arg1;
- (long long)state;
- (id)stateAsString;
- (id)supportedExpressModes;
- (bool)supportsContactlessPayment;
- (bool)supportsExpressMode:(id)arg1;
- (id)supportsExpressModes;
- (bool)supportsExpressSuica;
- (bool)supportsInAppPayment;
- (bool)supportsOptionalAuthentication;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3;
- (id)suspendedReason;

@end
