/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDatabaseLookup : NSObject {
    bool  _cachedOnly;
    NSString * _feedID;
    FCFeedRange * _feedRange;
    unsigned long long  _maxCount;
    FCFeedItemFeature * _requiredFeature;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic, copy) FCFeedItemFeature *requiredFeature;

- (void).cxx_destruct;
- (bool)cachedOnly;
- (id)feedID;
- (id)feedRange;
- (unsigned long long)maxCount;
- (id)requiredFeature;
- (void)setCachedOnly:(bool)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedRange:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setRequiredFeature:(id)arg1;

@end
