/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString;

@interface LBSAddressRange : PBCodable {
    BOOL _hasParameter_is_synthesized;
    BOOL _hasSame_parity;
    NSMutableArray *_numbers;
    BOOL _parameter_is_synthesized;
    NSMutableArray *_parameters;
    NSString *_prefix;
    BOOL _same_parity;
    NSString *_suffix;
}

@property(readonly) BOOL hasParameter_is_synthesized;
@property(readonly) BOOL hasPrefix;
@property(readonly) BOOL hasSame_parity;
@property(readonly) BOOL hasSuffix;
@property(retain) NSMutableArray * numbers;
@property(readonly) int numbersCount;
@property BOOL parameter_is_synthesized;
@property(retain) NSMutableArray * parameters;
@property(readonly) int parametersCount;
@property(retain) NSString * prefix;
@property BOOL same_parity;
@property(retain) NSString * suffix;

- (void)addNumber:(int)arg1;
- (void)addParameter:(float)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasParameter_is_synthesized;
- (BOOL)hasPrefix;
- (BOOL)hasSame_parity;
- (BOOL)hasSuffix;
- (id)init;
- (int)numberAtIndex:(unsigned int)arg1;
- (id)numbers;
- (int)numbersCount;
- (float)parameterAtIndex:(unsigned int)arg1;
- (BOOL)parameter_is_synthesized;
- (id)parameters;
- (int)parametersCount;
- (id)prefix;
- (BOOL)readFrom:(id)arg1;
- (BOOL)same_parity;
- (void)setNumber:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setNumbers:(id)arg1;
- (void)setParameter:(float)arg1 atIndex:(unsigned int)arg2;
- (void)setParameter_is_synthesized:(BOOL)arg1;
- (void)setParameters:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setSame_parity:(BOOL)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;
- (void)writeTo:(id)arg1;

@end