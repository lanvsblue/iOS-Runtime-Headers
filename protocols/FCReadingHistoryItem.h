/* Generated by RuntimeBrowser.
 */

@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>

@required

- (NSString *)articleID;
- (unsigned long long)articleLikingStatus;
- (CKRecord *)asCKRecord;
- (NSDate *)firstSeenAt;
- (NSDate *)firstSeenAtOfMaxVersionSeen;
- (unsigned long long)flags;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (NSString *)identifier;
- (NSDate *)lastVisitedAt;
- (long long)maxVersionRead;
- (long long)maxVersionSeen;

@end
