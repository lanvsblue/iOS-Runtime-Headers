/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _configuration;
    NSURL * _configurationURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _version;
}

@property (copy) NSDictionary *configuration;
@property (copy) NSURL *configurationURL;
@property (readonly) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_queue_region:(id)arg1;
- (id)_queue_regions;
- (bool)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4;
- (id)brokerURLForRegion:(id)arg1;
- (bool)buddyManualProvisioningEnabledForRegion:(id)arg1;
- (bool)buddyProvisioningEnabledForRegion:(id)arg1;
- (bool)cameraFirstProvisioningEnabledForRegion:(id)arg1;
- (id)configuration;
- (id)configurationURL;
- (void)encodeWithCoder:(id)arg1;
- (bool)findWithoutNumberEnabledForRegion:(id)arg1;
- (id)heroImageManifestURLForRegion:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)manualProvisioningEnabledForRegion:(id)arg1;
- (id)maxRefreshIntervalForRegion:(id)arg1;
- (id)maxRefreshIntervalForUnsupportedRegion;
- (id)paymentServicesMerchantURLForRegion:(id)arg1;
- (id)paymentServicesURLForRegion:(id)arg1;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)arg1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)arg1;
- (bool)peerPaymentEnabledForRegion:(id)arg1;
- (id)primaryFeaturedNetworkForRegion:(id)arg1;
- (double)provisioningEnablementPercentageForRegion:(id)arg1;
- (bool)regionHasProvisioningEnablementPercentage:(id)arg1;
- (bool)remotePaymentsRequiredForVoiceover;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationURL:(id)arg1;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (bool)suppressCardholderNameFieldForRegion:(id)arg1;
- (id)unsupportedWebPaymentConfigurations;
- (bool)userCanResetCloudStoreApplePayViewForRegion:(id)arg1;
- (id)version;

@end
