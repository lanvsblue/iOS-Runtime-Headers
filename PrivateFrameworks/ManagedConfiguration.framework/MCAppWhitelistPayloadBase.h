/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAppWhitelistPayloadBase : MCPayload {
    bool  _allowAccessWithoutPasscode;
    bool  _forceAllowSupervisorAccess;
    NSArray * _whitelistedAppsAndOptions;
}

@property (nonatomic) bool allowAccessWithoutPasscode;
@property (nonatomic) bool forceAllowSupervisorAccess;
@property (nonatomic, retain) NSArray *whitelistedAppsAndOptions;

+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;

- (void).cxx_destruct;
- (bool)allowAccessWithoutPasscode;
- (id)description;
- (bool)forceAllowSupervisorAccess;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAllowAccessWithoutPasscode:(bool)arg1;
- (void)setForceAllowSupervisorAccess:(bool)arg1;
- (void)setWhitelistedAppsAndOptions:(id)arg1;
- (id)stubDictionary;
- (id)whitelistedAppsAndOptions;

@end
